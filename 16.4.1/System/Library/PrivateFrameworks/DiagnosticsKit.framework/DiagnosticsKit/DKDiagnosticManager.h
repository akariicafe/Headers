@class NSObject, NSString, DKDiagnosticAllowList, DKExtensionDiscovery, DKDiagnosticRegistry;
@protocol DKViewControllerDelegate, OS_dispatch_queue, DKAccessoryResponder, DKAssetResponder, DKUserAlertResponder, DKBrightnessResponder, DKVolumeHUDResponder;

@interface DKDiagnosticManager : NSObject <DKAssetResponder, DKAccessoryResponder, DKBrightnessResponder, DKVolumeHUDResponder, DKRequestViewControllerDelegate, DKUserAlertResponder, DKPluginReloadResponder>

@property (weak, nonatomic) id<DKBrightnessResponder> brightnessResponder;
@property (weak, nonatomic) id<DKVolumeHUDResponder> volumeHUDResponder;
@property (weak, nonatomic) id<DKViewControllerDelegate> viewControllerDelegate;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *diagnosticsManagerQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *diagnosticListQueue;
@property (retain, nonatomic) DKDiagnosticRegistry *registry;
@property (retain, nonatomic) DKExtensionDiscovery *discovery;
@property (retain, nonatomic) NSString *bundleIdentifier;
@property (nonatomic) unsigned long long connectionRoute;
@property (weak, nonatomic) id<DKBrightnessResponder> brightnessResponder;
@property (weak, nonatomic) id<DKVolumeHUDResponder> volumeHUDResponder;
@property (weak, nonatomic) id<DKViewControllerDelegate> viewControllerDelegate;
@property (nonatomic) BOOL pluginReloadRequested;
@property (weak, nonatomic) id<DKAssetResponder> assetResponder;
@property (weak, nonatomic) id<DKAccessoryResponder> accessoryResponder;
@property (weak, nonatomic) id<DKUserAlertResponder> userAlertResponder;
@property (nonatomic) DKDiagnosticAllowList *allowList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)initWithBundleIdentifier:(id)a0;
- (void).cxx_destruct;
- (BOOL)_isDeviceLocked;
- (id)adapterForIdentifier:(id)a0;
- (void)enableVolumeHUD:(BOOL)a0;
- (void)setScreenToBrightness:(float)a0 animate:(BOOL)a1;
- (BOOL)_checkPrerequisitesForDiagnostic:(id)a0 parameters:(id)a1 error:(id *)a2;
- (BOOL)_freeSpaceAvailable:(id)a0;
- (void)_reloadUpdatedPlugins;
- (id)attributesForIdentifier:(id)a0;
- (void)beginDiagnosticWithIdentifier:(id)a0 parameters:(id)a1 completion:(id /* block */)a2;
- (void)cancelAllDiagnostics;
- (void)diagnosticsWithCompletion:(id /* block */)a0;
- (void)displayAlertWithHeader:(id)a0 message:(id)a1 buttonStrings:(id)a2 completion:(id /* block */)a3;
- (void)getAsset:(id)a0 completion:(id /* block */)a1;
- (id)initWithBundleIdentifier:(id)a0 connectionRoute:(unsigned long long)a1;
- (void)request:(id)a0 dismissViewController:(id)a1 completion:(id /* block */)a2;
- (void)request:(id)a0 presentViewController:(id)a1 completion:(id /* block */)a2;
- (void)requestPluginReloadOnFinishWithCompletion:(id /* block */)a0;
- (void)unpairSessionAccessoryOnTestCompletion;
- (void)uploadAssets:(id)a0 completion:(id /* block */)a1;

@end
