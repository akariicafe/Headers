@class PXGImageTexture;
@protocol PXGDisplayAssetAdjustment;

@interface PXGAdjustedTexturePayload : NSObject <NSCopying>

@property (readonly, nonatomic) PXGImageTexture *texture;
@property (readonly, nonatomic) id<PXGDisplayAssetAdjustment> adjustment;
@property (readonly, nonatomic) BOOL mipmaps;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (void).cxx_destruct;
- (id)initWithTexture:(id)a0 adjustment:(id)a1 mipmaps:(BOOL)a2;

@end
