@class NSObject;
@protocol OS_dispatch_queue;

@interface CWFIO80211 : NSObject {
    NSObject<OS_dispatch_queue> *_mutexQueue;
    NSObject<OS_dispatch_queue> *_eventQueue;
    struct IONotificationPort { } *_portRef;
    unsigned int _publishIO80211SkywalkInterface;
    unsigned int _terminatedIO80211SkywalkInterface;
    BOOL _isMonitoringEvents;
}

@property (copy) id /* block */ eventHandler;

- (id)IO80211InterfaceInfo:(id)a0 error:(id *)a1;
- (id)__IO80211InfoMatchingService:(unsigned int)a0;
- (id)IO80211ControllerInfo;
- (void)dealloc;
- (void)startEventMonitoring;
- (void)stopEventMonitoring;
- (id)init;
- (BOOL)isMonitoringEvents;
- (void).cxx_destruct;

@end
