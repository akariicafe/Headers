@interface PXGenericDiagnosticsService : PXDiagnosticsService

- (BOOL)canProvideConsoleDescription;
- (id)consoleDescription;
- (BOOL)canProvideContextualViewController;
- (BOOL)canProvideSettingsViewController;
- (id)settingsViewController;
- (id)title;

@end
