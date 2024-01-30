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

- (id)__IPv4StateConfig;
- (id)IPv4Addresses;
- (id)IPv4Router;
- (id)DNSServerAddresses;
- (id)__IPv4SetupConfig;
- (id)IPv6Addresses;
- (id)__DNSSetupConfig;
- (id)IPv6ConfigMethod;
- (id)init;
- (void)stopEventMonitoring;
- (void).cxx_destruct;
- (id)DHCPLeaseExpirationTimestamp;
- (id)__DHCPInfo;
- (void)dealloc;
- (id)DNSDomainName;
- (id)__IPv6StateConfig;
- (id)DHCPLeaseStartTimestamp;
- (BOOL)isMonitoringEvents;
- (void)__refreshNotificationKeys;
- (id)serviceName;
- (id)__IPv6SetupConfig;
- (id)IPv4ConfigMethod;
- (void)startEventMonitoring;
- (id)__proxiesSetupConfig;
- (id)__DNSStateConfig;
- (id)initWithInterfaceName:(id)a0;
- (id)IPv6Router;
- (BOOL)__updateServiceID;
- (BOOL)isServiceEnabled;

@end
