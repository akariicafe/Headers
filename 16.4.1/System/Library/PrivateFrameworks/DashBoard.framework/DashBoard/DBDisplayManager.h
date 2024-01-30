@class NSMutableDictionary, CARSessionStatus, FBSDisplayLayoutPublisher, DBLayerMetadataService, PDCPreflightManager, DBClusterControlChannel, DBProcessMonitor, DBIconImageCache, NSString, FBSceneManager, DBNavigationStateProvider, NSMutableSet, DBIconBadgeController, CRCarPlayAppPolicyEvaluator;

@interface DBDisplayManager : NSObject <CARSessionObserving, DBNavigationAppInfoProviding, FBSceneManagerDelegate, FBSDisplayObserving>

@property (nonatomic) BOOL activated;
@property (retain, nonatomic) DBIconImageCache *iconImageCache;
@property (retain, nonatomic) FBSceneManager *manager;
@property (retain, nonatomic) NSMutableDictionary *displayToEnvironmentMap;
@property (retain, nonatomic) NSMutableDictionary *displayToPresentationBinderMap;
@property (retain, nonatomic) NSMutableDictionary *displayToRootSceneMap;
@property (retain, nonatomic) NSMutableDictionary *displayToEndpointInjector;
@property (retain, nonatomic) FBSDisplayLayoutPublisher *dashboardDisplayLayoutPublisher;
@property (retain, nonatomic) DBIconBadgeController *iconBadgeController;
@property (retain, nonatomic) CRCarPlayAppPolicyEvaluator *appPolicyEvaluator;
@property (retain, nonatomic) CARSessionStatus *sessionStatus;
@property (retain, nonatomic) NSMutableSet *pendingDisplays;
@property (retain, nonatomic) NSMutableSet *navigationStateProviderRequesters;
@property (retain, nonatomic) DBNavigationStateProvider *navigationStateProvider;
@property (retain, nonatomic) NSMutableSet *processMonitorRequesters;
@property (retain, nonatomic) DBProcessMonitor *processMonitor;
@property (retain, nonatomic) PDCPreflightManager *preflightManager;
@property (retain, nonatomic) NSMutableSet *layerMetadataServiceRequesters;
@property (retain, nonatomic) DBLayerMetadataService *layerMetadataService;
@property (retain, nonatomic) DBClusterControlChannel *clusterControlChannel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)sessionDidDisconnect:(id)a0;
- (void)sessionDidConnect:(id)a0;
- (id)sceneManager:(id)a0 createDefaultTransitionContextForScene:(id)a1;
- (void)sceneManager:(id)a0 didDestroyScene:(id)a1;
- (void)sceneManager:(id)a0 scene:(id)a1 didReceiveActions:(id)a2;
- (void)sceneManager:(id)a0 didCreateScene:(id)a1;
- (void)displayMonitor:(id)a0 didUpdateIdentity:(id)a1 withConfiguration:(id)a2;
- (void)sceneManager:(id)a0 willDestroyScene:(id)a1;
- (void)sceneManager:(id)a0 updateForScene:(id)a1 appliedWithContext:(id)a2;
- (void)displayMonitor:(id)a0 didConnectIdentity:(id)a1 withConfiguration:(id)a2;
- (void)sceneManager:(id)a0 updateForScene:(id)a1 preparedWithContext:(id)a2;
- (void)displayMonitor:(id)a0 willDisconnectIdentity:(id)a1;
- (void)sceneManager:(id)a0 scene:(id)a1 didUpdateClientSettingsWithDiff:(id)a2 oldClientSettings:(id)a3 transitionContext:(id)a4;
- (void)activate;
- (void).cxx_destruct;
- (void)sceneManager:(id)a0 updateForScene:(id)a1 completedWithContext:(id)a2 error:(id)a3;
- (void)_handleConnectedDisplaysIfPossible;
- (void)_setNeedsLayerMetadataService:(BOOL)a0 forDisplayIdentity:(id)a1;
- (void)_setNeedsNavigationStateProvider:(BOOL)a0 forDisplayIdentity:(id)a1;
- (void)_setNeedsTemplateProcessMonitor:(BOOL)a0 forDisplayIdentity:(id)a1;
- (void)_setPrimaryDisplayCornerMaskImageIfNecessary;
- (void)_updateLayerMetadataService;
- (void)_updateNavigationStateProvider;
- (void)_updateTemplateProcessMonitor;
- (BOOL)bundleIdentifierIsCertificationApp:(id)a0;
- (BOOL)bundleIdentifierSupportsDashboard:(id)a0;
- (BOOL)bundleIdentifierSupportsInstrumentCluster:(id)a0;
- (void)enumerateEnvironmentsUsingBlock:(id /* block */)a0;
- (id)environmentForDisplayIdentity:(id)a0;
- (id)initWithAppPolicyEvaluator:(id)a0;

@end
