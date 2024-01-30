@protocol MTLTexture, MTLDevice;

@interface CLKUIMetalResourceManager : CLKUIResourceManager {
    id<MTLDevice> _device;
    id<MTLTexture> _nilTexture2D;
    id<MTLTexture> _nilTextureCube;
}

@property (class, readonly, nonatomic) id<MTLDevice> sharedDevice;
@property (class, readonly, nonatomic) id<MTLTexture> sharedNilTexture2D;
@property (class, readonly, nonatomic) id<MTLTexture> sharedNilTextureCube;

+ (id)sharedCommandQueue;
+ (void)addCompletedErrorCheckToCommandBuffer:(id)a0 forCase:(id)a1;
+ (id)sharedMetalInstance;

- (id)init;
- (void).cxx_destruct;
- (id)_newAtlasForUuid:(id)a0 nilTexture:(id)a1;
- (id)_newAtlasForUuid:(id)a0 nullTexture:(id)a1;
- (void)_purgeAtlases:(id)a0;
- (id)nullAtlas2D;
- (id)nullAtlasCube;

@end
