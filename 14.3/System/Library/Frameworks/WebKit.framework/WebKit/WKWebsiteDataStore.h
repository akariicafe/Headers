@class NSString, NSDictionary, NSURL, _WKWebsiteDataStoreConfiguration, WKHTTPCookieStore;
@protocol _WKWebsiteDataStoreDelegate;

@interface WKWebsiteDataStore : NSObject <WKObject, NSSecureCoding> {
    struct ObjectStorage<WebKit::WebsiteDataStore> { struct type { unsigned char __lx[224]; } data; } _websiteDataStore;
    struct WeakObjCPtr<id<_WKWebsiteDataStoreDelegate> > { id m_weakReference; } _delegate;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic, setter=_setResourceLoadStatisticsEnabled:) BOOL _resourceLoadStatisticsEnabled;
@property (nonatomic, setter=_setResourceLoadStatisticsDebugMode:) BOOL _resourceLoadStatisticsDebugMode;
@property (nonatomic, setter=_setPerOriginStorageQuota:) unsigned long long _perOriginStorageQuota;
@property (nonatomic, setter=_setBoundInterfaceIdentifier:) NSString *_boundInterfaceIdentifier;
@property (nonatomic, setter=_setAllowsCellularAccess:) BOOL _allowsCellularAccess;
@property (nonatomic, setter=_setProxyConfiguration:) NSDictionary *_proxyConfiguration;
@property (nonatomic, setter=_setAllowsTLSFallback:) BOOL _allowsTLSFallback;
@property (readonly, nonatomic) NSURL *_indexedDBDatabaseDirectory;
@property (weak, nonatomic) id<_WKWebsiteDataStoreDelegate> _delegate;
@property (readonly, copy, nonatomic) _WKWebsiteDataStoreConfiguration *_configuration;
@property (readonly, nonatomic, getter=isPersistent) BOOL persistent;
@property (readonly, nonatomic) WKHTTPCookieStore *httpCookieStore;
@property (readonly) struct Object { void /* function */ **x0; id x1; } *_apiObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)nonPersistentDataStore;
+ (id)defaultDataStore;
+ (id)allWebsiteDataTypes;
+ (id)_allWebsiteDataTypesIncludingPrivate;
+ (BOOL)_defaultDataStoreExists;
+ (void)_deleteDefaultDataStoreForTesting;
+ (void)_allowWebsiteDataRecordsForAllOrigins;

- (void)_clearPrevalentDomain:(id)a0 completionHandler:(id /* block */)a1;
- (id)init;
- (void)_getResourceLoadStatisticsDataSummary:(id /* block */)a0;
- (void)_appBoundDomains:(id /* block */)a0;
- (void).cxx_destruct;
- (void)_loadedSubresourceDomainsFor:(id)a0 completionHandler:(id /* block */)a1;
- (void)_getAllStorageAccessEntriesFor:(id)a0 completionHandler:(id /* block */)a1;
- (void)removeDataOfTypes:(id)a0 modifiedSince:(id)a1 completionHandler:(id /* block */)a2;
- (void)_getIsPrevalentDomain:(id)a0 completionHandler:(id /* block */)a1;
- (void)dealloc;
- (BOOL)_hasRegisteredServiceWorker;
- (id)_initWithConfiguration:(id)a0;
- (void)_setThirdPartyCookieBlockingMode:(BOOL)a0 onlyOnSitesWithoutUserInteraction:(BOOL)a1 completionHandler:(id /* block */)a2;
- (id)initWithCoder:(id)a0;
- (void)_fetchDataRecordsOfTypes:(id)a0 withOptions:(unsigned long long)a1 completionHandler:(id /* block */)a2;
- (void)_setUseITPDatabase:(BOOL)a0 completionHandler:(id /* block */)a1;
- (void)removeDataOfTypes:(id)a0 forDataRecords:(id)a1 completionHandler:(id /* block */)a2;
- (void)_clearResourceLoadStatistics:(id /* block */)a0;
- (void)_scheduleCookieBlockingUpdate:(id /* block */)a0;
- (void)_renameOrigin:(id)a0 to:(id)a1 forDataOfTypes:(id)a2 completionHandler:(id /* block */)a3;
- (void)_clearLoadedSubresourceDomainsFor:(id)a0;
- (id).cxx_construct;
- (void)_setResourceLoadStatisticsTestingCallback:(id /* block */)a0;
- (void)_isRegisteredAsSubresourceUnderFirstParty:(id)a0 thirdParty:(id)a1 completionHandler:(id /* block */)a2;
- (void)_setPrevalentDomain:(id)a0 completionHandler:(id /* block */)a1;
- (void)fetchDataRecordsOfTypes:(id)a0 completionHandler:(id /* block */)a1;
- (void)_processStatisticsAndDataRecords:(id /* block */)a0;
- (void)_statisticsDatabaseHasAllTables:(id /* block */)a0;
- (void)_logUserInteraction:(id)a0 completionHandler:(id /* block */)a1;
- (void)_appBoundSchemes:(id /* block */)a0;
- (void)encodeWithCoder:(id)a0;

@end
