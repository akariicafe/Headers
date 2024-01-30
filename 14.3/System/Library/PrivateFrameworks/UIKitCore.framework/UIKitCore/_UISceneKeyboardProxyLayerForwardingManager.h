@class NSString, NSMapTable, FBSSceneClientSettingsDiffInspector;

@interface _UISceneKeyboardProxyLayerForwardingManager : NSObject <FBSceneObserver> {
    NSMapTable *_mapSceneToKeyboardForwardingStateMachine;
    FBSSceneClientSettingsDiffInspector *_layersChangedClientSettingsDiffInspector;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (BOOL)supportsForwardingKeyboardLayers;
+ (id)new;

- (void)scene:(id)a0 didUpdateClientSettingsWithDiff:(id)a1 oldClientSettings:(id)a2 transitionContext:(id)a3;
- (id)init;
- (void).cxx_destruct;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)sceneDidInvalidate:(id)a0;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)_init;
- (void)trackScene:(id)a0;
- (id)succinctDescriptionBuilder;
- (id)_newStateMachineWithScene:(id)a0;
- (void)_updateKeyboardLayersForScene:(id)a0;
- (void)scene:(id)a0 willPrioritizePresenter:(id)a1;
- (id)_stateMachineForScene:(id)a0;

@end
