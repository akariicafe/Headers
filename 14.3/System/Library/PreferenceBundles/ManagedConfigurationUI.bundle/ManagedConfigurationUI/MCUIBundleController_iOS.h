@interface MCUIBundleController_iOS : MCUIBundleController

@property (nonatomic) BOOL isOnsiteProfileInstallation;

- (id)initWithParentListController:(id)a0 properties:(id)a1;
- (id)_createOnsiteProfileInstallationSpecifier;
- (id)specifiersWithSpecifier:(id)a0;
- (void)_presentInstallProfileVC;

@end
