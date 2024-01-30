@interface CPRotatedRegion : CPRegion {
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } normalizedBounds;
    BOOL dirtyNormalizedBounds;
}

- (struct CGPoint { double x0; double x1; })anchor;
- (double)center;
- (double)right;
- (double)bottom;
- (double)left;
- (id)init;
- (double)top;
- (void)fitBoundsToChildren;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })normalizedBounds;
- (void)resizeWith:(id)a0;

@end
