@class NSCache, NSURLSession, NSPersistentContainer, NSMutableSet, NSOperationQueue, NSObject;
@protocol OS_dispatch_queue;

@interface STAppInfoCache : NSObject

@property (class, readonly, nonatomic) STAppInfoCache *sharedCache;

@property (readonly, nonatomic) NSCache *appInfoByBundleIdentifier;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *lookupQueue;
@property (readonly, nonatomic) NSURLSession *urlSession;
@property (readonly, nonatomic) NSMutableSet *bundleIdentifiersWithPendingRequests;
@property (readonly, nonatomic) NSOperationQueue *completionHandlerQueue;
@property (retain) NSPersistentContainer *persistentContainer;

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (id)_appInfoForBundleIdentifier:(id)a0;
- (id)_placeholderAppInfoWithBundleIdentifier:(id)a0;
- (void)_fetchAppStoreInfoAndNotifyWithBundleIdentifiers:(id)a0;
- (id)appInfoForBundleIdentifier:(id)a0 localOnly:(BOOL)a1;
- (void)fetchAppInfoForBundleIdentifiers:(id)a0 completionHandler:(id /* block */)a1;
- (void)_fetchAppStoreInfoAndNotifyWithBundleIdentifiers:(id)a0 timeoutInterval:(double)a1 completionHandler:(id /* block */)a2;
- (id)_fetchAppInfoFromLaunchServicesWithBundleIdentifier:(id)a0;
- (id)_preloadedAppInfoWithBundleIdentifier:(id)a0;
- (id)_fetchSyncedInstalledAppInfoForBundleIdentifier:(id)a0;
- (void)_handleiTunesResponseForBundleIdentifiers:(id)a0 response:(id)a1 data:(id)a2 error:(id)a3 completionHandler:(id /* block */)a4;
- (void)_finishedFetchingAppInfoByBundleIdentifier:(id)a0;
- (id)_localAppNameForBundleIdentifier:(id)a0;
- (id)appInfoForBundleIdentifier:(id)a0;
- (void)fetchAppInfoForBundleIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)addObserver:(id)a0 selector:(SEL)a1 bundleIdentifier:(id)a2;
- (void)removeObserver:(id)a0 bundleIdentifier:(id)a1;

@end
