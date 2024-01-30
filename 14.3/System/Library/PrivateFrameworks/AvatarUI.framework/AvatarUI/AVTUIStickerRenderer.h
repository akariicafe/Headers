@class AVTUILogger, NSObject, AVTUIStickerGeneratorPool, AVTClippableImageStore, AVTUIEnvironment;
@protocol AVTAvatarRecord, AVTCacheableResource, AVTResourceCache, OS_dispatch_queue, AVTStickerTaskScheduler;

@interface AVTUIStickerRenderer : NSObject

@property (readonly, nonatomic) id<AVTResourceCache> cache;
@property (readonly, nonatomic) AVTClippableImageStore *imageStore;
@property (readonly, nonatomic) AVTUIEnvironment *environment;
@property (readonly, nonatomic) AVTUILogger *logger;
@property (readonly, nonatomic) id<AVTStickerTaskScheduler> renderingScheduler;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *renderingQueue;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *encodingQueue;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue;
@property (readonly, nonatomic) id<AVTAvatarRecord> avatarRecord;
@property (readonly, nonatomic) id<AVTCacheableResource> cacheableResourceItem;
@property (readonly, nonatomic) AVTUIStickerGeneratorPool *stickerGeneratorPool;
@property (nonatomic) BOOL parallelizeEncoding;

+ (id)imageEncoder;
+ (id)stickerCacheWithEnvironment:(id)a0;
+ (BOOL)clearStickersForAvatarRecordIdentifier:(id)a0 withEnvironment:(id)a1;
+ (BOOL)clearStickersForAvatarRecordIdentifier:(id)a0;

- (void).cxx_destruct;
- (void)stopUsingResources;
- (id)initWithAvatarRecord:(id)a0 stickerGeneratorPool:(id)a1 scheduler:(id)a2;
- (id /* block */)scheduledStickerResourceProviderForStickerConfiguration:(id)a0;
- (id)initWithAvatarRecord:(id)a0 cache:(id)a1 imageStore:(id)a2 stickerGeneratorPool:(id)a3 environment:(id)a4 renderingScheduler:(id)a5 renderingQueue:(id)a6 encodingQueue:(id)a7 callbackQueue:(id)a8;
- (id)initWithAvatarRecord:(id)a0 cache:(id)a1 renderingScheduler:(id)a2 renderingQueue:(id)a3 encodingQueue:(id)a4 stickerGeneratorPool:(id)a5 environment:(id)a6;
- (void)saveImageForResource:(id)a0 forScope:(id)a1 synchronous:(BOOL)a2 completionHandler:(id /* block */)a3;
- (id /* block */)scheduledTaskForItem:(id)a0 scope:(id)a1 queue:(id)a2 renderingHandler:(id /* block */)a3 resourceHandler:(id /* block */)a4 synchronous:(BOOL)a5;
- (id)renderStickerResourceForItem:(id)a0 scope:(id)a1 configuration:(id)a2;
- (id /* block */)providerForResourceForScope:(id)a0 queue:(id)a1 renderingHandler:(id /* block */)a2;

@end
