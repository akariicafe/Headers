@class HMHome, NSString, OBTrayButton;
@protocol HUConfigurationViewControllerDelegate;

@interface HUUpgradeMultiUserDevicesViewController : HUImageOBWelcomeController <HUConfigurationViewController, HUPreloadableViewController>

@property (retain, nonatomic) HMHome *home;
@property (retain, nonatomic) OBTrayButton *continueButton;
@property (weak, nonatomic) id<HUConfigurationViewControllerDelegate> delegate;
@property (nonatomic) BOOL isFinalStep;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)viewDidLoad;
- (id)hu_preloadContent;
- (id)initWithUpgradeRequirements:(unsigned long long)a0 home:(id)a1;
- (void)_continueButtonTapped:(id)a0;

@end
