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
- (id)IPv4InterfaceName;
- (id)IPv4ServiceName;
- (void)__startEventMonitoring;
- (id)__IPv6GlobalStateConfig;
- (id)__IPv4GlobalStateConfig;
- (BOOL)isMonitoringEvents;
- (id)IPv4SubnetMasks;
- (id)IPv4Router;
- (id)__IPv4SetupConfigForServiceID:(id)a0;
- (void)stopEventMonitoring;
- (id)IPv4ServiceID;
- (id)__IPv6SetupConfigForServiceID:(id)a0;
- (id)IPv6Addresses;
- (id)IPv6ServiceName;
- (void)startEventMonitoring;
- (id)IPv6PrefixLengths;
- (id)__DNSGlobalStateConfig;
- (void).cxx_destruct;
- (id)init;
- (id)__nameForServiceWithID:(id)a0;
- (id)__IPv4StateConfigForServiceID:(id)a0;
- (id)DNSDomainName;
- (id)IPv6InterfaceName;
- (id)DNSServerAddresses;
- (void)dealloc;
- (id)__IPv6StateConfigForServiceID:(id)a0;
- (id)DNSSearchDomains;
- (id)IPv6Router;
- (id)IPv6ServiceID;

@end
