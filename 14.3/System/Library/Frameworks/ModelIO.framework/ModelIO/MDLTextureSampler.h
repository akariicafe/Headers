@class MDLTransform, MDLTexture, MDLTextureFilter;

@interface MDLTextureSampler : NSObject

@property (nonatomic) unsigned long long mappingChannel;
@property (nonatomic) long long textureComponents;
@property (retain, nonatomic) MDLTexture *texture;
@property (retain, nonatomic) MDLTextureFilter *hardwareFilter;
@property (retain, nonatomic) MDLTransform *transform;

- (id)init;
- (void).cxx_destruct;

@end
