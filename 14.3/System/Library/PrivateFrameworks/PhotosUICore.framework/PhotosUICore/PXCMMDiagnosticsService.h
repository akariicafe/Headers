@interface PXCMMDiagnosticsService : PXDiagnosticsService

- (id)contextualViewController;
- (BOOL)canProvideConsoleDescription;
- (BOOL)canProvideContextualViewController;
- (BOOL)canProvideSettingsViewController;
- (id)settingsViewController;
- (id)title;

@end
