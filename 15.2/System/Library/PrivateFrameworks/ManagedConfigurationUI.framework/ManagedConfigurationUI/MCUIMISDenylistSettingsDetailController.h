@interface MCUIMISDenylistSettingsDetailController : PSListController

@property BOOL reenabled;

- (id)specifiers;
- (void)setOverride:(id)a0;
- (BOOL)overridden;
- (id)init;
- (void)dealloc;
- (void)_blockedAppsUpdated;
- (void)_askForReenableConfirmation;
- (id)_reenableButtonSpecifier;

@end
