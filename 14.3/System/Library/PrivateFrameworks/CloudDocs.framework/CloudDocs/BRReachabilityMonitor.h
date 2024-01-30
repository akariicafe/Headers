@class NSObject, NSHashTable;
@protocol OS_dispatch_queue;

@interface BRReachabilityMonitor : NSObject {
    NSHashTable *_reachabilityObservers;
    struct __SCNetworkReachability { } *_reachabilityRef;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (nonatomic) unsigned int reachabilityFlags;
@property (readonly, nonatomic) BOOL isNetworkReachable;

+ (BOOL)isNetworkReachableForFlags:(unsigned int)a0;
+ (id)sharedReachabilityMonitor;
+ (unsigned int)getReachabilityFlagsByCheckingNetwork;

- (id)init;
- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (void)dealloc;
- (void)addObserver:(id)a0;
- (void)invalidate;

@end
