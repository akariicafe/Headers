@class NSString, GEOObserverHashTable;
@protocol GEOMapDataSubscriptionPersistence, GEOMapDataSubscriptionDownloadManager;

@interface GEOMapDataSubscriptionManager : NSObject <GEOMapDataSubscriptionDownloadManagerDelegate> {
    id<GEOMapDataSubscriptionPersistence> _persistence;
    id<GEOMapDataSubscriptionDownloadManager> _downloadManager;
    GEOObserverHashTable *_stateObservers;
}

@property (class, readonly, nonatomic) GEOMapDataSubscriptionManager *sharedManager;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)_setSharedManagerUseLocalPersistence:(BOOL)a0;

- (id)init;
- (void).cxx_destruct;
- (void)_addStateObserver:(id)a0;
- (void)_removeStateObserver:(id)a0;
- (void)_addSubscriptionWithIdentifier:(id)a0 auditToken:(id)a1 dataTypes:(unsigned long long)a2 policy:(long long)a3 region:(id)a4 expirationDate:(id)a5 callbackQueue:(id)a6 completionHandler:(id /* block */)a7;
- (void)_externallyManagedDownloaderDidFinish:(id)a0 withError:(id)a1;
- (void)_registerExternallyManagedDownloader:(id)a0;
- (void)addSubscriptionWithIdentifier:(id)a0 dataTypes:(unsigned long long)a1 policy:(long long)a2 region:(id)a3 expirationDate:(id)a4 callbackQueue:(id)a5 completionHandler:(id /* block */)a6;
- (void)cancelDownloadForSubscriptionIdentifier:(id)a0;
- (void)cancelDownloadForSubscriptionIdentifiers:(id)a0;
- (void)downloadManager:(id)a0 didUpdateState:(id)a1 forIdentifier:(id)a2;
- (void)fetchAllSubscriptionsWithCallbackQueue:(id)a0 completionHandler:(id /* block */)a1;
- (void)fetchStateForSubscriptionWithIdentifier:(id)a0 callbackQueue:(id)a1 completionHandler:(id /* block */)a2;
- (void)fetchSubscriptionsWithIdentifiers:(id)a0 callbackQueue:(id)a1 completionHandler:(id /* block */)a2;
- (id)initWithPersistence:(id)a0 downloadManager:(id)a1;
- (void)removeSubscriptionWithIdentifier:(id)a0 callbackQueue:(id)a1 completionHandler:(id /* block */)a2;
- (void)startDownloadForSubscriptionIdentifier:(id)a0;
- (void)startDownloadForSubscriptionIdentifiers:(id)a0;

@end
