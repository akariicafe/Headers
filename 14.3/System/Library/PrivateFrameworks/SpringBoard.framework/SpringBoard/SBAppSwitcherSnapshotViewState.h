@class SBAppSwitcherSnapshotCacheEntry, SBDeviceApplicationSceneHandle;

@interface SBAppSwitcherSnapshotViewState : NSObject {
    BOOL _animatingTransition;
    SBDeviceApplicationSceneHandle *_sceneHandle;
    SBAppSwitcherSnapshotCacheEntry *_cacheEntry;
}

- (void).cxx_destruct;

@end
