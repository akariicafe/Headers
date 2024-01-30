@interface MCUIMCSpecifierProvider : MCUISpecifierProvider

- (id)specifiers;
- (void)_presentViewController:(id)a0;
- (void)_loadAppSignerFromSpecifier:(id)a0;
- (void)_presentModalNavController:(id)a0;
- (void)_selectInstalledPhoneProfileIdentifier:(id)a0;
- (void)_selectUninstalledPhoneProfileIdentifier:(id)a0;
- (BOOL)_showProfileDetailPageForUserEnrollmentProfile:(id)a0;
- (id)_specifierForAppSigner:(id)a0;
- (id)_specifierForBlockedApp:(id)a0;
- (void)loadProfileFromSpecifier:(id)a0;

@end
