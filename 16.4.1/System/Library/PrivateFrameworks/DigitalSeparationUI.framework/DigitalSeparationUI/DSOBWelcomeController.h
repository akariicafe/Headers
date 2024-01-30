@interface DSOBWelcomeController : OBWelcomeController

- (void)viewDidLoad;
- (void)presentErrorAlertController:(id)a0;
- (void)presentErrorAlertWithTitle:(id)a0 message:(id)a1 continueHandler:(id /* block */)a2 tryAgainHandler:(id /* block */)a3;

@end
