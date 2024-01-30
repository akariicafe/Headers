@class NSURL, NSNotificationCenter;
@protocol AVTUILogger, AVTBlockScheduler;

@interface AVTCoreEnvironment : NSObject {
    NSURL *_storeLocation;
    NSURL *_imageStoreLocation;
    NSURL *_stickerImageStoreLocation;
    NSURL *_imageCacheStoreLocation;
}

@property (readonly, nonatomic) id<AVTUILogger> logger;
@property (readonly, nonatomic) id<AVTBlockScheduler> scheduler;
@property (readonly, copy, nonatomic) id /* block */ serialQueueProvider;
@property (readonly, copy, nonatomic) id /* block */ lockProvider;
@property (readonly, copy, nonatomic) NSURL *storeLocation;
@property (readonly, copy, nonatomic) NSURL *imageStoreLocation;
@property (readonly, copy, nonatomic) NSURL *stickerImageStoreLocation;
@property (readonly, copy, nonatomic) NSURL *imageCacheStoreLocation;
@property (readonly, nonatomic) NSNotificationCenter *notificationCenter;

+ (id /* block */)serialQueueProvider;
+ (id)storeLocation;
+ (id)stickerImageStoreLocation;
+ (void)resetFlushCacheValuesIfNeeded;
+ (id)imageCacheStoreLocationWithError:(id *)a0;
+ (id)defaultEnvironment;
+ (id)imageStoreLocation;

- (id)init;
- (void).cxx_destruct;

@end
