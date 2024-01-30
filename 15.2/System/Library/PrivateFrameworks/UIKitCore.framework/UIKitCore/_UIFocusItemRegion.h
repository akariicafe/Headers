@protocol UIFocusItem;

@interface _UIFocusItemRegion : _UIFocusRegion {
    struct { unsigned char itemIsEligibleForFocusOcclusion : 1; unsigned char itemIsFocusable : 1; unsigned char itemIsTransparent : 1; } _flags;
}

@property (readonly, weak, nonatomic) id<UIFocusItem> item;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)description;
- (BOOL)_canOccludeRegionsBelow;
- (unsigned long long)_focusableBoundaries;
- (id)_debugAssociatedObject;
- (id)_visualRepresentationColor;
- (id)_defaultFocusItem;
- (long long)_preferredDistanceComparisonType;
- (long long)_visualRepresentationPatternType;
- (BOOL)_canBeOccludedByRegionsAbove;
- (id)_nextFocusedItemForFocusMovementRequest:(id)a0 inMap:(id)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 item:(id)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)_shouldDrawDebugQuickLookImageWithInfo:(id)a0;
- (void)_drawDebugQuickLookImageWithInfo:(id)a0 inContext:(struct CGContext { } *)a1;

@end
