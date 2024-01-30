@class CAMetalLayer, CABackdropLayer;

@interface PKMetalView : UIView {
    CABackdropLayer *_backdropLayer;
    CAMetalLayer *_metalLayer;
}

@property (readonly, nonatomic) CAMetalLayer *metalLayer;
@property (readonly, nonatomic) BOOL isFixedPixelSize;
@property (readonly, nonatomic) struct CGSize { double width; double height; } fixedPixelSize;
@property (nonatomic) BOOL doubleBuffered;
@property (readonly, nonatomic) BOOL isDrawableAvailable;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } drawableSize;
@property (nonatomic) BOOL presentsWithTransaction;
@property (nonatomic) BOOL useLuminanceColorFilter;
@property (readonly, nonatomic) unsigned long long pixelFormat;

- (void).cxx_destruct;
- (BOOL)isDrawableAvailable;
- (void)accessibilityInvertColorsStatusDidChange:(id)a0;
- (void)setFixedPixelSize:(struct CGSize { double x0; double x1; })a0;
- (void)resizeDrawableIfNecessary;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 andPixelSize:(struct CGSize { double x0; double x1; })a1 pixelFormat:(unsigned long long)a2;
- (void)flushDrawables;
- (void)initLayer;
- (void)installLuminanceColorFilter;
- (struct CGImage { } *)newLuminanceMap;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 pixelFormat:(unsigned long long)a1;

@end
