@protocol _UIFocusGuideRegionDelegate;

@interface _UIFocusGuideRegion : _UIFocusRegion

@property (nonatomic, setter=_setIsUnoccludable:) BOOL _isUnoccludable;
@property (nonatomic, setter=_setFocusPriority:) double _focusPriority;
@property (nonatomic, setter=_setIgnoresSpeedBumpEdges:) BOOL _ignoresSpeedBumpEdges;
@property (nonatomic, setter=_setIsUnclippable:) BOOL _isUnclippable;
@property (weak, nonatomic) id<_UIFocusGuideRegionDelegate> delegate;

- (BOOL)_canOccludeRegionsBelow;
- (unsigned long long)_focusableBoundaries;
- (id)_debugAssociatedObject;
- (id)_visualRepresentationColor;
- (id)_fallbackFocusItemForMovementRequest:(id)a0 inFocusMap:(id)a1;
- (BOOL)_isEnabledForFocusedRegion:(id)a0;
- (id)_delegatePreferredFocusEnvironmentsForMovementRequest:(id)a0;
- (id)_focusedItemForLinearSorting:(id)a0 inMap:(id)a1;
- (long long)_preferredDistanceComparisonType;
- (long long)_visualRepresentationPatternType;
- (BOOL)_canBeOccludedByRegionsAbove;
- (id)_nextFocusedItemForFocusMovementRequest:(id)a0 inMap:(id)a1;
- (BOOL)_shouldUseNextFocusedItemForLinearSorting;
- (void)_willParticipateAsDestinationRegionInFocusUpdate:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)_shouldDrawDebugQuickLookImageWithInfo:(id)a0;
- (void)_drawDebugQuickLookImageWithInfo:(id)a0 inContext:(struct CGContext { } *)a1;

@end
