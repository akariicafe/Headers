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

- (id)IPv4Addresses;
- (id)initWithInterfaceName:(id)a0;
- (id)__DHCPInfo;
- (id)__IPv4StateConfig;
- (BOOL)isServiceEnabled;
- (void)__refreshNotificationKeys;
- (BOOL)isMonitoringEvents;
- (id)DHCPLeaseExpirationTimestamp;
- (id)__IPv6SetupConfig;
- (id)IPv6ConfigMethod;
- (id)IPv4Router;
- (void)stopEventMonitoring;
- (id)IPv6Addresses;
- (void)startEventMonitoring;
- (void).cxx_destruct;
- (id)init;
- (id)__IPv6StateConfig;
- (BOOL)__updateServiceID;
- (id)__IPv4SetupConfig;
- (id)__proxiesSetupConfig;
- (id)__DNSSetupConfig;
- (id)DNSDomainName;
- (id)DNSServerAddresses;
- (id)IPv4ConfigMethod;
- (void)dealloc;
- (id)__DNSStateConfig;
- (id)serviceName;
- (id)DHCPLeaseStartTimestamp;
- (id)IPv6Router;

@end
