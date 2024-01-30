@class NSMutableArray, NSString;
@protocol _UIFocusRegionContainer;

@interface _UIFocusRegion : NSObject <_UIFocusDebugQuickLookImageDrawing, NSCopying>

@property (nonatomic, setter=_setFrame:) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } frame;
@property (retain, nonatomic, getter=_originalRegion, setter=_setOriginRegion:) _UIFocusRegion *originalRegion;
@property (retain, nonatomic, getter=_mutableOccludingRegions, setter=_setMutableOccludingRegions:) NSMutableArray *mutableOccludingRegions;
@property (readonly, weak, nonatomic, getter=_debugAssociatedObject) id debugAssociatedObject;
@property (retain, nonatomic) id<_UIFocusRegionContainer> regionContainer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)__regionsByEvaluatingOcclusionsForBaseRegions:(id)a0 occludingRegions:(id)a1 baseRegionsCanOccludeEachOther:(BOOL)a2;
+ (id)_regionsByOccludingRegions:(id)a0 beneathRegions:(id)a1;
+ (id)_regionsByEvaluatingOcclusionsForRegions:(id)a0;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (double)_focusPriority;
- (BOOL)_canOccludeRegionsBelow;
- (unsigned long long)_focusableBoundaries;
- (id)_focusedItemForLinearSorting:(id)a0 inMap:(id)a1;
- (id)_defaultFocusItem;
- (long long)_preferredDistanceComparisonType;
- (id)_occludingRegions;
- (BOOL)_canBeOccludedByRegionsAbove;
- (id)_nextFocusedItemForFocusMovementRequest:(id)a0 inMap:(id)a1;
- (BOOL)_shouldUseNextFocusedItemForLinearSorting;
- (void)_willParticipateAsDestinationRegionInFocusUpdate:(id)a0;
- (void)_addOccludingRegion:(id)a0;
- (id)_subregionWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (unsigned long long)_boundariesBlockingFocusMovementRequest:(id)a0;
- (id)_visibleSubregionsWhenOccludedByRegion:(id)a0;
- (id)_resizeToRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)_shouldCropRegionToSearchArea;
- (unsigned long long)_effectiveFocusableBoundariesForHeading:(unsigned long long)a0;
- (unsigned long long)_effectiveBoundariesBlockingFocusMovementRequest:(id)a0;
- (void)_didParticipateAsDestinationRegionInFocusUpdate:(id)a0;
- (void).cxx_destruct;
- (BOOL)_isUnclippable;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)_shouldDrawDebugQuickLookImageWithInfo:(id)a0;
- (void)_drawDebugQuickLookImageWithInfo:(id)a0 inContext:(struct CGContext { } *)a1;
- (BOOL)_ignoresSpeedBumpEdges;

@end
