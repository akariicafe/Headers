@class NSString, NSMapTable;

@interface SBSecureMainDisplaySceneManager : SBSceneManager <BLSSceneDelegateWithActionHandlers> {
    NSMapTable *_blsActionHandlersForScenes;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)sceneIdentityForApplication:(id)a0 targetContentIdentifier:(id)a1;
- (id)sceneIdentityForApplication:(id)a0 uniqueIdentifier:(id)a1 targetContentIdentifier:(id)a2;
- (id)sceneIdentityForApplication:(id)a0 uniqueIdentifier:(id)a1;
- (id)newSceneIdentityForApplication:(id)a0;
- (id)sceneIdentityForApplication:(id)a0;
- (void)scene:(id)a0 didReceiveActions:(id)a1;
- (id)_sceneIdentifierForBundleIdentifier:(id)a0;
- (BOOL)_shouldAutoHostScene:(id)a0;
- (void)_noteDidChangeToVisibility:(unsigned long long)a0 previouslyExisted:(BOOL)a1 forScene:(id)a2;
- (void)removeActionHandler:(id)a0 forScene:(id)a1;
- (void)addActionHandler:(id)a0 forScene:(id)a1;
- (void).cxx_destruct;
- (BOOL)_shouldTrackScenesForDeactivation;

@end
