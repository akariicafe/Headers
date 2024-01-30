@interface SURotationImageModifier : SUImageModifier

@property (nonatomic) float degrees;
@property (nonatomic) long long orientation;

- (BOOL)isEqual:(id)a0;
- (void)drawBeforeImageForContext:(struct CGContext { } *)a0 imageFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 finalSize:(struct CGSize { double x0; double x1; })a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })imageFrameForImage:(id)a0 currentFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 finalSize:(struct CGSize { double x0; double x1; })a2;

@end
