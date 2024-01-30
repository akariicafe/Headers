@interface CDPSingleICSCEntryViewController : PSKeychainSyncSecurityCodeController

- (void)viewDidDisappear:(BOOL)a0;
- (void)forgotSecurityCode;
- (void)disableUserInteractionAndStartSpinner;
- (void)enableUserInteractionAndStopSpinner;

@end
