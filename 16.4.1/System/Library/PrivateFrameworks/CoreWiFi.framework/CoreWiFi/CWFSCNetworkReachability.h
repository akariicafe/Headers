@class NSObject;
@protocol OS_dispatch_queue;

@interface CWFSCNetworkReachability : NSObject {
    NSObject<OS_dispatch_queue> *_mutexQueue;
    NSObject<OS_dispatch_queue> *_eventQueue;
    struct __SCNetworkReachability { } *_reachabilityRef;
    BOOL _isMonitoringEvents;
}

@property (copy) id /* block */ eventHandler;

- (unsigned int)flags;
- (void)dealloc;
- (void)startEventMonitoring;
- (void)stopEventMonitoring;
- (id)init;
- (BOOL)isMonitoringEvents;
- (void).cxx_destruct;

@end
