@class NSHashTable, NSString, NSArray, NSDictionary, SSPurchaseManager, NSObject, NSMutableArray, SSDownloadManager, NSMapTable;
@protocol OS_dispatch_queue;

@interface MPStoreDownloadManager : NSObject <SSDownloadManagerObserver, SSPurchaseManagerDelegate, UIAlertViewDelegate, SSDownloadHandlerDelegate> {
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSArray *_activeDownloads;
    NSObject<OS_dispatch_queue> *_calloutSerialQueue;
    NSMutableArray *_blockObservers;
    NSDictionary *_downloadKindToRequiredClientBundleIdentifiers;
    NSMutableArray *_downloads;
    NSMutableArray *_userDownloads;
    NSMapTable *_downloadIdentifiersToDownloads;
    NSMapTable *_downloadsToObservers;
    NSMapTable *_libraryIdentifiersToDownloads;
    NSHashTable *_observersForAllDownloads;
    NSMapTable *_storeIdentifiersToDownloads;
    BOOL _fetchedInitialDownloads;
    SSDownloadManager *_downloadManager;
    SSPurchaseManager *_purchaseManager;
}

@property (readonly, nonatomic) NSArray *activeDownloads;
@property (readonly, nonatomic) NSArray *downloads;
@property (readonly, nonatomic) NSArray *userDownloads;
@property (readonly, nonatomic, getter=isUsingNetwork) BOOL usingNetwork;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;

- (void)cancelDownloads:(id)a0;
- (void)reloadFromServer;
- (void)_sendActiveDownloadsDidChangeToObserversWithAddedDownloads:(id)a0 removedDownloads:(id)a1;
- (void)_sendDownloadsDidFinishToObserversForDownloads:(id)a0 notifyDownloadManager:(BOOL)a1 completionHandler:(id /* block */)a2;
- (id)downloadForStoreID:(long long)a0;
- (void)_updateDownloadsWithAdditions:(id)a0 removals:(id)a1;
- (void)_sendDownloadsDidChangeToObserversWithAddedDownloads:(id)a0 removedDownloads:(id)a1;
- (void)prioritizeDownloads:(id)a0;
- (id)activeDownloadForStoreID:(long long)a0;
- (BOOL)hasFetchedInitialDownloads;
- (id)_onQueue_findStoreDownloadWithSSDownload:(id)a0 SSPurchase:(id)a1;
- (void)_updateActiveDownloadsWithCancelledDownloads:(id)a0;
- (id)addDownloads:(id)a0;
- (void)_onQueue_addDownloadToMapTables:(id)a0;
- (void)downloadManager:(id)a0 downloadStatesDidChange:(id)a1;
- (id)activeDownloadForMediaItemPersistentID:(unsigned long long)a0;
- (void)requestPermissionToDownloadWithType:(long long)a0 completionHandler:(id /* block */)a1;
- (id)downloadForDownloadPersistentIdentifier:(long long)a0;
- (void)_addNonCancelledDownloadsToActiveList:(id)a0;
- (void)restartDownloads:(id)a0;
- (void)pauseDownloads:(id)a0;
- (id)downloadForMediaItemPersistentID:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)addFinishHandler:(id /* block */)a0 forDownloads:(id)a1;
- (id)init;
- (void)removeObserver:(id)a0 forDownloads:(id)a1;
- (id)_observersForDownload:(id)a0;
- (void)addObserver:(id)a0 forDownloads:(id)a1;
- (id)_init;
- (BOOL)_isActiveDownload:(id)a0;
- (void)_updateMediaItemPropertiesForFinishedStoreDownload:(id)a0 SSDownload:(id)a1;
- (id)downloadForMediaPlaybackItemMetadata:(id)a0;
- (void)_addPurchaseFinishedHandler:(id /* block */)a0 forDownloads:(id)a1;
- (void)downloadManagerNetworkUsageDidChange:(id)a0;
- (void)resumeDownloads:(id)a0;
- (BOOL)_onQueue_hasExistingDownloadForStoreDownload:(id)a0;
- (void)_updateActiveDownloadsWithChangedActiveDownloads:(id)a0 inactiveDownloads:(id)a1;
- (BOOL)_shouldHideDownload:(id)a0;
- (void)dealloc;
- (void)_registerBlockObserver:(id)a0;
- (id)downloadForMediaItem:(id)a0;
- (id)_observersForAllDownloads;
- (void)_onQueue_removeDownloadFromMapTables:(id)a0;
- (void)_unregisterBlockObserver:(id)a0;
- (void)_sendDownloadsDidProgressToObserversForDownloads:(id)a0;
- (void)_sendDownloadsDidFinishPurchasesToObserversForDownloads:(id)a0;
- (void)purchaseManager:(id)a0 didFinishPurchasesWithResponses:(id)a1;
- (id)_existingDownloadForSSDownload:(id)a0;

@end
