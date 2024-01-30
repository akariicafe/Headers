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

- (id)initWithInterfaceName:(id)a0;
- (long long)ipv6ConfigMethod;
- (BOOL)monitorNetworkServiceID:(id)a0;
- (id)httpProxyUsername;
- (BOOL)httpProxyIsAuthenticated;
- (id)__ipv4SetupConfig;
- (id)httpProxyAutoConfigURL;
- (id)__wifiServiceID;
- (id)dnsDomainName;
- (long long)ipv4ConfigMethod;
- (id)__dnsStateConfig;
- (id)ipv4DHCPClientID;
- (id)__ipv6StateConfig;
- (id)httpProxyPort;
- (BOOL)isUsingCustomDNSSettings;
- (id)__ipv4InterfaceStateConfig;
- (id)httpProxyServer;
- (id)ipv6Router;
- (id)__dnsSetupConfig;
- (id)__ipv4StateConfig;
- (BOOL)isUsingCustomProxySetting;
- (id)__dhcpInfo;
- (id)DHCPLeaseExpirationDate;
- (BOOL)hasValidIPAddress;
- (void)dealloc;
- (BOOL)globalProxyIsEnabled;
- (BOOL)hasValidIPv6Address;
- (BOOL)httpProxyAutoConfigured;
- (id)ipv4SubnetMasks;
- (id)ipv4Addresses;
- (void)_postChangesNotification:(id)a0;
- (id)init;
- (id)ipv6Addresses;
- (id)__proxiesSetupConfig;
- (id)dnsServerAddresses;
- (BOOL)personalHotspotHasClients;
- (BOOL)hasValidIPv4Address;
- (id)ipv4Router;
- (BOOL)renewLease;
- (void).cxx_destruct;
- (id)dnsSearchDomains;
- (id)__ipv6SetupConfig;
- (id)ipv6PrefixLengths;

@end
