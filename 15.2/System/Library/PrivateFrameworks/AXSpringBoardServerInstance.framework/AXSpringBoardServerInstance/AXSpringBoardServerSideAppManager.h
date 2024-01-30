@protocol AXSpringBoardServerSideAppManagerDelegate;

@interface AXSpringBoardServerSideAppManager : NSObject

@property (weak, nonatomic) id<AXSpringBoardServerSideAppManagerDelegate> delegate;
@property (nonatomic) unsigned long long dockIconActivationMode;

+ (id)sharedInstance;
+ (id)_mainDisplaySceneManager;
+ (id)_mainDisplaySceneLayoutViewController;

- (BOOL)_isDockIconView:(id)a0;
- (void)_performValidation;
- (BOOL)_hasPinnedApp;
- (void)_endDockIconActivationModeAfterTimeout;
- (id)_applicationController;
- (void)launchPinnedApplication:(id)a0 onLeadingSide:(BOOL)a1;
- (id)medusaAppBundleIdsToLayoutRoles;
- (id)_appWithIdentifier:(id)a0;
- (void)_addResizeGestureRecognizerGesturesIfAllowed:(id)a0;
- (void)_addFloatingApplicationGesturesIfAllowed:(id)a0;
- (BOOL)hasMultipleApps;
- (id)_appForLayoutRole:(long long)a0 layoutState:(id)a1;
- (BOOL)canLaunchAsFloatingApplicationForIconView:(id)a0;
- (id)_mainDisplaySceneManager;
- (BOOL)performMedusaGesture:(unsigned long long)a0;
- (void)_requestTransactionWithPrimaryEntity:(id)a0 sideEntity:(id)a1 floatingEntity:(id)a2 spaceConfiguration:(long long)a3 floatingConfiguration:(long long)a4;
- (void)launchApplication:(id)a0;
- (void)_performSwipeOnFloatingAppSwitcher:(unsigned long long)a0;
- (id)allowedMedusaGestures;
- (BOOL)canActivateMedusaForDock;
- (void)_enumerateAppsAndLayoutRoles:(id /* block */)a0;
- (id)_firstFloatingAppLayout;
- (BOOL)_hasFloatingApp;
- (BOOL)isDisplayingApp;
- (void)_performMedusaGesture:(unsigned long long)a0;
- (id)_sbPreviousEntity;
- (void).cxx_destruct;
- (id)init;
- (id)sceneLayoutState;
- (id)_bundleIdentifierForIconView:(id)a0;
- (id)_activeApplicationBundleIdentifiers;
- (id)_sbEmptyEntity;
- (id)_mainDisplaySceneLayoutViewController;
- (id)_sbPreviousWorkspaceEntityClass;
- (id)_floatingAppRootViewController;
- (void)launchFloatingApplication:(id)a0;
- (long long)_currentFloatingConfiguration;
- (id)_sbWorkspaceMainWorkspace;
- (id)_sbSwitcherTransitionRequestClass;
- (void)launchApplicationWithFullConfiguration:(id)a0;
- (void)_requestFloatingAppSwitcherVisible;
- (BOOL)canLaunchAsPinnedApplicationForIconView:(id)a0;
- (id)appForLayoutRole:(long long)a0;
- (long long)_currentSpaceConfiguration;
- (id)medusaApps;

@end
