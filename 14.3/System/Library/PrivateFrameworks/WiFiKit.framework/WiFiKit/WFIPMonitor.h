@class NSString, _WFIPMonitorObserver, NSObject;
@protocol OS_dispatch_queue;

@interface WFIPMonitor : NSObject {
    BOOL _isMonitoring;
    _WFIPMonitorObserver *_dynamicStoreInfo;
}

@property (copy, nonatomic) NSString *serviceID;
@property (copy, nonatomic) NSString *interfaceName;
@property struct __SCDynamicStore { } *storeRef;
@property struct __SCPreferences { } *prefsRef;
@property struct __SCDynamicStore { } *networkServiceStore;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSString *bundleIdentifier;

- (id)httpProxyUsername;
- (id)__dnsStateConfig;
- (void)_postChangesNotification:(id)a0;
- (id)DHCPLeaseExpirationDate;
- (id)ipv4DHCPClientID;
- (id)init;
- (id)httpProxyPort;
- (void).cxx_destruct;
- (id)dnsDomainName;
- (BOOL)globalProxyIsEnabled;
- (id)ipv6Router;
- (void)dealloc;
- (BOOL)monitorNetworkServiceID:(id)a0;
- (BOOL)hasValidIPv4Address;
- (BOOL)httpProxyIsAuthenticated;
- (BOOL)hasValidIPAddress;
- (id)dnsSearchDomains;
- (id)__wifiServiceID;
- (BOOL)personalHotspotHasClients;
- (id)__ipv4InterfaceStateConfig;
- (id)ipv6Addresses;
- (id)__dhcpInfo;
- (BOOL)hasValidIPv6Address;
- (id)ipv4Router;
- (id)__ipv6SetupConfig;
- (BOOL)httpProxyAutoConfigured;
- (id)__proxiesSetupConfig;
- (id)ipv4SubnetMasks;
- (id)__ipv4StateConfig;
- (id)httpProxyServer;
- (id)initWithInterfaceName:(id)a0;
- (id)__dnsSetupConfig;
- (id)httpProxyAutoConfigURL;
- (BOOL)renewLease;
- (long long)ipv6ConfigMethod;
- (id)dnsServerAddresses;
- (id)__ipv4SetupConfig;
- (BOOL)isUsingCustomProxySetting;
- (id)__ipv6StateConfig;
- (id)ipv6PrefixLengths;
- (id)ipv4Addresses;
- (long long)ipv4ConfigMethod;
- (BOOL)isUsingCustomDNSSettings;

@end
