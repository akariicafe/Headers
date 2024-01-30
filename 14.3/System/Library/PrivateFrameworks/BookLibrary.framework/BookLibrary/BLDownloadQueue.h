@class BLServiceProxy, NSMutableDictionary, NSHashTable, NSArray, NSString;

@interface BLDownloadQueue : NSObject <SSBookDownloadQueue, BUUserAccountObserving> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _observersLock;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _activeDownloadsLock;
}

@property (retain, nonatomic) NSHashTable *observers;
@property (retain, nonatomic) BLServiceProxy *serviceProxy;
@property (retain, nonatomic) NSMutableDictionary *activeDownloads;
@property (readonly, nonatomic) NSArray *downloads;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (void)cancelAllActiveDownloads;

- (void)addDownloadWithMetadata:(id)a0 completion:(id /* block */)a1;
- (id)init;
- (void).cxx_destruct;
- (void)_notifyFailed:(id)a0;
- (void)processAutomaticDownloadsWithReply:(id /* block */)a0;
- (void)setAutomaticDownloadEnabled:(BOOL)a0 uiManager:(id)a1 withCompletion:(id /* block */)a2;
- (void)removeObserver:(id)a0;
- (void)purchaseWithRequest:(id)a0 uiManager:(id)a1 completion:(id /* block */)a2;
- (void)cancelAllActiveDownloadsWithCompletion:(id /* block */)a0;
- (void)dealloc;
- (void)purchaseWithBuyParameters:(id)a0 storeID:(id)a1 completion:(id /* block */)a2;
- (void)_purchaseDidFailedWithResponse:(id)a0;
- (void)userAccount:(unsigned long long)a0 didChangeWithReason:(unsigned long long)a1;
- (id)_dateFromObject:(id)a0;
- (void)_sendInitialProgressNotificationForDownloadWithStoreID:(id)a0 storePlaylistID:(id)a1 orPermlink:(id)a2 downloadID:(id)a3 title:(id)a4 collectionTitle:(id)a5 isPaused:(BOOL)a6 isAudiobook:(BOOL)a7 targetObserver:(id)a8;
- (void)_postDownloadCompleteNotificationWithDictionary:(id)a0 failed:(BOOL)a1;
- (void)_notifyComplete:(id)a0;
- (void)_cancelAllPausedDownloads;
- (void)addObserver:(id)a0;
- (id)_stringFromObject:(id)a0;
- (void)purchaseWithRequest:(id)a0 completion:(id /* block */)a1;
- (id)_numberFromObject:(id)a0;
- (void)_purchaseDidCompleteWithResponse:(id)a0;
- (void)resumeDownloadWithID:(id)a0 withCompletion:(id /* block */)a1;
- (void)_notifyProgress:(id)a0;
- (void)addRestoreDownloadsWithMetadata:(id)a0 completion:(id /* block */)a1;
- (void)addRestoreDownloadWithMetadata:(id)a0 completion:(id /* block */)a1;
- (id)_downloadStatusStoreID:(id)a0 storePlaylistID:(id)a1 orPermLink:(id)a2 downloadID:(id)a3 title:(id)a4 collectionTitle:(id)a5 isPaused:(BOOL)a6 isAudiobook:(BOOL)a7;
- (void)_sendCancelCompletionNotificationForDownloadWithDownloadID:(id)a0;
- (void)addDownloadsWithManifestRequest:(id)a0 uiManager:(id)a1 completion:(id /* block */)a2;
- (void)addDownloadWithPermlink:(id)a0 title:(id)a1 completion:(id /* block */)a2;
- (void)reloadFromServerWithCompletion:(id /* block */)a0;
- (void)addDownloadWithPurchaseParameters:(id)a0 completion:(id /* block */)a1;
- (void)purchaseWithBuyParameters:(id)a0 storeID:(id)a1 isAudiobook:(BOOL)a2 completion:(id /* block */)a3;
- (void)purchaseWithBuyParameters:(id)a0 storeID:(id)a1 isAudiobook:(BOOL)a2 userInfo:(id)a3 completion:(id /* block */)a4;
- (void)cancelDownloadWithID:(id)a0 withCompletion:(id /* block */)a1;
- (void)pauseDownloadWithID:(id)a0 withCompletion:(id /* block */)a1;
- (void)_addDownloadWithMetadata:(id)a0 isRestore:(BOOL)a1 completion:(id /* block */)a2;
- (void)addDownloadWithPurchaseParameters:(id)a0 storeID:(id)a1 completion:(id /* block */)a2;
- (void)addDownloadsWithRestoreContentRequestItems:(id)a0 completion:(id /* block */)a1;
- (id)_downloadStatusFromDictionary:(id)a0 outParamNewlyTrackedDownload:(BOOL *)a1;
- (void)_postUpdatesForCurrentlyPausedDownloadsForObserver:(id)a0;
- (void)addDownloadsWithMetadata:(id)a0 completion:(id /* block */)a1;

@end
