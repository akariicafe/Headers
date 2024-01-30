@interface PXGenericDiagnosticsService : PXDiagnosticsService

- (id)title;
- (BOOL)canProvideConsoleDescription;
- (id)consoleDescription;
- (BOOL)canProvideContextualViewController;
- (BOOL)canProvideSettingsViewController;
- (id)settingsViewController;

@end
