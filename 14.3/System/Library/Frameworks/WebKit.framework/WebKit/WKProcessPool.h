@class NSString, WKGeolocationProviderIOS, NSURL, _WKProcessPoolConfiguration;
@protocol _WKDownloadDelegate, _WKAutomationDelegate, _WKGeolocationCoreLocationProvider;

@interface WKProcessPool : NSObject <WKObject, NSSecureCoding> {
    struct ObjectStorage<WebKit::WebProcessPool> { struct type { unsigned char __lx[896]; } data; } _processPool;
    struct WeakObjCPtr<id<_WKAutomationDelegate> > { id m_weakReference; } _automationDelegate;
    struct WeakObjCPtr<id<_WKDownloadDelegate> > { id m_weakReference; } _downloadDelegate;
    struct RetainPtr<_WKAutomationSession> { void *m_ptr; } _automationSession;
    struct RetainPtr<WKGeolocationProviderIOS> { void *m_ptr; } _geolocationProvider;
    struct RetainPtr<id<_WKGeolocationCoreLocationProvider> > { void *m_ptr; } _coreLocationProvider;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) _WKProcessPoolConfiguration *_configuration;
@property (weak, nonatomic, setter=_setDownloadDelegate:) id<_WKDownloadDelegate> _downloadDelegate;
@property (weak, nonatomic, setter=_setAutomationDelegate:) id<_WKAutomationDelegate> _automationDelegate;
@property (nonatomic, setter=_setCoreLocationProvider:) id<_WKGeolocationCoreLocationProvider> _coreLocationProvider;
@property (copy, nonatomic, setter=_setJavaScriptConfigurationDirectory:) NSURL *_javaScriptConfigurationDirectory;
@property (nonatomic, getter=_isCookieStoragePartitioningEnabled, setter=_setCookieStoragePartitioningEnabled:) BOOL _cookieStoragePartitioningEnabled;
@property (nonatomic, getter=_isStorageAccessAPIEnabled, setter=_setStorageAccessAPIEnabled:) BOOL _storageAccessAPIEnabled;
@property (readonly) WKGeolocationProviderIOS *_geolocationProvider;
@property (readonly) struct Object { void /* function */ **x0; id x1; } *_apiObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_sharedProcessPool;
+ (id)_websiteDataURLForContainerWithURL:(id)a0 bundleIdentifierIfNotInContainer:(id)a1;
+ (id)_allProcessPoolsForTesting;
+ (id)_websiteDataURLForContainerWithURL:(id)a0;
+ (void)_forceGameControllerFramework;

- (unsigned long long)_webProcessCount;
- (unsigned long long)_numberOfConnectedGameControllerFrameworkGamepadsForTesting;
- (void)_terminateNetworkProcess;
- (void)_syncNetworkProcessCookies;
- (void)_clearSupportedPlugins;
- (id)init;
- (void)_setObjectsForBundleParametersWithDictionary:(id)a0;
- (void)_allowAnyTLSCertificateForWebSocketTesting;
- (void).cxx_destruct;
- (void)_automationCapabilitiesDidChange;
- (void)_setCanHandleHTTPSServerTrustEvaluation:(BOOL)a0;
- (void)dealloc;
- (void)_garbageCollectJavaScriptObjectsForTesting;
- (id)_resumeDownloadFromData:(id)a0 websiteDataStore:(id)a1 path:(id)a2 originatingWebView:(id)a3;
- (void)_registerURLSchemeAsCanDisplayOnlyIfCanRequest:(id)a0;
- (void)_clearPermanentCredentialsForProtectionSpace:(id)a0;
- (void)_makeNextNetworkProcessLaunchFailForTesting;
- (unsigned long long)_numberOfConnectedGamepadsForTesting;
- (id)_initWithConfiguration:(id)a0;
- (void)_sendNetworkProcessDidResume;
- (void)_terminateServiceWorkers;
- (void)_setAllowsAnySSLCertificateForServiceWorker:(BOOL)a0;
- (void)_makeNextWebProcessLaunchFailForTesting;
- (unsigned long long)_serviceWorkerProcessCount;
- (id)initWithCoder:(id)a0;
- (BOOL)_hasPrewarmedWebProcess;
- (void)_addSupportedPlugin:(id)a0 named:(id)a1 withMimeTypes:(id)a2 withExtensions:(id)a3;
- (unsigned long long)_processCacheCapacity;
- (void)_sendNetworkProcessWillSuspendImminently;
- (void)_setAllowsSpecificHTTPSCertificate:(id)a0 forHost:(id)a1;
- (id)_downloadURLRequest:(id)a0 websiteDataStore:(id)a1 originatingWebView:(id)a2;
- (int)_networkProcessIdentifier;
- (void)_setUsesOnlyHIDGamepadProviderForTesting:(BOOL)a0;
- (void)_preconnectToServer:(id)a0;
- (void)_setUseSeparateServiceWorkerProcess:(BOOL)a0;
- (BOOL)_networkProcessHasEntitlementForTesting:(id)a0;
- (void)_setAutomationSession:(id)a0;
- (unsigned long long)_maximumSuspendedPageCount;
- (id).cxx_construct;
- (void)_setObject:(id)a0 forBundleParameter:(id)a1;
- (void)_sendNetworkProcessPrepareToSuspend:(id /* block */)a0;
- (void)_clearWebProcessCache;
- (void)_synthesizeAppIsBackground:(BOOL)a0;
- (id)_objectForBundleParameter:(id)a0;
- (unsigned long long)_webProcessCountIgnoringPrewarmedAndCached;
- (unsigned long long)_numberOfConnectedHIDGamepadsForTesting;
- (unsigned long long)_pluginProcessCount;
- (unsigned long long)_webProcessCountIgnoringPrewarmed;
- (unsigned long long)_webPageContentProcessCount;
- (unsigned long long)_processCacheSize;
- (void)_seedResourceLoadStatisticsForTestingWithFirstParty:(id)a0 thirdParty:(id)a1 shouldScheduleNotification:(BOOL)a2 completionHandler:(id /* block */)a3;
- (void)_setCookieAcceptPolicy:(unsigned long long)a0;
- (int)_prewarmedProcessIdentifier;
- (void)_getActivePagesOriginsInWebProcessForTesting:(int)a0 completionHandler:(id /* block */)a1;
- (void)_warmInitialProcess;
- (void)encodeWithCoder:(id)a0;

@end
