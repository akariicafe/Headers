@class NSString;

@interface SBSecureMainDisplaySceneManager : SBSceneManager <SBLayoutStateTransitionSceneEntityFrameProvider>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)_applicationSceneHandleClass;

- (id)sceneIdentityForApplication:(id)a0 targetContentIdentifier:(id)a1;
- (BOOL)_shouldTrackScenesForDeactivation;
- (id)sceneIdentityForApplication:(id)a0;
- (id)sceneLayoutViewController;
- (BOOL)_shouldAutoHostScene:(id)a0;
- (id)sceneIdentityForApplication:(id)a0 uniqueIdentifier:(id)a1;
- (id)sceneIdentityForApplication:(id)a0 uniqueIdentifier:(id)a1 targetContentIdentifier:(id)a2;
- (id)newSceneIdentityForApplication:(id)a0;
- (void)_noteDidChangeToVisibility:(unsigned long long)a0 previouslyExisted:(BOOL)a1 forScene:(id)a2;
- (void)_setupLayoutStateTransitionCoordinator:(id)a0;
- (id)_createRootWindowScenePresentationBinder;
- (id)_sceneIdentifierForBundleIdentifier:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })sceneEntityFrameForWorkspaceEntity:(id)a0 inLayoutState:(id)a1;
- (id)window;

@end
