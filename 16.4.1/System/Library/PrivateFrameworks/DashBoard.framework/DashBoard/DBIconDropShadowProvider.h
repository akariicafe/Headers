@class UIImage;

@interface DBIconDropShadowProvider : NSObject

@property (nonatomic) struct CGImage { } *lightStyleShadowImage;
@property (retain, nonatomic) UIImage *iconImage;

+ (void)invalidate;

- (id)init;
- (void).cxx_destruct;
- (void)_cleanupImages;
- (void)_shadow_drawing_queue_generateDarkStyleShadow;
- (void)_shadow_drawing_queue_generateLightStyleShadow;
- (void)imageForTraitCollection:(id)a0 completion:(id /* block */)a1;

@end
