@interface PVMetalTexturePool : NSObject

- (id)init;
- (void)releaseTexture:(id)a0;
- (id)getTexture:(id)a0;
- (struct HGMetalTexturePool { struct BasePool *x0; } *)texturePool;

@end
