@class _UIBackdropViewSettings;

@interface _TVProductBannerBlurImageDecorator : NSObject

@property (nonatomic) BOOL lightStyle;
@property (retain, nonatomic) _UIBackdropViewSettings *backdropSettings;

- (void).cxx_destruct;
- (id)decorate:(id)a0 scaledWithSize:(struct CGSize { double x0; double x1; })a1 croppedToFit:(BOOL)a2;
- (id)blurImageWithImage:(id)a0 targetSize:(struct CGSize { double x0; double x1; })a1 scaleSize:(struct CGSize { double x0; double x1; })a2;
- (id)resizeImage:(struct CGImage { } *)a0 targetSize:(struct CGSize { double x0; double x1; })a1 shouldDither:(BOOL)a2;

@end
