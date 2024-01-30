@class NSString, NSMutableDictionary, NSMutableSet, UIView, FBSSceneSettingsDiffInspector;
@protocol UIScenePresentationBinderDelegate;

@interface UIScenePresentationBinder : NSObject <FBSceneLayerManagerObserver, FBSceneObserver, BSDescriptionProviding, BSInvalidatable> {
    NSString *_identifier;
    UIView *_rootView;
    long long _priority;
    unsigned long long _appearanceStyle;
    BOOL _invalidated;
    NSMutableDictionary *_mapSceneIDToPresenter;
    FBSSceneSettingsDiffInspector *_settingsDiffInspector;
    struct { unsigned char delegateShouldPresentWithNoSceneLayers : 1; unsigned char delegateDidStartPresentingScene : 1; unsigned char delegateDidStopPresentingScene : 1; } _delegateFlags;
}

@property (weak, nonatomic) id<UIScenePresentationBinderDelegate> delegate;
@property (readonly, nonatomic) NSMutableSet *scenes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescriptionBuilder;
- (void)sceneDidInvalidate:(id)a0;
- (void)scene:(id)a0 didApplyUpdateWithContext:(id)a1;
- (void)addScene:(id)a0;
- (void)dealloc;
- (void)removeScene:(id)a0;
- (void)sceneLayerManagerDidStopTrackingLayers:(id)a0;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void)invalidate;
- (void).cxx_destruct;
- (void)_activatePresenter:(id)a0 scene:(id)a1 reason:(id)a2;
- (void)_deactivatePresenter:(id)a0 scene:(id)a1 reason:(id)a2;
- (void)_delegateDidStartPresentingScene:(id)a0;
- (void)_delegateDidStopPresentingScene:(id)a0;
- (BOOL)_delegateShouldPresentSceneOnlyWhenLayersExist;
- (void)_evaluateSceneForHosting:(id)a0 forReason:(id)a1;
- (void)_noteDidStopPresentingScene:(id)a0;
- (void)_noteSceneChangedLevel:(id)a0;
- (void)_noteSceneMovedToBackground:(id)a0;
- (void)_noteSceneMovedToForeground:(id)a0;
- (void)_noteWillStartPresentingScene:(id)a0;
- (void)_positionPresentationViewInRootViewOrderedCorrectly:(id)a0;
- (void)_removeScene:(id)a0 forReason:(id)a1;
- (id)_rootView;
- (id)initWithIdentifier:(id)a0 priority:(long long)a1 rootView:(id)a2 appearanceStyle:(unsigned long long)a3;
- (void)sceneLayerManagerDidStartTrackingLayers:(id)a0;

@end
