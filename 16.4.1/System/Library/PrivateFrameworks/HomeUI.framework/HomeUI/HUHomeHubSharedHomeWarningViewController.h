@class OBBoldTrayButton, NSSet, UIActivityIndicatorView, NSString, UIBarButtonItem;
@protocol HUConfigurationViewControllerDelegate;

@interface HUHomeHubSharedHomeWarningViewController : HUItemTableOBWelcomeController <HUConfigurationViewControllerFlow, HFItemManagerDelegate, HFHomeManagerObserver, HUConfigurationViewController>

@property (retain, nonatomic) OBBoldTrayButton *commitButton;
@property (retain, nonatomic) NSSet *homes;
@property (retain, nonatomic) UIBarButtonItem *cancelButton;
@property (retain, nonatomic) UIActivityIndicatorView *spinner;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<HUConfigurationViewControllerDelegate> delegate;
@property (nonatomic) BOOL isFinalStep;

- (void)_cleanUp;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)homeManager:(id)a0 didUpdateHH2MigrationInProgressState:(BOOL)a1;
- (void)homeManager:(id)a0 didUpdateHH2State:(BOOL)a1;
- (void)_showSpinner;
- (void)_cancelFlow:(id)a0;
- (void)_commitOrContinue;
- (id)_commitOrContinueButtonTitle;
- (void)_completeSetup;
- (void)_continueTapped:(id)a0;
- (void)_hideSpinner;
- (id)initWithSharedHomes:(id)a0;
- (Class)onboardingFlowClass;

@end
