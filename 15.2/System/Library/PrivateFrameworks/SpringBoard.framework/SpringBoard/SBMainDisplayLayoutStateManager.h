@class SBMainWorkspace, SBRecentAppLayouts, SBPlatformController, SBMainDisplaySceneManager;

@interface SBMainDisplayLayoutStateManager : SBLayoutStateManager

@property (readonly, nonatomic) SBPlatformController *_platformController;
@property (readonly, nonatomic) SBMainWorkspace *_mainWorkspace;
@property (readonly, nonatomic) SBMainDisplaySceneManager *_mainDisplaySceneManager;
@property (readonly, nonatomic) SBRecentAppLayouts *_recentAppLayouts;

+ (Class)_layoutStateClass;

- (id)layoutStateForApplicationTransitionContext:(id)a0;
- (id)_mostRecentAppLayoutForBundleIdentifier:(id)a0 ignoringUniqueIdentifiers:(id)a1;
- (BOOL)_hasAppLayoutBeenUserKilledWithinThresholdToCreateNewScene:(id)a0;
- (BOOL)_doesSceneIDSpecifyPrimaryScene:(id)a0 forApplicationIdentifier:(id)a1 sceneSessionRole:(id)a2;
- (id)primarySceneIdentifierForBundleIdentifier:(id)a0 sceneSessionRole:(id)a1;
- (id)_mostRecentAppLayoutMatchingWorkspaceUniqueIdentifiers:(id)a0;
- (id)_layoutStateForApplicationTransitionContext:(id)a0;
- (id)_sceneIDIfAppLayoutContainsPrimarySceneIDForBundleIdentifier:(id)a0 bundleIdentifier:(id)a1 sceneSessionRole:(id)a2;
- (id)_applicationSceneEntityFromApplicationBundleIdentifier:(id)a0 uniqueIdentifier:(id)a1;
- (id)defaultSceneIdentifierForBundleIdentifier:(id)a0 targetContentIdentifier:(id)a1 allowCanMatches:(BOOL)a2 preferNewScene:(BOOL)a3 visibleSceneIdentifiers:(id)a4 excludingSceneIdentifiers:(id)a5 sceneSessionRole:(id)a6;

@end
