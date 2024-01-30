@class NSLock, AVTUIStickerRenderer, AVTUIEnvironment, NSObject, AVTAvatarRecord, AVTUIStickerGeneratorPool, AVTImageStore, AVTClippableImageStore;
@protocol AVTTaskScheduler, OS_os_transaction, AVTUILogger, OS_dispatch_queue;

@interface AVTUIImageRenderService : NSObject <AVTUIImageRenderServiceProtocol>

@property (readonly, nonatomic) AVTUIEnvironment *environment;
@property (readonly, nonatomic) AVTImageStore *imageStore;
@property (readonly, nonatomic) AVTClippableImageStore *clippableImageStore;
@property (readonly, nonatomic) id<AVTUILogger> logger;
@property (retain, nonatomic) AVTUIStickerGeneratorPool *generatorPool;
@property (readonly, nonatomic) id<AVTTaskScheduler> taskScheduler;
@property (nonatomic) long long activeTransactionCount;
@property (retain, nonatomic) NSLock *transactionCountLock;
@property (retain, nonatomic) NSObject<OS_os_transaction> *transaction;
@property (weak, nonatomic) id /* block */ cleanupBlock;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (retain, nonatomic) AVTAvatarRecord *currentAvatarRecord;
@property (retain, nonatomic) AVTUIStickerRenderer *currentStickerRenderer;

+ (id)sharedInstance;

- (void)dealloc;
- (void)exit;
- (id)init;
- (void).cxx_destruct;
- (void)_generateAndCacheImageForAvatarRecord:(id)a0 scope:(id)a1 withReply:(id /* block */)a2;
- (void)_lock_beginCleanupTimer;
- (void)_lock_invalidateCleanupTimer;
- (void)_requestAnimojiStickerImageForAvatarRecord:(id)a0 withStickerPackName:(id)a1 stickerConfigurationName:(id)a2 resource:(id)a3 withReply:(id /* block */)a4;
- (void)_requestImageForAvatar:(id)a0 scope:(id)a1 withModifications:(id)a2 withReply:(id /* block */)a3;
- (void)_requestImageForAvatar:(id)a0 scope:(id)a1 withReply:(id /* block */)a2;
- (void)_requestStickerImageForAvatarRecord:(id)a0 withStickerPackName:(id)a1 stickerConfigurationName:(id)a2 resource:(id)a3 withReply:(id /* block */)a4;
- (void)generateAndCacheImageForAvatarRecord:(id)a0 scope:(id)a1 withReply:(id /* block */)a2;
- (void)requestAnimojiStickerImageForAvatarRecord:(id)a0 withStickerPackName:(id)a1 stickerConfigurationName:(id)a2 resource:(id)a3 withReply:(id /* block */)a4;
- (void)requestImageForAvatar:(id)a0 scope:(id)a1 withModifications:(id)a2 withReply:(id /* block */)a3;
- (void)requestImageForAvatar:(id)a0 scope:(id)a1 withReply:(id /* block */)a2;
- (void)requestStickerImageForAvatarRecord:(id)a0 withStickerPackName:(id)a1 stickerConfigurationName:(id)a2 resource:(id)a3 withReply:(id /* block */)a4;
- (void)transactionAdded;
- (void)transactionCompleted;

@end
