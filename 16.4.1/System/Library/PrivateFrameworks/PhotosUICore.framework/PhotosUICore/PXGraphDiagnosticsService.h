@interface PXGraphDiagnosticsService : PXDiagnosticsService

+ (id)viewControllerForDetailsOfAsset:(id)a0;

- (id)title;
- (id)_curationDebugStringForDictionary:(id)a0 asset:(id)a1;
- (BOOL)canProvideConsoleDescription;
- (BOOL)canProvideContextualViewController;
- (BOOL)canProvideSettingsViewController;
- (id)contextualViewController;
- (id)saliencyStringForAsset:(id)a0;
- (id)settingsViewController;

@end
