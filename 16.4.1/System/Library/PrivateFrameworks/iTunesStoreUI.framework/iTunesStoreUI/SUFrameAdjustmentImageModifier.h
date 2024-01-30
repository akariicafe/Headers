@interface SUFrameAdjustmentImageModifier : SUImageModifier

@property (nonatomic) BOOL shouldSizeDownToFit;
@property (nonatomic) unsigned long long sizingMask;

- (BOOL)isEqual:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })imageFrameForImage:(id)a0 currentFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 finalSize:(struct CGSize { double x0; double x1; })a2;
- (BOOL)scalesImage;

@end
