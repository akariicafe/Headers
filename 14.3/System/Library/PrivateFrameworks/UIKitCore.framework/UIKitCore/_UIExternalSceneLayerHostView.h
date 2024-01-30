@class NSString, UIExternalScenePairingObserver, FBScene, UIScenePresentationManager;
@protocol UIScenePresenter;

@interface _UIExternalSceneLayerHostView : _UISceneLayerHostView <UIExternalScenePairingObserverDelegate> {
    FBScene *_parentScene;
    NSString *_targetSceneID;
    UIExternalScenePairingObserver *_pairingObserver;
    UIScenePresentationManager *_presentationManager;
    id<UIScenePresenter> _presenter;
}

@property (readonly, nonatomic) FBScene *targetScene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)dealloc;
- (void)_updateHostingState;
- (void)_updateTargetScene;
- (void)setCurrentPresentationContext:(id)a0;
- (void)externalScenePairingObserver:(id)a0 pairingsDidChange:(id)a1;
- (id)initWithSceneLayer:(id)a0 parentScene:(id)a1;

@end
