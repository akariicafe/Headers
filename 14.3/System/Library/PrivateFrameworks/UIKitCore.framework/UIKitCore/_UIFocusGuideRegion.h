@protocol _UIFocusGuideRegionDelegate;

@interface _UIFocusGuideRegion : _UIFocusRegion

@property (nonatomic, setter=_setIsFocusGuideUnoccludable:) BOOL _isFocusGuideUnoccludable;
@property (nonatomic, setter=_setRegionFocusPriority:) double _regionFocusPriority;
@property (weak, nonatomic) id<_UIFocusGuideRegionDelegate> delegate;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_visualRepresentationColor;
- (id)_fallbackFocusItemForMovementRequest:(id)a0 inFocusMap:(id)a1;
- (unsigned long long)_focusableBoundaries;
- (BOOL)_isEnabledForFocusedRegion:(id)a0;
- (BOOL)_canBeOccludedByRegionsAbove;
- (id)_delegatePreferredFocusEnvironmentsForMovementRequest:(id)a0;
- (id)_focusedItemForLinearSorting:(id)a0 inMap:(id)a1;
- (long long)_preferredDistanceComparisonType;
- (BOOL)_canOccludeRegionsBelow;
- (long long)_visualRepresentationPatternType;
- (id)_debugAssociatedObject;
- (id)_nextFocusedItemForFocusMovementRequest:(id)a0 inMap:(id)a1;
- (BOOL)_shouldUseNextFocusedItemForLinearSorting;
- (void)_willParticipateAsDestinationRegionInFocusUpdate:(id)a0;
- (BOOL)_shouldDrawDebugQuickLookImageWithInfo:(id)a0;
- (void)_drawDebugQuickLookImageWithInfo:(id)a0 inContext:(struct CGContext { } *)a1;

@end
