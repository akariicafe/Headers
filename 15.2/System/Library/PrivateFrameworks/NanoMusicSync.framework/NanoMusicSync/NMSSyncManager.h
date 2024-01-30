@class NSString, ATSession, NSTimer, NSMutableDictionary;

@interface NMSSyncManager : NSObject <ATSessionObserver> {
    ATSession *_observedSession;
    NSTimer *_maskedPendingSyncStateRevealTimer;
    NSMutableDictionary *_syncProgressInfoByAssetType;
}

@property (class, readonly, nonatomic) NMSSyncManager *sharedManager;

@property (retain, nonatomic) id activeSyncSessionIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned int)_mediaTypeForAssetType:(id)a0;
+ (id)_gizmoSyncStates;
+ (unsigned long long)_syncStateForProgressInfo:(id)a0 session:(id)a1;
+ (unsigned long long)_syncWaitingSubstateForProgressInfo:(id)a0;

- (void)session:(id)a0 didUpdateSessionTask:(id)a1;
- (void)session:(id)a0 willBeginSessionTask:(id)a1;
- (void)sessionWillBegin:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)sessionDidFinish:(id)a0;
- (void)dealloc;
- (void)session:(id)a0 didBeginSessionTask:(id)a1;
- (void)session:(id)a0 didFinishSessionTask:(id)a1;
- (id)_defaultProgressInfoDict;
- (void)_updateSyncProgress;
- (void)_updateObservedSyncSession;
- (void)_handleSyncStateDidChangeNotification;
- (id)_defaultSyncProgressInfoForAssetType:(id)a0;
- (unsigned long long)_aggregateAssetItemBytesAddedForMediaType:(unsigned int)a0;
- (id)_assetTypeForMediaType:(unsigned int)a0;
- (id)_syncProgressInfoByAssetType:(id)a0;
- (id)progressInfoForMediaType:(unsigned int)a0;
- (id)_addedTracksQueryForMediaType:(unsigned int)a0;
- (unsigned long long)_estimatedAssetAggregateItemSizeInBytesWithQuery:(id)a0;
- (void)_invokeOnMainThread:(id /* block */)a0;
- (void)_stopObservingSyncSession;
- (void)_startObservingSyncSession;
- (id)_updateProgressInfoForAssetType:(id)a0 assetItemsTotal:(long long)a1 assetItemsSyncedForSyncSession:(long long)a2 bytesToSyncTotal:(unsigned long long)a3 bytesSyncedThisSyncSession:(unsigned long long)a4;
- (unsigned long long)_numberOfItemsNeedingDownloadForAssetType:(id)a0;
- (id)_addedTracksPredicateForMediaType:(unsigned int)a0;
- (id)_tracksQueryWithPredicate:(id)a0;
- (id)_tracksPredicateWithPersistentIDs:(id)a0;
- (id)musicProgressInfo;
- (id)podcastsProgressInfo;
- (id)audiobooksProgressInfo;
- (void)beginReceivingSyncProgressUpdates;

@end
