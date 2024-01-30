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

- (id)__ipv4SetupConfig;
- (id)initWithInterfaceName:(id)a0;
- (BOOL)isUsingCustomProxySetting;
- (id)dnsSearchDomains;
- (id)__dnsSetupConfig;
- (BOOL)httpProxyIsAuthenticated;
- (void)_postChangesNotification:(id)a0;
- (BOOL)renewLease;
- (long long)ipv6ConfigMethod;
- (id)__wifiServiceID;
- (id)ipv6Addresses;
- (id)dnsDomainName;
- (BOOL)personalHotspotHasClients;
- (id)__ipv4InterfaceStateConfig;
- (BOOL)hasValidIPv4Address;
- (id)dnsServerAddresses;
- (BOOL)monitorNetworkServiceID:(id)a0;
- (id)__dhcpInfo;
- (id)ipv6Router;
- (void).cxx_destruct;
- (id)__ipv4StateConfig;
- (BOOL)isUsingCustomDNSSettings;
- (id)init;
- (BOOL)httpProxyAutoConfigured;
- (BOOL)hasValidIPv6Address;
- (id)__dnsStateConfig;
- (id)ipv4Router;
- (long long)ipv4ConfigMethod;
- (id)DHCPLeaseExpirationDate;
- (id)__ipv6StateConfig;
- (BOOL)globalProxyIsEnabled;
- (id)httpProxyServer;
- (id)__proxiesSetupConfig;
- (id)ipv4Addresses;
- (id)ipv6PrefixLengths;
- (id)__ipv6SetupConfig;
- (id)httpProxyUsername;
- (void)dealloc;
- (id)httpProxyPort;
- (id)ipv4DHCPClientID;
- (id)httpProxyAutoConfigURL;
- (id)ipv4SubnetMasks;
- (BOOL)hasValidIPAddress;

@end
