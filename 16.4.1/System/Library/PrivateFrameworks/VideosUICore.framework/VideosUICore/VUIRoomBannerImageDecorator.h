@interface VUIRoomBannerImageDecorator : VUIImageScaleDecorator

- (id)decoratorIdentifier;
- (void)drawInContext:(id)a0 imageRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (BOOL)needsAlphaForImage:(id)a0;

@end
