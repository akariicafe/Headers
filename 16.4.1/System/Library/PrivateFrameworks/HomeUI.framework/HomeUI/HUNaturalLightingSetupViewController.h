@class HUNaturalLightingSetupModule, OBTrayButton, HUSimpleItemModuleTableViewController, NSString, HMHome;
@protocol HUConfigurationViewControllerDelegate;

@interface HUNaturalLightingSetupViewController : HUItemTableOBWelcomeController <HUNaturalLightingSetupModuleDelegate, HUConfigurationViewControllerFlow, HUConfigurationViewController, HUPreloadableViewController>

@property (retain, nonatomic) HMHome *home;
@property (retain, nonatomic) OBTrayButton *useWithLightsButton;
@property (retain, nonatomic) HUSimpleItemModuleTableViewController *itemTableViewController;
@property (retain, nonatomic) HUNaturalLightingSetupModule *module;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<HUConfigurationViewControllerDelegate> delegate;
@property (nonatomic) BOOL isFinalStep;

+ (id)moduleControllerInHome:(id)a0;

- (void)viewDidLoad;
- (void).cxx_destruct;
- (id)initWithHome:(id)a0;
- (void)_activateNaturalLighting:(id)a0;
- (void)_doNotActivateNaturalLighting:(id)a0;
- (id)_markAllAccessoriesAsOnboarded;
- (void)_updateButtonWithNumberOfLightsSelected:(unsigned long long)a0;
- (id)hu_preloadContent;
- (void)naturalLanguageSetupModule:(id)a0 didUpdateSelectedItems:(id)a1;
- (Class)onboardingFlowClass;

@end
