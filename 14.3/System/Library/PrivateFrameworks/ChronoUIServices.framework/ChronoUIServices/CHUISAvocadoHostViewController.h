@class NSString, FBScene, CHSWidget, NSMutableDictionary, UIImageView, FBApplicationUpdateScenesTransaction, CHSWidgetMetrics, CHSScreenshotManager, UILabel;
@protocol UIScenePresenter, CHUISAvocadoHostViewControllerDelegate;

@interface CHUISAvocadoHostViewController : UIViewController <FBSceneDelegate, FBSceneLayerManagerObserver, LSApplicationWorkspaceObserverProtocol, BSInvalidatable> {
    id<UIScenePresenter> _scenePresenter;
    FBScene *_scene;
    NSMutableDictionary *_touchDeliveryPolicyAssertions;
    FBApplicationUpdateScenesTransaction *_updateScenesTransaction;
    BOOL _invalidated;
    UIImageView *_snapshotImageView;
    UILabel *_snapshotDebugLabel;
    unsigned long long _signpostID;
    CHSScreenshotManager *_screenshotManager;
    BOOL _hasSentForegroundMessage;
    BOOL _isInViewDidDisappear;
}

@property (readonly, copy, nonatomic) NSString *avocadoIdentifier;
@property (readonly, copy, nonatomic) NSString *avocadoKind;
@property (readonly, copy, nonatomic) NSString *extensionBundleIdentifier;
@property (readonly, nonatomic) long long sizeClass;
@property (copy, nonatomic) CHSWidget *widget;
@property (readonly, copy, nonatomic) CHSWidgetMetrics *metrics;
@property (nonatomic) unsigned long long style;
@property (nonatomic) unsigned long long mode;
@property (readonly, copy, nonatomic) NSString *widgetConfigurationIdentifier;
@property (weak, nonatomic) id<CHUISAvocadoHostViewControllerDelegate> delegate;
@property (nonatomic, getter=isVisiblySettled) BOOL visiblySettled;
@property (nonatomic) BOOL avocadoViewShouldShareTouchesWithHost;
@property (nonatomic, getter=isPrivateModeEnabled) BOOL privateModeEnabled;
@property (nonatomic, getter=areAnimationsDisabled) BOOL animationsDisabled;
@property (nonatomic, getter=shouldVisibleEntrySnapshot) BOOL visibleEntryShouldSnapshot;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_compatibilityMetrics;

- (void).cxx_destruct;
- (void)scene:(id)a0 didReceiveActions:(id)a1;
- (void)sceneDidInvalidate:(id)a0;
- (void)dealloc;
- (void)sceneContentStateDidChange:(id)a0;
- (id)initWithWidget:(id)a0 metrics:(id)a1 widgetConfigurationIdentifier:(id)a2 style:(unsigned long long)a3 privateModeEnabled:(BOOL)a4;
- (id)cancelTouchesForCurrentEventInHostedContent;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidMoveToWindow:(id)a0 shouldAppearOrDisappear:(BOOL)a1;
- (id)screenshotManager;
- (void)viewDidDisappear:(BOOL)a0;
- (id)_snapshotImage;
- (id)sceneSnapshotView;
- (BOOL)_canShowWhileLocked;
- (void)sceneLayerManagerDidStartTrackingLayers:(id)a0;
- (void)sceneLayerManagerDidStopTrackingLayers:(id)a0;
- (void)invalidate;
- (void)viewDidLoad;
- (id)initWithWidget:(id)a0 metrics:(id)a1 widgetConfigurationIdentifier:(id)a2 style:(unsigned long long)a3 mode:(unsigned long long)a4 privateModeEnabled:(BOOL)a5;
- (void)_tearDownScene;
- (void)_updateSceneToForeground:(BOOL)a0;
- (void)_updateActiveUI;
- (void)_updateTouchDeliveryPolicies;
- (void)_clearTouchDeliveryPolicies;
- (void)_createSnapshotView;
- (BOOL)_isAppearingOrAppeared;
- (void)_modifySnapshotViewForSceneReady;
- (void)_modifySnapshotViewForSceneInitialization;
- (id)initWithWidget:(id)a0 metrics:(id)a1 widgetConfigurationIdentifier:(id)a2;
- (void)setScreenshotManager:(id)a0;
- (void)prewarmContent;
- (id)_containingApplicationProxyForExtensionBundleIdentifier:(id)a0;

@end
