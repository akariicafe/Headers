@class NSObject;
@protocol MTLTexture, OS_dispatch_queue;

@interface CLKUIMetalAtlas : CLKUIAtlas {
    id<MTLTexture> _texture;
    NSObject<OS_dispatch_queue> *_loaderQueue;
    id<MTLTexture> _loaderQueue_prewarmedTexture;
    unsigned long long _mainQueue_prewarmState;
}

@property (readonly, nonatomic) id<MTLTexture> nilTexture;

+ (id)_createMTLTextureWithBacking:(id)a0 device:(id)a1 encoder:(id)a2;

- (void)prewarm;
- (void)purge;
- (void)dealloc;
- (void).cxx_destruct;
- (void)bind:(id)a0 slot:(unsigned long long)a1;
- (id)initWithUuid:(id)a0 nilTexture:(id)a1;

@end
