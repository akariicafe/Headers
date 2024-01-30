@interface SBMutableBannerUnfurlSourceContext : SBBannerUnfurlSourceContext

@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } referenceCoordinateSpaceBounds;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } referenceFrame;
@property (nonatomic) double cornerRadius;
@property (nonatomic) struct CGPoint { double x0; double x1; } referenceVelocity;

- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void)setReferenceFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setCornerRadius:(double)a0;
- (void)setReferenceCoordinateSpaceBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setReferenceVelocity:(struct CGPoint { double x0; double x1; })a0;

@end
