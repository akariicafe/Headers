@class NSString;

@interface SBSecureMainDisplaySceneManager : SBSceneManager <SBLayoutStateTransitionSceneEntityFrameProvider>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)_applicationSceneHandleClass;

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })sceneEntityFrameForWorkspaceEntity:(id)a0 inLayoutState:(id)a1;
- (void)_noteDidChangeToVisibility:(unsigned long long)a0 previouslyExisted:(BOOL)a1 forScene:(id)a2;
- (id)_sceneIdentifierForBundleIdentifier:(id)a0;
- (id)sceneIdentityForApplication:(id)a0;
- (id)sceneLayoutViewController;
- (id)sceneIdentityForApplication:(id)a0 targetContentIdentifier:(id)a1;
- (id)_createRootWindowScenePresentationBinder;
- (id)window;
- (id)sceneIdentityForApplication:(id)a0 uniqueIdentifier:(id)a1 targetContentIdentifier:(id)a2;
- (id)sceneIdentityForApplication:(id)a0 uniqueIdentifier:(id)a1;
- (void)_setupLayoutStateTransitionCoordinator:(id)a0;
- (id)newSceneIdentityForApplication:(id)a0;
- (BOOL)_shouldTrackScenesForDeactivation;
- (BOOL)_shouldAutoHostScene:(id)a0;

@end
