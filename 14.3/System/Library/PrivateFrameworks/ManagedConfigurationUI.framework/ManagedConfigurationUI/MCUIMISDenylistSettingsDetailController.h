@interface MCUIMISDenylistSettingsDetailController : PSListController

@property BOOL reenabled;

- (id)init;
- (BOOL)overridden;
- (void)dealloc;
- (id)specifiers;
- (void)setOverride:(id)a0;
- (void)_reloadAsync;
- (void)_askForReenableConfirmation;
- (id)_reenableButtonSpecifier;

@end
