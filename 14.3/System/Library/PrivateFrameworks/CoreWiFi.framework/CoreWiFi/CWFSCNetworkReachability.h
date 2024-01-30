@class NSObject;
@protocol OS_dispatch_queue;

@interface CWFSCNetworkReachability : NSObject {
    NSObject<OS_dispatch_queue> *_mutexQueue;
    NSObject<OS_dispatch_queue> *_eventQueue;
    struct __SCNetworkReachability { } *_reachabilityRef;
    BOOL _isMonitoringEvents;
}

@property (copy) id /* block */ eventHandler;

- (id)init;
- (void)stopEventMonitoring;
- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)isMonitoringEvents;
- (unsigned int)flags;
- (void)startEventMonitoring;

@end
