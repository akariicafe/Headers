@class UIImage;

@interface _UILegibilityImageSet : NSObject

@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) UIImage *shadowImage;

+ (id)imageFromImage:(id)a0 withShadowImage:(id)a1;

- (id)imageSetWithOrientation:(long long)a0;
- (id)initWithImage:(id)a0 shadowImage:(id)a1;
- (id)imageSetFlippedForRightToLeft;
- (void)dealloc;

@end
