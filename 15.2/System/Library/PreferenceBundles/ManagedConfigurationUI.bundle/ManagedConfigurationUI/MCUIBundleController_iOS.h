@interface MCUIBundleController_iOS : MCUIBundleController

@property (nonatomic) BOOL isOnsiteProfileInstallation;

- (id)specifiersWithSpecifier:(id)a0;
- (id)initWithParentListController:(id)a0 properties:(id)a1;
- (void)_presentInstallProfileVC;
- (id)_createOnsiteProfileInstallationSpecifier;

@end
