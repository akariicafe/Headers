@class NSObject;
@protocol OS_dispatch_queue;

@interface CWFSCNetworkConfiguration : NSObject {
    NSObject<OS_dispatch_queue> *_mutexQueue;
    NSObject<OS_dispatch_queue> *_eventQueue;
    struct __SCDynamicStore { } *_storeRef;
    BOOL _isMonitoringEvents;
}

@property (copy) id /* block */ eventHandler;

- (id)IPv6InterfaceName;
- (id)IPv4Addresses;
- (id)__DNSGlobalStateConfig;
- (void)__startEventMonitoring;
- (id)__nameForServiceWithID:(id)a0;
- (id)IPv4ServiceID;
- (id)__IPv6StateConfigForServiceID:(id)a0;
- (id)__IPv4SetupConfigForServiceID:(id)a0;
- (id)__IPv6SetupConfigForServiceID:(id)a0;
- (void)restartEventMonitoring;
- (id)DNSSearchDomains;
- (id)IPv6Addresses;
- (id)__networkInterfaceStateConfig;
- (BOOL)__isIEEE80211NetworkInterfaceName:(id)a0;
- (id)DNSDomainName;
- (id)IPv4InterfaceName;
- (id)IPv6ServiceID;
- (id)IPv6ServiceName;
- (id)__IPv4StateConfigForServiceID:(id)a0;
- (void)dealloc;
- (id)__IPv6GlobalStateConfig;
- (id)DNSServerAddresses;
- (void)startEventMonitoring;
- (id)IEEE80211NetworkInterfacesNames;
- (id)IPv4Router;
- (void)stopEventMonitoring;
- (id)__IPv4GlobalStateConfig;
- (id)IPv4SubnetMasks;
- (id)init;
- (id)IPv4ServiceName;
- (id)networkInterfacesNames;
- (id)IPv6PrefixLengths;
- (BOOL)isMonitoringEvents;
- (void).cxx_destruct;
- (id)IPv6Router;

@end
