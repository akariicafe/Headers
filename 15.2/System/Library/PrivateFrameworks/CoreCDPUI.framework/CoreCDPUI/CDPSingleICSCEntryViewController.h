@interface CDPSingleICSCEntryViewController : PSKeychainSyncSecurityCodeController

- (void)forgotSecurityCode;
- (void)viewDidDisappear:(BOOL)a0;
- (void)disableUserInteractionAndStartSpinner;
- (void)enableUserInteractionAndStopSpinner;

@end
