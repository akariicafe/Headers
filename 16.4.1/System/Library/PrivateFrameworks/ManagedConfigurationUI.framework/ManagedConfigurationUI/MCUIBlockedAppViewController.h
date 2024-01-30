@interface MCUIBlockedAppViewController : PSListController

@property BOOL reenabled;

- (void)dealloc;
- (void)setOverride:(id)a0;
- (id)specifiers;
- (id)init;
- (BOOL)overridden;
- (void)_askForReenableConfirmation;
- (void)_blockedAppsUpdated;
- (id)_reenableButtonSpecifier;

@end
