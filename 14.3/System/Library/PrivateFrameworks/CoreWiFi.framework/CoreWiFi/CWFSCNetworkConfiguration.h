@class NSObject;
@protocol OS_dispatch_queue;

@interface CWFSCNetworkConfiguration : NSObject {
    NSObject<OS_dispatch_queue> *_mutexQueue;
    NSObject<OS_dispatch_queue> *_eventQueue;
    struct __SCDynamicStore { } *_storeRef;
    BOOL _isMonitoringEvents;
}

@property (copy) id /* block */ eventHandler;

- (id)IPv4Addresses;
- (id)IPv4Router;
- (id)DNSServerAddresses;
- (id)IPv6Addresses;
- (id)IPv6ServiceID;
- (id)init;
- (void)stopEventMonitoring;
- (void).cxx_destruct;
- (id)__IPv6GlobalStateConfig;
- (id)IPv4ServiceName;
- (void)dealloc;
- (id)__IPv4SetupConfigForServiceID:(id)a0;
- (id)DNSDomainName;
- (void)__startEventMonitoring;
- (id)IPv6ServiceName;
- (id)__IPv4StateConfigForServiceID:(id)a0;
- (BOOL)isMonitoringEvents;
- (id)__DNSGlobalStateConfig;
- (id)__nameForServiceWithID:(id)a0;
- (id)IPv4ServiceID;
- (id)IPv4InterfaceName;
- (void)startEventMonitoring;
- (id)__IPv4GlobalStateConfig;
- (id)IPv6InterfaceName;
- (id)IPv6Router;
- (id)IPv6PrefixLengths;
- (id)IPv4SubnetMasks;
- (id)__IPv6SetupConfigForServiceID:(id)a0;
- (id)DNSSearchDomains;
- (id)__IPv6StateConfigForServiceID:(id)a0;

@end
