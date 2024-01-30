@class FBSSceneClientSettingsDiffInspector, NSString, FBSceneManager, NSMutableSet, FBScene, FBSSceneIdentityToken;
@protocol UIExternalScenePairingObserverDelegate;

@interface UIExternalScenePairingObserver : NSObject <FBSceneManagerObserver, FBSceneObserver, FBSceneLayerManagerObserver, BSInvalidatable> {
    FBSSceneIdentityToken *_sceneIdentityToken;
    NSString *_sceneID;
    NSMutableSet *_trackingExternalSceneIDs;
    NSMutableSet *_pairedExternalSceneIDs;
    FBSSceneClientSettingsDiffInspector *_clientSettingsDiffInspector;
    BOOL _invalidated;
}

@property (retain, nonatomic, setter=_setSceneManager:) FBSceneManager *_sceneManager;
@property (readonly, weak, nonatomic) FBScene *scene;
@property (weak, nonatomic) id<UIExternalScenePairingObserverDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)sceneLayerManagerDidUpdateLayers:(id)a0;
- (void)sceneManager:(id)a0 didDestroyScene:(id)a1;
- (void)sceneManager:(id)a0 didCreateScene:(id)a1;
- (void)sceneManager:(id)a0 willDestroyScene:(id)a1;
- (void)scene:(id)a0 didUpdateClientSettingsWithDiff:(id)a1 oldClientSettings:(id)a2 transitionContext:(id)a3;
- (void)dealloc;
- (id)init;
- (void)invalidate;
- (void).cxx_destruct;
- (BOOL)isPairedWithExternalSceneID:(id)a0;
- (id)_initWithSceneManager:(id)a0 scene:(id)a1 delegate:(id)a2;
- (void)_updateExternalScenes;
- (void)_updateScenePairingState;
- (id)initWithScene:(id)a0 delegate:(id)a1;

@end
