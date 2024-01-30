@class OBLinkTrayButton, OBTrayButton, NSString, HMHome;
@protocol HUConfigurationViewControllerDelegate;

@interface HUTVViewingProfilesCustomizeViewController : HUItemTableOBWelcomeController <HUConfigurationViewController, HUPreloadableViewController>

@property (retain, nonatomic) HMHome *home;
@property (retain, nonatomic) OBTrayButton *usePRButton;
@property (retain, nonatomic) OBLinkTrayButton *customizeButton;
@property (weak, nonatomic) id<HUConfigurationViewControllerDelegate> delegate;
@property (nonatomic) BOOL isFinalStep;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)a0;
- (id)initWithHome:(id)a0;
- (void).cxx_destruct;
- (id)hu_preloadContent;
- (void)_setupTVViewingProfiles:(id)a0;
- (void)_dontSetupTVViewingProfiles:(id)a0;

@end
