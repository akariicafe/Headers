@class NSString, HMNetworkRouterProfile;
@protocol HUConfigurationViewControllerDelegate;

@interface HUSetupNetworkRouterProtectionAutoViewController : HUImageOBWelcomeController <HUConfigurationViewController>

@property (readonly, nonatomic) HMNetworkRouterProfile *profile;
@property (weak, nonatomic) id<HUConfigurationViewControllerDelegate> delegate;
@property (nonatomic) BOOL isFinalStep;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (void)_continuePressed:(id)a0;
- (void)_learnMorePressed:(id)a0;
- (void)viewDidLoad;
- (BOOL)_hasNetworkCustomizableAccessories;
- (void)_customizePressed:(id)a0;
- (void)_disablePressed:(id)a0;
- (void)_updateNetworkProtection:(long long)a0 andFinishWithActionResult:(unsigned long long)a1;
- (id)initWithProfile:(id)a0 configurationDelegate:(id)a1;

@end
