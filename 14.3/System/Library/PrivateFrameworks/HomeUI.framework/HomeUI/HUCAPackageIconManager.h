@class NSCache, HMFUnfairLock;
@protocol NAScheduler;

@interface HUCAPackageIconManager : NSObject

@property (retain, nonatomic) NSCache *packageDataCache;
@property (retain, nonatomic) NSCache *packageReuseQueue;
@property (retain, nonatomic) HMFUnfairLock *queueLock;
@property (retain, nonatomic) id<NAScheduler> prefetchScheduler;
@property (nonatomic) unsigned long long signpostID;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (id)packageForIconDescriptor:(id)a0;
- (void)reclaimPackage:(id)a0 forIconDescriptor:(id)a1;
- (id)_loadPackageWithIconDescriptor:(id)a0;
- (id)_queueForIconDescriptorIdentifier:(id)a0;
- (id)_packageDataForIconDescriptor:(id)a0;
- (id)prefetchIconDescriptors:(id)a0;
- (void)cancelPrefetchWithCancelable:(id)a0;

@end
