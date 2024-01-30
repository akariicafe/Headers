@class UINavigationController, NSString, NSObject;
@protocol STRootViewModelCoordinator;

@interface STCommunicationSafetyOnboardingController : NSObject <STRestrictionsPINControllerDelegate>

@property (copy) id /* block */ completionBlock;
@property (retain) UINavigationController *navigationController;
@property (readonly) NSObject<STRootViewModelCoordinator> *coordinator;
@property BOOL skipFeatureEnablement;
@property BOOL isFeatureEnabled;
@property BOOL isAnalyticsEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithCoordinator:(id)a0;
- (void)didCancelEnteringPIN;
- (void).cxx_destruct;
- (void)didAcceptEnteredPIN;
- (void)_notNowSelected;
- (void)_addAccessoryButtonToHeaderViewForWelcomeController:(id)a0 title:(id)a1 action:(SEL)a2;
- (void)_addTrayButtonToWelcomeController:(id)a0 localizationKey:(id)a1 action:(SEL)a2 isBold:(BOOL)a3;
- (void)_continueSelected;
- (id)_createCommunicationSafetyAnalyticsEDUController;
- (id)_createCommunicationSafetyEDUController;
- (id)_createInitialViewController;
- (id)_createPINController;
- (void)_dontShareAnalyticsSelected;
- (void)_openAboutAnalytics;
- (void)_shareAnalyticsSelected;
- (void)presentOverViewController:(id)a0 skipFeatureEnablement:(BOOL)a1 completionBlock:(id /* block */)a2;
- (BOOL)validatePIN:(id)a0 forPINController:(id)a1;

@end
