@protocol AXSpringBoardServerSideAppManagerDelegate;

@interface AXSpringBoardServerSideAppManager : NSObject

@property (weak, nonatomic) id<AXSpringBoardServerSideAppManagerDelegate> delegate;
@property (nonatomic) unsigned long long dockIconActivationMode;

+ (id)sharedInstance;
+ (id)_mainDisplaySceneManager;

- (id)medusaApps;
- (long long)_currentFloatingConfiguration;
- (void)launchApplication:(id)a0;
- (void)_performMedusaGesture:(unsigned long long)a0;
- (id)_activeApplicationBundleIdentifiers;
- (id)sceneLayoutState;
- (void)_performSwipeOnFloatingAppSwitcher:(unsigned long long)a0;
- (id)_applicationController;
- (id)_sbPreviousEntity;
- (BOOL)isDisplayingApp;
- (void)_enumerateAppsAndLayoutRoles:(id /* block */)a0;
- (id)medusaAppBundleIdsToLayoutRoles;
- (id)_appForLayoutRole:(long long)a0 layoutState:(id)a1;
- (id)_bundleIdentifierForIconView:(id)a0;
- (BOOL)performMedusaGesture:(unsigned long long)a0;
- (BOOL)hasMultipleApps;
- (void)_requestFloatingAppSwitcherVisible;
- (id)_firstFloatingAppLayout;
- (id)_sbSwitcherTransitionRequestClass;
- (id)_sbEmptyEntity;
- (id)_sbPreviousWorkspaceEntityClass;
- (void)launchFloatingApplication:(id)a0;
- (BOOL)canLaunchAsPinnedApplicationForIconView:(id)a0;
- (void)_endDockIconActivationModeAfterTimeout;
- (id)_floatingAppRootViewController;
- (id)allowedMedusaGestures;
- (id)_sbWorkspaceMainWorkspace;
- (void)_requestTransactionWithPrimaryEntity:(id)a0 sideEntity:(id)a1 floatingEntity:(id)a2 spaceConfiguration:(long long)a3 floatingConfiguration:(long long)a4;
- (void)_addFloatingApplicationGesturesIfAllowed:(id)a0;
- (BOOL)_isDockIconView:(id)a0;
- (void)launchApplicationWithFullConfiguration:(id)a0;
- (BOOL)_hasFloatingApp;
- (long long)_currentSpaceConfiguration;
- (id)_appWithIdentifier:(id)a0;
- (id)appForLayoutRole:(long long)a0;
- (id)init;
- (void)_addResizeGestureRecognizerGesturesIfAllowed:(id)a0;
- (id)_mainDisplaySceneManager;
- (BOOL)canActivateMedusaForDock;
- (BOOL)canLaunchAsFloatingApplicationForIconView:(id)a0;
- (void)_performValidation;
- (void).cxx_destruct;
- (BOOL)_hasPinnedApp;
- (void)launchPinnedApplication:(id)a0 onLeadingSide:(BOOL)a1;

@end
