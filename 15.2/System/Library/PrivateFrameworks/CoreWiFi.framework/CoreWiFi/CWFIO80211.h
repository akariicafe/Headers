@class NSObject;
@protocol OS_dispatch_queue;

@interface CWFIO80211 : NSObject {
    NSObject<OS_dispatch_queue> *_mutexQueue;
    NSObject<OS_dispatch_queue> *_eventQueue;
    struct IONotificationPort { } *_portRef;
    unsigned int _publishIO80211Interface;
    unsigned int _terminatedIO80211Interface;
    unsigned int _publishIO80211VirtualInterface;
    unsigned int _terminatedIO80211VirtualInterface;
    unsigned int _publishIO80211SkywalkInterface;
    unsigned int _terminatedIO80211SkywalkInterface;
    unsigned int _publishIO80211SkywalkLegacyEthernetInterface;
    unsigned int _terminatedIO80211SkywalkLegacyEthernetInterface;
    BOOL _isMonitoringEvents;
}

@property (copy) id /* block */ eventHandler;

- (id)IO80211VirtualInterfaceInfo:(id)a0 error:(id *)a1;
- (id)__IO80211InfoMatchingService:(id)a0 interfaceName:(id)a1;
- (BOOL)isMonitoringEvents;
- (void)stopEventMonitoring;
- (void)startEventMonitoring;
- (void).cxx_destruct;
- (id)__IO80211InfoConformingToService:(id)a0 interfaceName:(id)a1;
- (id)init;
- (id)IO80211ControllerInfo:(id)a0 error:(id *)a1;
- (void)dealloc;
- (id)IO80211InterfaceInfo:(id)a0 error:(id *)a1;
- (id)IO80211SkywalkInterfaceInfo:(id)a0 error:(id *)a1;

@end
