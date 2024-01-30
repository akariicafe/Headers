@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface CWFSCNetworkService : NSObject {
    NSObject<OS_dispatch_queue> *_mutexQueue;
    NSObject<OS_dispatch_queue> *_eventQueue;
    struct __SCDynamicStore { } *_storeRef;
    struct __SCPreferences { } *_prefsRef;
    BOOL _isMonitoringEvents;
    NSString *_serviceID;
    NSString *_serviceName;
    BOOL _isServiceEnabled;
}

@property (copy) id /* block */ eventHandler;
@property (readonly, copy, nonatomic) NSString *interfaceName;
@property (readonly, copy, nonatomic) NSString *serviceID;

- (id)initWithInterfaceName:(id)a0;
- (id)IPv4Addresses;
- (id)DHCPLeaseStartTimestamp;
- (id)DHCPServerID;
- (id)DHCPLeaseExpirationTimestamp;
- (id)IPv4ARPResolvedHardwareAddress;
- (id)IPv4NetworkSignature;
- (id)__IPv4SetupConfig;
- (id)__DNSStateConfig;
- (id)IPv4ConfigMethod;
- (void)restartEventMonitoring;
- (id)__IPv4StateConfig;
- (id)IPv6Addresses;
- (id)IPv6ConfigMethod;
- (id)__DHCPStateConfig;
- (id)IPv6NetworkSignature;
- (id)serviceName;
- (id)DNSDomainName;
- (BOOL)__updateServiceID;
- (void)dealloc;
- (id)__IPv6SetupConfig;
- (id)DNSServerAddresses;
- (void)startEventMonitoring;
- (id)IPv4Router;
- (BOOL)refreshServiceID;
- (void)stopEventMonitoring;
- (id)IPv4SubnetMasks;
- (id)init;
- (void)__refreshNotificationKeys;
- (id)__proxiesSetupConfig;
- (id)DHCPv6ServerID;
- (id)__DNSSetupConfig;
- (BOOL)isMonitoringEvents;
- (id)__IPv6StateConfig;
- (id)__DHCPv6StateConfig;
- (id)__DHCPInfo;
- (void).cxx_destruct;
- (BOOL)isServiceEnabled;
- (BOOL)__refreshServiceID;
- (id)IPv4ARPResolvedIPAddress;
- (id)IPv6Router;

@end
