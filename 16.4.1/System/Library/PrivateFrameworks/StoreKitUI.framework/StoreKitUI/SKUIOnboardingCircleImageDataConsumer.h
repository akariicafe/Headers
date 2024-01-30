@class UIColor;

@interface SKUIOnboardingCircleImageDataConsumer : SKUIImageDataConsumer

@property (nonatomic) struct CGSize { double width; double height; } outputSize;
@property (copy, nonatomic) UIColor *tintColor;
@property (nonatomic) BOOL usesSaturationFilter;

- (void).cxx_destruct;
- (id)_saturationBackgroundImageWithSize:(struct CGSize { double x0; double x1; })a0;
- (id)imageForImage:(id)a0;

@end
