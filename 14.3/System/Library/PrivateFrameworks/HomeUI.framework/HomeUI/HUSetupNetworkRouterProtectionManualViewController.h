@class NSString;
@protocol HUConfigurationViewControllerDelegate;

@interface HUSetupNetworkRouterProtectionManualViewController : HUItemTableOBWelcomeController <HUConfigurationViewController>

@property (weak, nonatomic) id<HUConfigurationViewControllerDelegate> delegate;
@property (nonatomic) BOOL isFinalStep;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (void)_continuePressed:(id)a0;
- (void)viewDidLoad;
- (void)_cancelPressed:(id)a0;
- (void)_disablePressed:(id)a0;
- (id)initWithProfile:(id)a0 configurationDelegate:(id)a1;

@end
