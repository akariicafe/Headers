@interface PUIContactsPrivacyController : PSListController

@property (retain, nonatomic) id controller;

- (void).cxx_destruct;
- (id)specifiers;
- (void)controller:(id)a0 didRefreshInfoForAppsWithBundleIdentifiers:(id)a1;
- (void)setAuthorizationLevel:(id)a0 forSpecifier:(id)a1;
- (id)authorizationLevelForSpecifier:(id)a0;
- (id)createSpecifiers;
- (id)footerSpecifier;
- (id)appsUsingConactsSpecifiers;
- (id)specifierForBundleIdentifier:(id)a0;

@end
