@interface VUIAppNavigationController : _VUITVAppNavigationController_iOS

- (void)presentConfirmationDialogWithType:(id)a0;
- (void)_presentConfirmationViewController:(id)a0 preferredContentSize:(struct CGSize { double x0; double x1; })a1 completion:(id /* block */)a2;
- (void)presentConfirmationDialogWithType:(id)a0 name:(id)a1 completion:(id /* block */)a2;
- (void)presentConfirmationDialogWithType:(id)a0 name:(id)a1;

@end
