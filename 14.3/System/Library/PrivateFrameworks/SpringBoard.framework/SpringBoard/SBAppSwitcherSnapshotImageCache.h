@class NSString, NSArray, SBAppSwitcherSettings, NSMutableDictionary, SBApplicationController, SBIconController, NSObject, SBOrientationLockManager;
@protocol OS_dispatch_queue, SBAppSwitcherSnapshotImageCacheDelegate, BSInvalidatable;

@interface SBAppSwitcherSnapshotImageCache : NSObject <SBUIActiveOrientationObserver> {
    NSObject<OS_dispatch_queue> *_snapshotQueue;
    NSObject<OS_dispatch_queue> *_controlQueue;
    NSMutableDictionary *_cachedSnapshots;
    NSMutableDictionary *_cacheEntryUpdateObservers;
    NSMutableDictionary *_snapshotRequestsCurrentlyBeingLoaded;
    unsigned long long _snapshotRequestSequenceID;
    long long _lastKnownInterfaceOrientation;
    long long _lastKnownUserInterfaceStyle;
    SBAppSwitcherSettings *_settings;
    id<BSInvalidatable> _stateCaptureInvalidatable;
    BOOL _shouldPurgeNilEntries;
    SBIconController *_iconController;
    SBApplicationController *_applicationController;
    SBOrientationLockManager *_orientationLockManager;
}

@property (weak, nonatomic) id<SBAppSwitcherSnapshotImageCacheDelegate> delegate;
@property (copy, nonatomic) NSArray *cachableAppLayouts;
@property (copy, nonatomic) NSArray *fullSizeCachableAppLayouts;
@property (nonatomic) BOOL reloadsSnapshotsForActiveInterfaceOrientationChange;
@property (copy, nonatomic) NSString *debugName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_purgeSnapshotsForKey:(id)a0;
- (void)activeInterfaceOrientationWillChangeToOrientation:(long long)a0;
- (id)init;
- (void)_addCacheEntryForImage:(id)a0 fromRequest:(id)a1;
- (void).cxx_destruct;
- (id)_createSnapshotRequestWithDisplayItem:(id)a0 inAppLayout:(id)a1 forFullSizeSnapshot:(BOOL)a2;
- (void)_updateCacheForDisplayItem:(id)a0;
- (void)dealloc;
- (void)_enqueueSnapshotRequestsForCachableAppLayouts:(id)a0 forFullSizeSnapshots:(BOOL)a1;
- (id)_cachableAppLayoutsRequiringFullSizeSnapshots;
- (void)_updateObserversForDisplayItem:(id)a0 inAppLayout:(id)a1 withCacheEntry:(id)a2;
- (void)_purgeLowPriorityFullSizeSnapshotRequests;
- (void)_purgeSnapshotRequestsForDisplayItem:(id)a0 withReason:(id)a1;
- (void)_cacheSnapshotForRequest:(id)a0 withDisplayItem:(id)a1 inAppLayout:(id)a2;
- (void)_updateActiveOrientationObservingIfNeeded;
- (void)_snapshotImage:(id)a0 finishedLoadingForRequest:(id)a1;
- (void)_setSnapshotNeedsUpdateForDisplayItem:(id)a0;
- (void)_updateCache;
- (id)_initWithDelegate:(id)a0 iconController:(id)a1 applicationController:(id)a2 orientationLockManager:(id)a3 settings:(id)a4;
- (BOOL)_isValidSnapshotRequest:(id)a0;
- (id)_appLayoutsInPriorityOrder;
- (BOOL)_isValidAppLayout:(id)a0 withSnapshot:(id)a1 givenCachableAppLayouts:(id)a2;
- (void)_purgeAllSnapshotRequests;
- (void)_setShouldPurgeNilEntry:(BOOL)a0;
- (void)_purgeSnapshotRequest:(id)a0 withReason:(id)a1;
- (BOOL)_keepGoingForRequest:(id)a0;
- (void)reloadSnapshotsForInterfaceStyleChange:(long long)a0;
- (id)initWithDelegate:(id)a0;
- (long long)_orientationForAppLayout:(id)a0;
- (void)_enqueueNextSnapshotRequestIfNecessary;
- (void)addSnapshotUpdateObserver:(id)a0 forDisplayItem:(id)a1 inAppLayout:(id)a2;
- (void)_purgeLowPriorityFullSizeSnapshots;
- (void)activeInterfaceOrientationDidChangeToOrientation:(long long)a0 willAnimateWithDuration:(double)a1 fromOrientation:(long long)a2;
- (void)_purgeLowPrioritySnapshotRequests;
- (id)_uiImageForCGImage:(struct CGImage { } *)a0 forSnapshotRequest:(id)a1;
- (struct CGImage { } *)_createDecodedImageIfPossible:(struct CGImage { } *)a0;
- (void)removeSnapshotObserver:(id)a0;
- (void)_purgeLowPrioritySnapshots;
- (void)_asynchronouslyLoadSnapshotFromRequest:(id)a0;
- (void)_loadSnapshotForRequest:(id)a0 withDisplayItem:(id)a1 inAppLayout:(id)a2;
- (void)_purgeAllSnapshots;
- (void)_createDownscaledVariantForRequest:(id)a0 snapshot:(id)a1 displayItem:(id)a2 sceneHandle:(id)a3 application:(id)a4;
- (id)_cachableAppLayoutsForTesting;
- (double)_scaleForDownscaledSnapshotsForAppLayout:(id)a0;
- (void)_snapshotChanged:(id)a0;
- (id)_representedApplicationSceneEntityForDisplayItem:(id)a0;
- (void)_addObserver:(id)a0 forDisplayItem:(id)a1 inAppLayout:(id)a2;

@end
