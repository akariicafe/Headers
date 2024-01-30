@interface PXCMMDiagnosticsService : PXDiagnosticsService

- (id)title;
- (BOOL)canProvideConsoleDescription;
- (BOOL)canProvideContextualViewController;
- (BOOL)canProvideSettingsViewController;
- (id)settingsViewController;
- (id)contextualViewController;

@end
