@protocol UIFocusItem;

@interface _UIFocusItemRegion : _UIFocusRegion {
    BOOL _itemIsEligibleForFocusInteraction;
    BOOL _itemIsFocusable;
}

@property (readonly, weak, nonatomic) id<UIFocusItem> item;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_visualRepresentationColor;
- (unsigned long long)_focusableBoundaries;
- (BOOL)_canBeOccludedByRegionsAbove;
- (long long)_preferredDistanceComparisonType;
- (BOOL)_canOccludeRegionsBelow;
- (long long)_visualRepresentationPatternType;
- (id)_debugAssociatedObject;
- (id)_nextFocusedItemForFocusMovementRequest:(id)a0 inMap:(id)a1;
- (id)_defaultFocusItem;
- (BOOL)_shouldCropRegionToSearchArea;
- (id)description;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 item:(id)a1;
- (BOOL)_shouldDrawDebugQuickLookImageWithInfo:(id)a0;
- (void)_drawDebugQuickLookImageWithInfo:(id)a0 inContext:(struct CGContext { } *)a1;

@end
