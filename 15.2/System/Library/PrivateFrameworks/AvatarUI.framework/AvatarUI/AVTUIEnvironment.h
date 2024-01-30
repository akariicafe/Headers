@class AVTAvatarConfigurationImageRenderer, NSUserDefaults, NSURL, AVTCoreEnvironment, AVTCoreModel, NSObject, AVTDeviceResourceManager, NSNotificationCenter, AVTMemoji;
@protocol AVTImageCache, AVTUsageTrackingSession, OS_dispatch_queue, AVTUILogger;

@interface AVTUIEnvironment : NSObject {
    AVTCoreModel *_editorCoreModel;
    AVTAvatarConfigurationImageRenderer *_renderer;
    AVTMemoji *_editorThumbnailAvatar;
    id<AVTImageCache> _inMemoryImageCache;
    id<AVTUsageTrackingSession> _usageTrackingSession;
}

@property (readonly, nonatomic) AVTCoreEnvironment *coreEnvironment;
@property (readonly, nonatomic) unsigned long long platform;
@property (readonly, nonatomic) id<AVTUILogger> logger;
@property (readonly, nonatomic) double mainScreenScale;
@property (readonly, nonatomic) struct CGSize { double width; double height; } mainScreenSize;
@property (readonly, nonatomic) long long userInterfaceLayoutDirection;
@property (readonly, nonatomic) BOOL deviceIsPad;
@property (readonly, nonatomic) BOOL deviceIsMac;
@property (readonly, copy, nonatomic) id /* block */ serialQueueProvider;
@property (readonly, copy, nonatomic) id /* block */ lockProvider;
@property (readonly, copy, nonatomic) NSObject<OS_dispatch_queue> *backgroundQueue;
@property (readonly, copy, nonatomic) NSObject<OS_dispatch_queue> *backgroundRenderingQueue;
@property (readonly, copy, nonatomic) NSObject<OS_dispatch_queue> *backgroundEncodingQueue;
@property (readonly, nonatomic) AVTCoreModel *editorCoreModel;
@property (readonly, copy, nonatomic) NSURL *storeLocation;
@property (readonly, copy, nonatomic) NSURL *imageStoreLocation;
@property (readonly, copy, nonatomic) NSURL *stickerImageStoreLocation;
@property (readonly, copy, nonatomic) NSURL *imageCacheStoreLocation;
@property (readonly, nonatomic) AVTAvatarConfigurationImageRenderer *renderer;
@property (readonly, nonatomic) AVTMemoji *editorThumbnailAvatar;
@property (readonly, nonatomic) NSNotificationCenter *notificationCenter;
@property (readonly, nonatomic) AVTDeviceResourceManager *deviceResourceManager;
@property (readonly, nonatomic) id<AVTImageCache> inMemoryImageCache;
@property (readonly, nonatomic) id<AVTUsageTrackingSession> usageTrackingSession;
@property (readonly, nonatomic) NSUserDefaults *userDefaults;
@property (nonatomic) double actionAnimationsMultiplier;

+ (id)defaultEnvironment;
+ (id)createQueueWithQoSClass:(unsigned int)a0 label:(const char *)a1;
+ (id)createEditorCoreModelForPlatform:(unsigned long long)a0 withLogger:(id)a1;
+ (id)createUsageTrackingSessionWithCoreModel:(id)a0 serialQueueProvider:(id /* block */)a1 logger:(id)a2;
+ (id)createFunCamEnvironment;

- (void).cxx_destruct;
- (id)initWithCoreEnvironment:(id)a0 platform:(unsigned long long)a1;
- (id)initWithCoreEnvironment:(id)a0;
- (void)flushResourcesForEnteringBackground;

@end
