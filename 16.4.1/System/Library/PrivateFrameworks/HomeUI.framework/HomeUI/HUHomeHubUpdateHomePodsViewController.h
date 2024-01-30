@class NSArray, OBTrayButton, NAFuture, UIActivityIndicatorView, NSString, UIBarButtonItem;
@protocol HUConfigurationViewControllerDelegate;

@interface HUHomeHubUpdateHomePodsViewController : HUImageOBWelcomeController <HUConfigurationViewControllerFlow, HUSoftwareUpdateUIPresentationDelegate, HUConfigurationViewController, HUPreloadableViewController>

@property (copy, nonatomic) NSArray *homes;
@property (copy, nonatomic) NSArray *homePods;
@property (retain, nonatomic) OBTrayButton *continueButton;
@property (retain, nonatomic) UIBarButtonItem *cancelButton;
@property (retain, nonatomic) NAFuture *softwareUpdateFetchFuture;
@property (retain, nonatomic) UIActivityIndicatorView *spinner;
@property (nonatomic) BOOL userTappedUpdate;
@property (nonatomic) BOOL ranIntoFetchError;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<HUConfigurationViewControllerDelegate> delegate;
@property (nonatomic) BOOL isFinalStep;

- (void)viewDidLoad;
- (void)_dismiss;
- (void).cxx_destruct;
- (void)_cancelButtonPressed:(id)a0;
- (void)_presentGenericError;
- (void)_showSpinner;
- (BOOL)_noHomePodsWithAvailableUpdates;
- (BOOL)_allHomePodsHaveValidSoftwareUpdatesOrSupportsHH2;
- (void)_continueButtonPressed:(id)a0;
- (void)_fetchSoftwareUpdates;
- (void)_hideSpinner;
- (id)_homePodsDownloadingSoftwareUpdate;
- (id)_homePodsReadyToInstallSoftwareUpdate;
- (void)_presentErrorWithMessage:(id)a0;
- (void)_startUpdate;
- (id)hu_preloadContent;
- (id)initWithOwnedHomes:(id)a0 homePodsToUpdate:(id)a1;
- (Class)onboardingFlowClass;
- (id)softwareUpdateUIManager:(id)a0 dismissViewController:(id)a1;
- (id)softwareUpdateUIManager:(id)a0 presentViewController:(id)a1;

@end
