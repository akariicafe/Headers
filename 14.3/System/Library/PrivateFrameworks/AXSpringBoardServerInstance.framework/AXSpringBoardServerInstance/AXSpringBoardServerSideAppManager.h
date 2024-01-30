@protocol AXSpringBoardServerSideAppManagerDelegate;

@interface AXSpringBoardServerSideAppManager : NSObject

@property (weak, nonatomic) id<AXSpringBoardServerSideAppManagerDelegate> delegate;
@property (nonatomic) unsigned long long dockIconActivationMode;

+ (id)sharedInstance;
+ (id)_mainDisplaySceneManager;
+ (id)_mainDisplaySceneLayoutViewController;

- (id)sceneLayoutState;
- (void)_performValidation;
- (BOOL)canLaunchAsPinnedApplicationForIconView:(id)a0;
- (void)launchApplication:(id)a0;
- (BOOL)isDisplayingApp;
- (id)init;
- (void)launchApplicationWithFullConfiguration:(id)a0;
- (void)_endDockIconActivationModeAfterTimeout;
- (BOOL)_hasPinnedApp;
- (void).cxx_destruct;
- (id)_floatingAppRootViewController;
- (id)_activeApplicationBundleIdentifiers;
- (id)_sbPreviousWorkspaceEntityClass;
- (id)_appForLayoutRole:(long long)a0 layoutState:(id)a1;
- (id)_sbSwitcherTransitionRequestClass;
- (id)medusaApps;
- (id)_mainDisplaySceneManager;
- (id)_bundleIdentifierForIconView:(id)a0;
- (BOOL)_isDockIconView:(id)a0;
- (id)_sbEmptyEntity;
- (BOOL)hasMultipleApps;
- (id)_appWithIdentifier:(id)a0;
- (BOOL)canActivateMedusaForDock;
- (long long)_currentSpaceConfiguration;
- (id)_sbPreviousEntity;
- (void)_requestTransactionWithPrimaryEntity:(id)a0 sideEntity:(id)a1 floatingEntity:(id)a2 spaceConfiguration:(long long)a3 floatingConfiguration:(long long)a4;
- (void)launchPinnedApplication:(id)a0 onLeadingSide:(BOOL)a1;
- (id)_mainDisplaySceneLayoutViewController;
- (void)launchFloatingApplication:(id)a0;
- (long long)_currentFloatingConfiguration;
- (void)_performMedusaGesture:(unsigned long long)a0;
- (BOOL)_hasFloatingApp;
- (id)appForLayoutRole:(long long)a0;
- (void)_performSwipeOnFloatingAppSwitcher:(unsigned long long)a0;
- (id)_sbWorkspaceMainWorkspace;
- (void)_addResizeGestureRecognizerGesturesIfAllowed:(id)a0;
- (id)_applicationController;
- (void)_requestFloatingAppSwitcherVisible;
- (void)_enumerateAppsAndLayoutRoles:(id /* block */)a0;
- (id)allowedMedusaGestures;
- (void)_addFloatingApplicationGesturesIfAllowed:(id)a0;
- (id)medusaAppBundleIdsToLayoutRoles;
- (BOOL)canLaunchAsFloatingApplicationForIconView:(id)a0;
- (BOOL)performMedusaGesture:(unsigned long long)a0;

@end
