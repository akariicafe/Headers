@class OBLinkTrayButton, OBTrayButton, NSString, HMAccessory, HMHome;
@protocol HMMediaDestination, HUConfigurationViewControllerDelegate;

@interface HUHomeTheaterSimpleSetupViewController : HUImageOBWelcomeController <HUConfigurationViewControllerFlow, HUConfigurationViewController>

@property (retain, nonatomic) HMAccessory *accessory;
@property (retain, nonatomic) HMHome *home;
@property (retain, nonatomic) id<HMMediaDestination> destination;
@property (retain, nonatomic) OBTrayButton *confirmButton;
@property (retain, nonatomic) OBLinkTrayButton *skipButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<HUConfigurationViewControllerDelegate> delegate;
@property (nonatomic) BOOL isFinalStep;

- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)_confirm:(id)a0;
- (void)_skip:(id)a0;
- (id)initWithAppleTVAccessory:(id)a0 destination:(id)a1 inHome:(id)a2;
- (id)initWithTitle:(id)a0 detailText:(id)a1 icon:(id)a2 contentImage:(id)a3;
- (Class)onboardingFlowClass;

@end
