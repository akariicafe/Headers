@class NSHashTable, NSObject;
@protocol OS_dispatch_queue;

@interface DAReachability : NSObject {
    NSHashTable *_delegates;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;

+ (id)sharedReachability;

- (void)addDelegate:(id)a0;
- (void)removeDelegate:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)_startMonitoringReachability;
- (BOOL)_monitoringReachability;
- (void)_stopMonitoringReachability;
- (void)muckWithDelegates:(id /* block */)a0;
- (void)_notifyDelegatesNetworkReachable;

@end
