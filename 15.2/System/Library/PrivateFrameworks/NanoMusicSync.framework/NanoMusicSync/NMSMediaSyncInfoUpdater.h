@class ATAssetLinkController, NSString, NSMutableDictionary, NSPersistentHistoryToken, NSMutableOrderedSet, NSObject, NSOperationQueue;
@protocol OS_dispatch_source;

@interface NMSMediaSyncInfoUpdater : NSObject <MTDBExtensionAccessObserver, ATAssetLinkControllerObserver> {
    NSMutableDictionary *_syncInfo;
    NSMutableOrderedSet *_targetsNeedingSyncInfoSynchronize;
    NSObject<OS_dispatch_source> *_currentSyncInfoSynchronizeTimer;
    NSOperationQueue *_queue;
    BOOL _observing;
    ATAssetLinkController *_assetLinkController;
}

@property (retain, nonatomic) NSPersistentHistoryToken *lastToken;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedMediaSyncInfoUpdater;

- (void)_handleMediaLibraryEntitiesAddedOrRemovedNotification:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)assetLinkController:(id)a0 didFinishAsset:(id)a1;
- (void)assetLinkController:(id)a0 didEnqueueAsset:(id)a1;
- (void)assetLinkController:(id)a0 didUpdateAsset:(id)a1;
- (void)assetLinkController:(id)a0 didUpdateAssetState:(id)a1;
- (void)_handleMediaPinningMusicContentsInvalidatedNotification:(id)a0;
- (void)_handleMediaPinningPodcastsContentsInvalidatedNotification:(id)a0;
- (void)_handleMediaPinningAudiobooksContentsInvalidatedNotification:(id)a0;
- (void)extensionAccessDidChange;
- (void)_handleMusicRecommendationsDidUpdateNotification:(id)a0;
- (void)_resetPersistentHistoryTokenAndNotifyObservers;
- (void)_handlePersistentStoreRemoteChangeNotification:(id)a0;
- (void)_setNeedsMediaSyncInfoUpdate;
- (id)_lastTokenCachePath;
- (BOOL)_didFindRelevantChangesForTransaction:(id)a0;
- (void)_applyUpdatesFromAsset:(id)a0;
- (id)_relevantEpisodeProperties;
- (BOOL)_changeContainsRelevantEpisodeChanges:(id)a0;
- (void)beginUpdatingSyncInfo;
- (void)endUpdatingSyncInfo;

@end
