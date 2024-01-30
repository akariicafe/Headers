@class NSObject, NSHashTable;
@protocol OS_dispatch_queue;

@interface BRReachabilityMonitor : NSObject {
    NSHashTable *_reachabilityObservers;
    struct __SCNetworkReachability { } *_reachabilityRef;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (nonatomic) unsigned int reachabilityFlags;
@property (readonly, nonatomic) BOOL isNetworkReachable;

+ (unsigned int)getReachabilityFlagsByCheckingNetwork;
+ (id)sharedReachabilityMonitor;
+ (BOOL)isNetworkReachableForFlags:(unsigned int)a0;

- (void)addObserver:(id)a0;
- (void)removeObserver:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)invalidate;
- (void)dealloc;

@end
