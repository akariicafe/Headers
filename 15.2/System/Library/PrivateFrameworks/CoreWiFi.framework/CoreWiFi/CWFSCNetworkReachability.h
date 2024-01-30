@class NSObject;
@protocol OS_dispatch_queue;

@interface CWFSCNetworkReachability : NSObject {
    NSObject<OS_dispatch_queue> *_mutexQueue;
    NSObject<OS_dispatch_queue> *_eventQueue;
    struct __SCNetworkReachability { } *_reachabilityRef;
    BOOL _isMonitoringEvents;
}

@property (copy) id /* block */ eventHandler;

- (BOOL)isMonitoringEvents;
- (void)stopEventMonitoring;
- (unsigned int)flags;
- (void)startEventMonitoring;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
