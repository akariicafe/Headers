@class NSObject, NSString, DKExtensionDiscovery, DKDiagnosticRegistry;
@protocol DKViewControllerDelegate, OS_dispatch_queue, DKAccessoryResponder, DKAssetResponder, DKBrightnessResponder, DKVolumeHUDResponder;

@interface DKDiagnosticManager : NSObject <DKAssetResponder, DKAccessoryResponder, DKBrightnessResponder, DKVolumeHUDResponder, DKRequestViewControllerDelegate, DKPluginReloadResponder>

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
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithBundleIdentifier:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)adapterForIdentifier:(id)a0;
- (BOOL)_isDeviceLocked;
- (void)getAsset:(id)a0 completion:(id /* block */)a1;
- (void)uploadAssets:(id)a0 completion:(id /* block */)a1;
- (void)unpairSessionAccessoryOnTestCompletion;
- (void)setScreenToBrightness:(float)a0 animate:(BOOL)a1;
- (void)enableVolumeHUD:(BOOL)a0;
- (void)requestPluginReloadOnFinishWithCompletion:(id /* block */)a0;
- (id)initWithBundleIdentifier:(id)a0 connectionRoute:(unsigned long long)a1;
- (void)beginDiagnosticWithIdentifier:(id)a0 parameters:(id)a1 completion:(id /* block */)a2;
- (void)diagnosticsWithCompletion:(id /* block */)a0;
- (id)attributesForIdentifier:(id)a0;
- (void)cancelAllDiagnostics;
- (void)_reloadUpdatedPlugins;
- (BOOL)_checkPrerequisitesForDiagnostic:(id)a0 parameters:(id)a1 error:(id *)a2;
- (BOOL)_freeSpaceAvailable:(id)a0;
- (void)request:(id)a0 presentViewController:(id)a1 completion:(id /* block */)a2;
- (void)request:(id)a0 dismissViewController:(id)a1 completion:(id /* block */)a2;

@end
