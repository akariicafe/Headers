@class NSString, NSMutableDictionary, NSMutableOrderedSet, NSOperationQueue, NSObject, ATAssetLinkController;
@protocol OS_dispatch_source;

@interface NMSMediaSyncInfoUpdater : NSObject <ATAssetLinkControllerObserver> {
    NSMutableDictionary *_syncInfo;
    NSMutableOrderedSet *_targetsNeedingSyncInfoSynchronize;
    NSObject<OS_dispatch_source> *_currentSyncInfoSynchronizeTimer;
    NSOperationQueue *_queue;
    BOOL _observing;
    ATAssetLinkController *_assetLinkController;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedMediaSyncInfoUpdater;

- (id)init;
- (void)assetLinkController:(id)a0 didFinishAsset:(id)a1;
- (void).cxx_destruct;
- (void)assetLinkController:(id)a0 didUpdateAsset:(id)a1;
- (void)_handleMediaLibraryDidChangeNotification:(id)a0;
- (void)assetLinkController:(id)a0 didEnqueueAsset:(id)a1;
- (void)assetLinkController:(id)a0 didUpdateAssetState:(id)a1;
- (void)_handleMediaPinningMusicContentsInvalidatedNotification:(id)a0;
- (void)_handleMediaPinningPodcastsContentsInvalidatedNotification:(id)a0;
- (void)_handleMediaPinningAudiobooksContentsInvalidatedNotification:(id)a0;
- (void)_handleMusicRecommendationsDidUpdateNotification:(id)a0;
- (void)_setNeedsMediaSyncInfoUpdate;
- (void)_applyUpdatesFromAsset:(id)a0;
- (void)beginUpdatingSyncInfo;
- (void)endUpdatingSyncInfo;

@end
