@interface SBActivationFailedAlertItem : SBAlertItem {
    BOOL _showRetryButton;
    BOOL _showSupportNumber;
    long long _slot;
}

- (void)performUnlockAction;
- (void)configure:(BOOL)a0 requirePasscodeForActions:(BOOL)a1;
- (id)initWithFailureCount:(int)a0 slot:(long long)a1;
- (BOOL)suppressForKeynote;

@end
