@class NSNetServiceBrowser, NSString, NSMutableDictionary;
@protocol RMSServiceProviderDelegate;

@interface RMSBonjourServiceProvider : NSObject <RMSServiceProvider, NSNetServiceBrowserDelegate, NSNetServiceDelegate> {
    NSMutableDictionary *_services;
    NSMutableDictionary *_cache;
}

@property (readonly, nonatomic) NSNetServiceBrowser *netServiceBrowser;
@property (readonly, nonatomic) NSString *searchType;
@property (readonly, nonatomic) NSString *searchDomain;
@property (readonly, nonatomic) NSString *searchScope;
@property (readonly, nonatomic) long long serviceDiscoverySource;
@property (weak, nonatomic) id<RMSServiceProviderDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)netService:(id)a0 didUpdateTXTRecordData:(id)a1;
- (id)init;
- (void).cxx_destruct;
- (void)netServiceDidResolveAddress:(id)a0;
- (void)netService:(id)a0 didNotResolve:(id)a1;
- (void)dealloc;
- (id)_searchString;
- (void)netServiceBrowser:(id)a0 didFindService:(id)a1 moreComing:(BOOL)a2;
- (void)beginDiscovery;
- (void)endDiscovery;
- (void)netServiceBrowser:(id)a0 didRemoveService:(id)a1 moreComing:(BOOL)a2;
- (long long)serviceTypeFromTXTDictionary:(id)a0;
- (long long)serviceFlagsFromTXTDictionary:(id)a0;
- (id)_valueForTXTRecordKey:(id)a0 inTXTDictionary:(id)a1;
- (id)_identifierForNetService:(id)a0;
- (void)_updateService:(id)a0 withNetService:(id)a1 txtData:(id)a2;
- (void)_updateCacheWithService:(id)a0 identifier:(id)a1;

@end
