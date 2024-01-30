@interface PXGraphDiagnosticsService : PXDiagnosticsService

- (id)contextualViewController;
- (BOOL)canProvideConsoleDescription;
- (BOOL)canProvideContextualViewController;
- (BOOL)canProvideSettingsViewController;
- (id)settingsViewController;
- (id)saliencyStringForAsset:(id)a0;
- (id)_curationDebugStringForDictionary:(id)a0 asset:(id)a1;
- (id)title;

@end
