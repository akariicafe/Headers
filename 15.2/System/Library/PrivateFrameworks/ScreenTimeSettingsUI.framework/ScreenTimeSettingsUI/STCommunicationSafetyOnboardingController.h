@class UINavigationController;

@interface STCommunicationSafetyOnboardingController : NSObject

@property (copy) id /* block */ completionBlock;
@property (retain) UINavigationController *navigationController;

- (void).cxx_destruct;
- (void)presentOverViewController:(id)a0 completionBlock:(id /* block */)a1;
- (id)_createCommunicationSafetyEDUController;
- (void)_continueSelected;
- (void)_addTrayButtonToWelcomeController:(id)a0 localizationKey:(id)a1 action:(SEL)a2 isBold:(BOOL)a3;
- (void)_notNowSelected;

@end
