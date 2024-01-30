@class NSObject, AVTAvatarImageRenderer, AVTUIEnvironment, AVTAvatarConfigurationImageRenderer;
@protocol AVTTaskScheduler, AVTImageCache, OS_dispatch_queue, AVTUILogger;

@interface _AVTAvatarRecordImageProvider : NSObject

@property (readonly, nonatomic) id<AVTImageCache> peristentCache;
@property (readonly, nonatomic) id<AVTImageCache> volatileCache;
@property (readonly, nonatomic) id<AVTUILogger> logger;
@property (readonly, nonatomic) AVTUIEnvironment *environment;
@property (readonly, nonatomic) AVTAvatarConfigurationImageRenderer *configurationRenderer;
@property (readonly, nonatomic) AVTAvatarImageRenderer *avatarRenderer;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue;
@property (readonly, nonatomic) id<AVTTaskScheduler> renderingScheduler;
@property (readonly, nonatomic) BOOL allowPreFlight;

+ (void)makePersistentImageCache:(out id *)a0 volatileImageCache:(out id *)a1 withEnvironment:(id)a2;

- (id)initWithEnvironment:(id)a0;
- (void).cxx_destruct;
- (id /* block */)_providerForAvatar:(id)a0 forRecord:(id)a1 scope:(id)a2 usingCache:(BOOL)a3;
- (id /* block */)_providerForAvatar:(id)a0 forRecord:(id)a1 scope:(id)a2 usingCache:(BOOL)a3 usingService:(BOOL)a4;
- (id /* block */)_providerForRecord:(id)a0 scope:(id)a1;
- (id)initWithEnvironment:(id)a0 taskScheduler:(id)a1;
- (id)initWithPersistentCache:(id)a0 volatileCache:(id)a1 allowPreFlight:(BOOL)a2 taskScheduler:(id)a3 environment:(id)a4;
- (id)initWithPersistentCache:(id)a0 volatileCache:(id)a1 renderingQueue:(id)a2 callbackQueue:(id)a3 configurationRenderer:(id)a4 avatarRenderer:(id)a5 taskScheduler:(id)a6 allowPreFlight:(BOOL)a7 environment:(id)a8;
- (id /* block */)providerForAvatar:(id)a0 forRecord:(id)a1 scope:(id)a2 usingCache:(BOOL)a3;
- (id /* block */)providerForRecord:(id)a0 scope:(id)a1;
- (id /* block */)providerForRecord:(id)a0 scope:(id)a1 usingService:(BOOL)a2;

@end
