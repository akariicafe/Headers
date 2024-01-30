@class NSArray, NSString, NSMapTable, PXUpdater, NSObject, NSMutableArray;
@protocol OS_dispatch_queue;

@interface PXGridInlinePlaybackController : NSObject <PXPreferencesObserver> {
    NSObject<OS_dispatch_queue> *_recordsQueue;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lookupLock;
    NSMapTable *_lookupLock_recordsByDisplayAsset;
    NSMutableArray *_currentlyPlayingRecords;
    NSMutableArray *_visibleRecords;
    PXUpdater *_updater;
}

@property (nonatomic) BOOL active;
@property (nonatomic) BOOL canCreateRecords;
@property (nonatomic) BOOL playbackEnabled;
@property (nonatomic) BOOL applicationActive;
@property (nonatomic) BOOL lowPowerModeEnabled;
@property (nonatomic) BOOL autoplaySettingEnabled;
@property (readonly, copy, nonatomic) NSArray *currentRecords;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } currentVisibleRect;
@property (readonly, nonatomic) BOOL canProvideGeometriesForRecords;
@property (readonly, nonatomic) BOOL shouldEnablePlayback;
@property (readonly, nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } criticallyVisibleEdgeInsets;
@property (nonatomic) BOOL isContentViewVisible;
@property (nonatomic) BOOL isOneUpVisible;
@property (nonatomic) BOOL isContextMenuInteractionActive;
@property (nonatomic) BOOL isDragSessionActive;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)preferencesDidChange;
- (void)_applicationDidBecomeActive:(id)a0;
- (void)_processInfoPowerStateDidChange:(id)a0;
- (id)createPlaybackRecordForDisplayAsset:(id)a0 mediaProvider:(id)a1 geometryReference:(id)a2;
- (void)_updatePlaybackEnabled;
- (void)_applicationDidResignActive:(id)a0;
- (void)visibleRectDidChange;
- (BOOL)canPlayAsset:(id)a0;
- (void)setNeedsUpdate;
- (void).cxx_destruct;
- (id)filterSortedRecordsToPlay:(id)a0;
- (id)init;
- (BOOL)canUpdatePlayingRecords;
- (void)didUpdatePlayingRecords;
- (void)dealloc;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForPlaybackRecord:(id)a0 minPlayableSize:(out struct CGSize { double x0; double x1; } *)a1;
- (id)checkOutPlaybackRecordForDisplayAsset:(id)a0 mediaProvider:(id)a1 geometryReference:(id)a2;
- (id)checkOutPlaybackRecordForDisplayAsset:(id)a0 mediaProvider:(id)a1 geometryReference:(id)a2 configurationBlock:(id /* block */)a3;
- (void)willCheckInPlaybackRecordForDisplayAsset:(id)a0;
- (void)checkInPlaybackRecordForDisplayAsset:(id)a0;
- (void)checkInPlaybackRecordForDisplayAssets:(id)a0;
- (BOOL)isPlayingDisplayAsset:(id)a0;
- (void)invalidatePlaybackEnabled;
- (void)invalidatePlayingRecords;
- (void)_updateActive;
- (void)_updateLowPowerModeEnabled;
- (void)_updateCanCreateRecords;
- (void)_updateVisibilityOfRecords;
- (void)_updatePlayingRecords;
- (void)_startPlaybackForRecords:(id)a0;
- (void)_stopPlaybackForRecords:(id)a0;
- (BOOL)isDisplayAssetEligibleForAutoPlayback:(id)a0;
- (BOOL)_hasAnyPlaybackRecords;

@end
