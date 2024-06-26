@class NSString, FBSDisplayLayoutPublisher, DBLayerMetadataService, CARObserverHashTable, CRCarPlayAppPolicyEvaluator, DBAnalytics, NSMutableDictionary, DBClusterControlSession, CRVehicle, DBIconBadgeController, CRSUIWallpaperPreferences, CRPairedVehicleManager, NSObject, PDCPreflightManager, CARSession, DBClusterControlChannel, UIScreen, DBNavigationStateProvider, DBAppHistory, DBIconImageCache, UITraitCollection, FBSDisplayConfiguration, FBSDisplayIdentity, NSMapTable;
@protocol OS_dispatch_queue;

@interface DBEnvironmentConfiguration : NSObject <CARSessionCommandObserving, DBAppPolicyProviding> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _policyLock;
}

@property (retain, nonatomic) CRPairedVehicleManager *pairedVehicleManager;
@property (retain, nonatomic) NSMutableDictionary *policyLock_appPolicyForBundleID;
@property (retain, nonatomic) CARObserverHashTable *observers;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } currentViewAreaFrame;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } currentViewAreaSafeAreaInsets;
@property (nonatomic) unsigned long long currentViewAreaTransitionControlType;
@property (nonatomic) unsigned long long currentStatusBarEdge;
@property (nonatomic) BOOL currentViewAreaSupportsFocusTransfer;
@property (retain, nonatomic) NSMapTable *viewAreaToStatusBarEdgeMap;
@property (nonatomic) long long mapsUserInterfaceStyle;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *vehicleUpdateQueue;
@property (readonly, nonatomic) unsigned long long interactionAffordances;
@property (readonly, nonatomic) long long layoutJustification;
@property (readonly, nonatomic) BOOL screenSupportsFocus;
@property (readonly, nonatomic) CARSession *session;
@property (retain, nonatomic) DBClusterControlChannel *clusterControlChannel;
@property (retain, nonatomic) DBLayerMetadataService *layerMetadataService;
@property (retain, nonatomic) DBClusterControlSession *clusterControlSession;
@property (readonly, nonatomic) DBAnalytics *analytics;
@property (readonly, nonatomic) FBSDisplayIdentity *displayIdentity;
@property (readonly, nonatomic) FBSDisplayConfiguration *displayConfiguration;
@property (readonly, nonatomic) FBSDisplayLayoutPublisher *displayLayoutPublisher;
@property (readonly, nonatomic) UIScreen *screen;
@property (readonly, nonatomic) double screenScale;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } currentSafeViewAreaFrame;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } currentUnadjustedSafeViewAreaFrame;
@property (readonly, nonatomic) BOOL currentViewAreaSupportsUIOutsideSafeArea;
@property (readonly, copy, nonatomic) UITraitCollection *traitCollection;
@property (readonly, nonatomic) CRVehicle *vehicle;
@property (readonly, nonatomic, getter=isACBackSupported) BOOL acBackSupported;
@property (readonly, nonatomic, getter=isAmbientBrightnessNighttime) BOOL ambientBrightnessNighttime;
@property (readonly, nonatomic, getter=isConnectedWirelessly) BOOL connectedWirelessly;
@property (readonly, nonatomic, getter=isGeoSupported) BOOL geoSupported;
@property (nonatomic, getter=isKnownVehicle) BOOL knownVehicle;
@property (retain, nonatomic) NSString *vehicleID;
@property (readonly, nonatomic) NSString *OEMIconLabel;
@property (readonly, nonatomic, getter=isOEMIconVisible) BOOL OEMIconVisible;
@property (nonatomic, getter=isPairedVehicle) BOOL pairedVehicle;
@property (readonly, nonatomic, getter=isRightHandDrive) BOOL rightHandDrive;
@property (readonly, nonatomic) long long carUserInterfaceStyle;
@property (readonly, nonatomic) long long nightModeUserInterfaceStyle;
@property (readonly, nonatomic) long long effectiveMapsUserInterfaceStyle;
@property (readonly, nonatomic) DBNavigationStateProvider *navigationStateProvider;
@property (readonly, nonatomic) DBIconBadgeController *iconBadgeController;
@property (readonly, nonatomic) CRCarPlayAppPolicyEvaluator *appPolicyEvaluator;
@property (readonly, nonatomic) DBAppHistory *appHistory;
@property (readonly, nonatomic) PDCPreflightManager *preflightManager;
@property (readonly, nonatomic) CRSUIWallpaperPreferences *wallpaperPreferences;
@property (retain, nonatomic) DBIconImageCache *iconImageCache;
@property (readonly, nonatomic) unsigned long long iconRowCount;
@property (readonly, nonatomic) unsigned long long iconColumnCount;
@property (readonly, nonatomic, getter=isStatusBarDriveSide) BOOL statusBarDriveSide;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_stringForStatusBarEdge:(unsigned long long)a0;

- (void)_pairedVehiclesDidChange:(id)a0;
- (void)addObserver:(id)a0;
- (void)dealloc;
- (void)removeObserver:(id)a0;
- (void).cxx_destruct;
- (void)session:(id)a0 didSetViewArea:(id)a1 forScreenID:(id)a2 withDuration:(double)a3 transitionControlType:(unsigned long long)a4;
- (void)session:(id)a0 didUpdateAppearanceStyle:(long long)a1 forScreenUUID:(id)a2;
- (void)session:(id)a0 didUpdateMapAppearanceStyle:(long long)a1 forScreenUUID:(id)a2;
- (void)session:(id)a0 didUpdateNightMode:(BOOL)a1;
- (void)session:(id)a0 showUIForScreenInfo:(id)a1 withURL:(id)a2;
- (void)session:(id)a0 stopUIForScreenInfo:(id)a1;
- (void)sessionDidUpdateCarCapabilities:(id)a0;
- (void)_computeStatusBarEdgesForViewAreas:(id)a0;
- (long long)_effectiveVehicleAppearancePreference;
- (BOOL)_prefersDarkMapsAppearance;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_safeAreaInsetsForViewArea:(id)a0;
- (unsigned long long)_statusBarEdgeForViewArea:(id)a0;
- (id)_sync_pairedVehicle;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_unadjustedSafeAreaFrameForViewArea:(id)a0;
- (void)_updateVehicleInfo:(id)a0 notifyPairedVehicleChange:(BOOL)a1;
- (void)_updateVehicleInfoSync:(BOOL)a0 notifyPairedVehicleChange:(BOOL)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_viewAreaFrameForViewArea:(id)a0;
- (void)fetchEnhancedIntegrationStatusWithCompletion:(id /* block */)a0;
- (id)initWithDisplayConfiguration:(id)a0 layoutPublisher:(id)a1 iconBadgeController:(id)a2 appPolicyEvaluator:(id)a3 session:(id)a4 preflightManager:(id)a5 navigationStateProvider:(id)a6;
- (id)policyForApplicationInfo:(id)a0;

@end
