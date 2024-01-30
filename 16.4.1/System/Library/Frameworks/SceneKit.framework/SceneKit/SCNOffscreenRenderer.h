@interface SCNOffscreenRenderer : SCNRenderer

@property (readonly, nonatomic) unsigned int textureID;
@property (nonatomic) unsigned long long antialiasingMode;
@property (nonatomic) struct CGSize { double x0; double x1; } size;

+ (id)offscreenRendererWithContext:(id)a0 size:(struct CGSize { double x0; double x1; })a1;
+ (id)offscreenRendererWithDevice:(id)a0 size:(struct CGSize { double x0; double x1; })a1;

- (id)snapshot;

@end
