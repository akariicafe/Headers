@class NSString, OBTrayButton;
@protocol HUConfigurationViewControllerDelegate;

@interface HUOwnerMustUpgradeViewController : OBWelcomeController <HUConfigurationViewController, HUPreloadableViewController>

@property (retain, nonatomic) OBTrayButton *continueButton;
@property (weak, nonatomic) id<HUConfigurationViewControllerDelegate> delegate;
@property (nonatomic) BOOL isFinalStep;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void).cxx_destruct;
- (id)hu_preloadContent;
- (id)initWithUpgradeRequirements:(unsigned long long)a0;
- (void)_continueButtonTapped:(id)a0;

@end
