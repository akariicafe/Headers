@class NSURLSession, NSString, NSSet, NSMutableSet, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue, DNDSKeybagStateProviding;

@interface DNDSAppInfoCache : NSObject <DNDSKeybagStateObserver, LSApplicationWorkspaceObserverProtocol> {
    NSSet *_monitoredBundleIdentifiers;
    NSSet *_relevantBundleIdentifiers;
    NSMutableSet *_inflightBundleIdentifiers;
    NSMutableDictionary *_appInfoByBundleIdentifier;
    NSURLSession *_urlSession;
    NSObject<OS_dispatch_queue> *_queue;
    id<DNDSKeybagStateProviding> _keybag;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_fallbackAppInfoByBundleIdentifier;

- (void)applicationsDidUninstall:(id)a0;
- (void)applicationsDidInstall:(id)a0;
- (void)keybagDidUnlockForTheFirstTime:(id)a0;
- (void)_queue_read;
- (void)_queue_write;
- (id)initWithKeybag:(id)a0;
- (void).cxx_destruct;
- (id)_cacheURL;
- (id)appInfoForBundleIdentifier:(id)a0;
- (id)_installedBundleIdentifiers;
- (void)_queue_monitorBundleIdentifiers:(id)a0;
- (id)_fallbackAppInfoForBundleIdentifier:(id)a0;
- (id)_sanitizeAppInfo:(id)a0;
- (id)_parseAppStoreResponseForBundleIdentifiers:(id)a0 response:(id)a1 data:(id)a2 error:(id)a3;
- (void)_fetchIconForAppInfo:(id)a0 timeoutInterval:(double)a1 completionHandler:(id /* block */)a2;
- (void)_queue_removeCachedDataForAppInfo:(id)a0;
- (void)_queue_removeUnusedAppInfo;
- (void)_queue_fetchMissingAppInfo;
- (id)_queue_bundleIdentifiersWithMissingInfo;
- (void)_fetchIconsForAppInfo:(id)a0 timeoutInterval:(double)a1 completionHandler:(id /* block */)a2;
- (void)_fetchAppStoreInfoForBundleIdentifiers:(id)a0 timeoutInterval:(double)a1 limit:(unsigned long long)a2 completionHandler:(id /* block */)a3;
- (void)monitorApplicationIdentifiers:(id)a0;
- (id)appInfoForBundleIdentifiers:(id)a0;

@end
