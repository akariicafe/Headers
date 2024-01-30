@protocol MTLTexture, MTLDevice;

@interface CLKUIMetalResourceManager : CLKUIResourceManager {
    id<MTLDevice> _device;
    id<MTLTexture> _nilTexture;
}

@property (class, readonly, nonatomic) id<MTLDevice> sharedDevice;
@property (class, readonly, nonatomic) id<MTLTexture> sharedNilTexture;

+ (id)sharedCommandQueue;
+ (void)addCompletedErrorCheckToCommandBuffer:(id)a0 forCase:(id)a1;
+ (id)sharedMetalInstance;

- (void).cxx_destruct;
- (id)init;
- (id)_newAtlasForUuid:(id)a0;
- (void)_purgeAtlases:(id)a0;

@end
