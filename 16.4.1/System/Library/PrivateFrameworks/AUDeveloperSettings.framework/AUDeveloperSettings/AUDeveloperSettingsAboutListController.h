@interface AUDeveloperSettingsAboutListController : PSListController

- (void)viewDidLoad;
- (id)specifiers;
- (id)getModelNumber:(id)a0;
- (id)getActiveVersion:(id)a0;
- (id)getAssetLocation:(id)a0;
- (id)getAssetURLOverride:(id)a0;
- (id)getFusing:(id)a0;
- (id)getSerialNumber:(id)a0;
- (id)isOTADisabled:(id)a0;
- (void)setOTADisableStatus:(id)a0 specifier:(id)a1;

@end
