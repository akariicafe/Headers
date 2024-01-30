@class OBLinkTrayButton, OBTrayButton, NSString, HUTVViewingProfilesEditorItemManager, HMHome;
@protocol HUConfigurationViewControllerDelegate;

@interface HUTVViewingProfilesSetupViewController : HUImageOBWelcomeController <HFItemManagerDelegate, HUItemTableModuleControllerHosting, HUConfigurationViewController, HUPreloadableViewController>

@property (retain, nonatomic) HMHome *home;
@property (retain, nonatomic) OBTrayButton *useTVVPButton;
@property (retain, nonatomic) OBLinkTrayButton *customizeButton;
@property (retain, nonatomic) HUTVViewingProfilesEditorItemManager *tvVPEditorItemManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<HUConfigurationViewControllerDelegate> delegate;
@property (nonatomic) BOOL isFinalStep;

- (void).cxx_destruct;
- (id)initWithHome:(id)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewDidLoad;
- (id)moduleController:(id)a0 presentViewControllerForRequest:(id)a1;
- (id)moduleController:(id)a0 dismissViewControllerForRequest:(id)a1;
- (id)hu_preloadContent;
- (id)moduleController:(id)a0 textFieldForVisibleItem:(id)a1;
- (void)_turnOnAllTVViewingProfiles:(id)a0;
- (void)_customizeOrOffButton:(id)a0;
- (void)_setupTVViewingProfilesItemInfrastructure;

@end
