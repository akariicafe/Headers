@class NSCache, NSObject, HFMutablePriorityQueue;
@protocol OS_dispatch_group, NAScheduler;

@interface HUCAPackageIconManager : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _queueLock;
    NSObject<OS_dispatch_group> *_prefetchDispatchGroup;
}

@property (retain, nonatomic) NSCache *packageDataCache;
@property (retain, nonatomic) NSCache *packageReuseQueue;
@property (retain, nonatomic) id<NAScheduler> prefetchScheduler;
@property (nonatomic) unsigned long long signpostID;
@property (retain, nonatomic) HFMutablePriorityQueue *prefetchPriorityQueue;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;
- (id)tryReclaimPackage:(id)a0 forIconDescriptor:(id)a1;
- (void)returnPackageToCache:(id)a0 forIconDescriptor:(id)a1;
- (id)_loadPackageWithIconDescriptor:(id)a0;
- (id)_queueForIconDescriptorIdentifier:(id)a0;
- (id)_prefetchIcons:(id)a0;
- (void)_startPrefetchIfNecessary;
- (id)_packageDataForIconDescriptor:(id)a0;
- (id)packageForIconDescriptor:(id)a0;
- (id)prefetchIconDescriptors:(id)a0;
- (void)prioritizeIconDescriptors:(id)a0;

@end
