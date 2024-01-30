@class NSString;
@protocol MTLTexture, MTLDevice;

@interface NTKSiderealCachedMTLTexture : NSObject {
    NSString *_cacheKey;
    id<MTLTexture> _mtlTexture;
    BOOL _isAlphaOnly;
    id<MTLDevice> _device;
    id /* block */ _generateImageBlock;
}

@property (readonly, nonatomic) NSString *cacheKey;
@property (readonly, nonatomic) id<MTLTexture> texture;

- (void).cxx_destruct;
- (id)_alphaOnlyTextureWithCommandBuffer:(id)a0;
- (id)_rgbaTextureWithCommandBuffer:(id)a0;
- (id)initWithCachedImageKey:(id)a0 isAlphaOnly:(BOOL)a1 imageGenerationBlock:(id /* block */)a2;
- (void)loadTextureWithCommandBuffer:(id)a0;

@end
