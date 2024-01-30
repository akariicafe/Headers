@class HMHome, NSString, OBLinkTrayButton, OBTrayButton, NSArray, HUPersonalRequestsEditorItemManager, HULocationDevice, HUPersonalRequestsDevicesModuleController;
@protocol HUConfigurationViewControllerDelegate;

@interface HUPersonalRequestsSetupViewController : OBWelcomeController <HFItemManagerDelegate, HUItemTableModuleControllerHosting, HUConfigurationViewController, HUPreloadableViewController>

@property (retain, nonatomic) HMHome *home;
@property (retain, nonatomic) OBTrayButton *usePRButton;
@property (retain, nonatomic) OBLinkTrayButton *customizeButton;
@property (retain, nonatomic) HULocationDevice *locationDevice;
@property (retain, nonatomic) NSArray *supportedVoiceRecognitionLanguages;
@property (retain, nonatomic) HUPersonalRequestsEditorItemManager *prEditorItemManager;
@property (retain, nonatomic) HUPersonalRequestsDevicesModuleController *prDevicesModuleController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<HUConfigurationViewControllerDelegate> delegate;
@property (nonatomic) BOOL isFinalStep;

+ (id)_bulletImageWithSystemName:(id)a0 color:(id)a1;

- (void).cxx_destruct;
- (id)initWithHome:(id)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (id)initWithTitle:(id)a0 detailText:(id)a1 icon:(id)a2 contentLayout:(long long)a3;
- (void)viewDidLoad;
- (id)moduleController:(id)a0 presentViewControllerForRequest:(id)a1;
- (id)moduleController:(id)a0 dismissViewControllerForRequest:(id)a1;
- (id)hu_preloadContent;
- (void)_setupPersonalRequestsItemInfrastructure;
- (id)moduleController:(id)a0 textFieldForVisibleItem:(id)a1;
- (BOOL)_allPersonalRequestsDevicesSupportVoiceRecognition;
- (void)_turnOnAllPersonalRequests:(id)a0;
- (void)_customizePersonalRequests:(id)a0;
- (void)_dontUsePersonalRequests:(id)a0;

@end
