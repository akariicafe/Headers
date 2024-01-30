@class OBBoldTrayButton, PSListController;

@interface PSUICarrierSpaceOptInSplashScreen : OBWelcomeController

@property (weak, nonatomic) PSListController *listController;
@property (retain, nonatomic) OBBoldTrayButton *continueButton;
@property (copy, nonatomic) id /* block */ continueButtonAction;

- (id)initWithParent:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (void)continueButtonPressed;

@end
