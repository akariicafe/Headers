@class FBSceneManager, NSString, FBScene, FBSSceneIdentityToken, FBSMutableSceneSettings, FBSSceneClientSettingsDiffInspector, FBSceneMonitorBehaviors, NSMutableSet;
@protocol FBSceneMonitorDelegate;

@interface FBSceneMonitor : NSObject <FBSceneManagerInternalObserver, FBSceneObserver, FBSceneLayerManagerObserver> {
    FBSceneManager *_sceneManager;
    FBSSceneIdentityToken *_identityToken;
    NSMutableSet *_externalSceneIDs;
    NSMutableSet *_pairedExternalSceneIDs;
    FBSSceneClientSettingsDiffInspector *_diffInspector;
    FBSceneMonitorBehaviors *_delegateMonitorBehaviors;
    FBSceneMonitorBehaviors *_effectiveMonitorBehaviors;
    BOOL _invalidated;
    BOOL _isSynchronizing;
    BOOL _updateSettingsAfterSync;
    BOOL _updateExternalScenesAfterSync;
}

@property (readonly, nonatomic) FBScene *scene;
@property (readonly, copy, nonatomic) NSString *sceneID;
@property (weak, nonatomic) id<FBSceneMonitorDelegate> delegate;
@property (copy, nonatomic) FBSceneMonitorBehaviors *behaviors;
@property (readonly, nonatomic) FBSMutableSceneSettings *sceneSettings;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithScene:(id)a0;
- (void)sceneManagerWillBeginSceneUpdateSynchronization:(id)a0;
- (id)_effectiveBehaviors;
- (void)sceneLayerManagerDidUpdateLayers:(id)a0;
- (id)_initWithSceneManager:(id)a0 sceneID:(id)a1;
- (void)sceneManager:(id)a0 willDestroyScene:(id)a1;
- (void)sceneManagerDidEndSceneUpdateSynchronization:(id)a0;
- (void)sceneManager:(id)a0 didCreateScene:(id)a1;
- (void)_evaluateEffectiveMonitorBehaviors;
- (void)scene:(id)a0 didUpdateClientSettingsWithDiff:(id)a1 oldClientSettings:(id)a2 transitionContext:(id)a3;
- (void)_updateAllSceneStateIgnoringDelegate;
- (void)_updateScenePairingState:(BOOL)a0;
- (void)scene:(id)a0 didApplyUpdateWithContext:(id)a1;
- (void)_setEffectiveMonitorBehaviors:(id)a0;
- (void)sceneManager:(id)a0 didDestroyScene:(id)a1;
- (void).cxx_destruct;
- (void)invalidate;
- (void)dealloc;
- (id)initWithSceneID:(id)a0;
- (void)_updateExternalScenes:(BOOL)a0;
- (void)_updateSceneSettings:(BOOL)a0;
- (BOOL)isPairedWithExternalSceneID:(id)a0;

@end
