@class BFFNavigationController;

@interface MSDSetupUIController : NSObject

@property (retain, nonatomic) BFFNavigationController *navigationController;
@property (copy, nonatomic) id /* block */ completionHandler;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_setupComplete:(BOOL)a0;
- (BOOL)hasSecureCookie;
- (void)_startEACSWithReason:(id)a0 eraseDataPlan:(BOOL)a1;
- (void)markAsNotDemoAndEraseDataPlan:(BOOL)a0;
- (void)popTopmostViewController;
- (void)pushViewController:(id)a0 andRemoveTopmostView:(BOOL)a1;
- (void)quitToCustomerFlow;
- (void)quitToHomeScreen;
- (void)setupCompleteWithStoreID:(id)a0;

@end
