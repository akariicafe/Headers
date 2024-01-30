@class NSObject;
@protocol OS_dispatch_queue;

@interface _KSReachabilityMonitor : NSObject {
    struct __SCNetworkReachability { } *_reachabilityRef;
    BOOL _isInternetReachable;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (void)startMonitoring;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)reachabilityDidChange:(BOOL)a0;
- (void)queryInitialState;

@end
