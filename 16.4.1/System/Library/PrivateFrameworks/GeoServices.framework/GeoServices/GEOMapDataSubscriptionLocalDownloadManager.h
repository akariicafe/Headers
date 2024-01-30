@class NSString, GEOResourceManifestManager, NSMutableDictionary, geo_isolater, NSObject, GEOMapDataSubscriptionDownloader, GEOTileDB, NSMutableArray;
@protocol OS_dispatch_queue, GEOMapDataSubscriptionDownloadManagerDelegate;

@interface GEOMapDataSubscriptionLocalDownloadManager : NSObject <GEOMapDataSubscriptionDownloaderDelegate, GEOPListStateCapturing, GEOMapDataSubscriptionDownloadManager> {
    NSObject<OS_dispatch_queue> *_workQueue;
    GEOResourceManifestManager *_manifestManager;
    GEOTileDB *_tileDB;
    NSMutableArray *_pendingSubscriptionsToLoad;
    GEOMapDataSubscriptionDownloader *_currentDownloader;
    geo_isolater *_isolation;
    unsigned long long _stateCaptureHandle;
    NSMutableDictionary *_subscriptionStates;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<GEOMapDataSubscriptionDownloadManagerDelegate> delegate;

- (id)captureStatePlistWithHints:(struct os_state_hints_s { unsigned int x0; char *x1; unsigned int x2; unsigned int x3; } *)a0;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (id)initWithTileDB:(id)a0;
- (id)_createDownloaderForSubscription:(id)a0;
- (void)cancelDownloadForSubscriptionIdentifiers:(id)a0;
- (void)didAddSubscription:(id)a0;
- (void)externallyManagedDownloaderDidFinish:(id)a0 withError:(id)a1;
- (void)fetchStateForSubscriptionWithIdentifier:(id)a0 callbackQueue:(id)a1 completionHandler:(id /* block */)a2;
- (void)registerExternallyManagedDownloader:(id)a0;
- (void)startDownloadForSubscriptionIdentifiers:(id)a0;
- (void)subscriptionDownloader:(id)a0 didFinishWithError:(id)a1;

@end
