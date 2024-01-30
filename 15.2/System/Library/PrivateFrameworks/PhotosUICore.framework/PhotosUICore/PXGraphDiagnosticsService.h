@interface PXGraphDiagnosticsService : PXDiagnosticsService

+ (id)viewControllerForDetailsOfAsset:(id)a0;

- (id)title;
- (BOOL)canProvideConsoleDescription;
- (BOOL)canProvideContextualViewController;
- (BOOL)canProvideSettingsViewController;
- (id)settingsViewController;
- (id)contextualViewController;
- (id)saliencyStringForAsset:(id)a0;
- (id)_curationDebugStringForDictionary:(id)a0 asset:(id)a1;

@end
