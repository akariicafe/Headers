@class NSString, NSURL, NSDictionary;

@interface _WKWebsiteDataStoreConfiguration : NSObject <WKObject> {
    struct ObjectStorage<WebKit::WebsiteDataStoreConfiguration> { struct type { unsigned char __lx[376]; } data; } _configuration;
}

@property (readonly, nonatomic, getter=isPersistent) BOOL persistent;
@property (copy, nonatomic) NSString *sourceApplicationBundleIdentifier;
@property (copy, nonatomic) NSString *sourceApplicationSecondaryIdentifier;
@property (copy, nonatomic, setter=setHTTPProxy:) NSURL *httpProxy;
@property (copy, nonatomic, setter=setHTTPSProxy:) NSURL *httpsProxy;
@property (nonatomic) BOOL deviceManagementRestrictionsEnabled;
@property (nonatomic) BOOL networkCacheSpeculativeValidationEnabled;
@property (nonatomic) BOOL fastServerTrustEvaluationEnabled;
@property (nonatomic) unsigned long long perOriginStorageQuota;
@property (copy, nonatomic) NSString *boundInterfaceIdentifier;
@property (nonatomic) BOOL allowsCellularAccess;
@property (nonatomic) BOOL legacyTLSEnabled;
@property (copy, nonatomic) NSDictionary *proxyConfiguration;
@property (copy, nonatomic) NSString *dataConnectionServiceType;
@property (nonatomic) BOOL preventsSystemHTTPProxyAuthentication;
@property (nonatomic) BOOL requiresSecureHTTPSProxyConnection;
@property (copy, nonatomic, setter=_setWebStorageDirectory:) NSURL *_webStorageDirectory;
@property (copy, nonatomic, setter=_setIndexedDBDatabaseDirectory:) NSURL *_indexedDBDatabaseDirectory;
@property (copy, nonatomic, setter=_setWebSQLDatabaseDirectory:) NSURL *_webSQLDatabaseDirectory;
@property (copy, nonatomic, setter=_setCookieStorageFile:) NSURL *_cookieStorageFile;
@property (copy, nonatomic, setter=_setResourceLoadStatisticsDirectory:) NSURL *_resourceLoadStatisticsDirectory;
@property (copy, nonatomic) NSURL *privateClickMeasurementStorageDirectory;
@property (copy, nonatomic, setter=_setCacheStorageDirectory:) NSURL *_cacheStorageDirectory;
@property (copy, nonatomic, setter=_setServiceWorkerRegistrationDirectory:) NSURL *_serviceWorkerRegistrationDirectory;
@property (nonatomic) BOOL serviceWorkerProcessTerminationDelayEnabled;
@property (copy, nonatomic) NSURL *networkCacheDirectory;
@property (copy, nonatomic) NSURL *deviceIdHashSaltsStorageDirectory;
@property (copy, nonatomic) NSURL *applicationCacheDirectory;
@property (copy, nonatomic) NSString *applicationCacheFlatFileSubdirectoryName;
@property (copy, nonatomic) NSURL *mediaCacheDirectory;
@property (copy, nonatomic) NSURL *mediaKeysStorageDirectory;
@property (nonatomic) unsigned long long testSpeedMultiplier;
@property (nonatomic) BOOL suppressesConnectionTerminationOnSystemChange;
@property (nonatomic) BOOL allowsServerPreconnect;
@property (copy, nonatomic, setter=setHSTSStorageDirectory:) NSURL *hstsStorageDirectory;
@property (nonatomic) BOOL enableInAppBrowserPrivacyForTesting;
@property (nonatomic) BOOL allowsHSTSWithUntrustedRootCertificate;
@property (copy, nonatomic) NSURL *alternativeServicesStorageDirectory;
@property (copy, nonatomic) NSURL *standaloneApplicationURL;
@property (copy, nonatomic) NSURL *storageDirectory;
@property (nonatomic) BOOL allLoadsBlockedByDeviceManagementRestrictionsForTesting;
@property (readonly) struct Object { void /* function */ **x0; id x1; } *_apiObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)generalStorageDirectory;
- (void)setGeneralStorageDirectory:(id)a0;
- (id)init;
- (void)dealloc;
- (id)initNonPersistentConfiguration;

@end
