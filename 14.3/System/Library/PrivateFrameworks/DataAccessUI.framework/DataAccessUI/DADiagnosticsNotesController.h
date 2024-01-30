@interface DADiagnosticsNotesController : PSDetailController

- (BOOL)shouldAutorotateToInterfaceOrientation:(long long)a0;
- (id)init;
- (void)_enableButtons;
- (void)viewWillAppear:(BOOL)a0;
- (void)_cancelButtonPressed;
- (void)_disableButtons;
- (void)_okButtonPressed;

@end
