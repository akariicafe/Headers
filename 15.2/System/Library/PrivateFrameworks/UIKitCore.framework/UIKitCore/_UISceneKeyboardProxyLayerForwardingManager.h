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
+ (id)new;
+ (BOOL)supportsForwardingKeyboardLayers;

- (void)sceneDidInvalidate:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)scene:(id)a0 didUpdateClientSettingsWithDiff:(id)a1 oldClientSettings:(id)a2 transitionContext:(id)a3;
- (id)succinctDescription;
- (void)trackScene:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)_init;
- (id)succinctDescriptionBuilder;
- (void)_updateKeyboardLayersForScene:(id)a0;
- (void)scene:(id)a0 willPrioritizePresenter:(id)a1;
- (id)_newStateMachineWithScene:(id)a0;
- (id)_stateMachineForScene:(id)a0;

@end
