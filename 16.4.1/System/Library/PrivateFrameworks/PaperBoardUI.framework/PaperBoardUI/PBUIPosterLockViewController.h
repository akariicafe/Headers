@class NSString, PBUIPosterFloatingView, PBUIPosterFloatingLayerReplica;
@protocol UIScenePresenter;

@interface PBUIPosterLockViewController : PBUIPosterVariantViewController <PBUIPosterReplicaPortalProviding> {
    unsigned int _floatingContextID;
    id<UIScenePresenter> _floatingPresenter;
    PBUIPosterFloatingView *_realFloatingView;
    PBUIPosterFloatingLayerReplica *_floatingLayerStandIn;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)portalProviderForFloatingLayer;
- (BOOL)updatePresentation;
- (void)scene:(id)a0 didUpdateClientSettingsWithDiff:(id)a1 oldClientSettings:(id)a2 transitionContext:(id)a3;
- (void)legibilitySettingsDidChange;
- (id)portalSourceForReplicaView:(id)a0;
- (BOOL)areSettingsAppropriateForSnapshotting:(id)a0;
- (long long)variant;
- (id)initWithScene:(id)a0 cache:(id)a1;
- (void)invalidate;
- (id)registerPortalSourceObserver:(id)a0;
- (void).cxx_destruct;
- (void)_updateFloatingLayer;

@end
