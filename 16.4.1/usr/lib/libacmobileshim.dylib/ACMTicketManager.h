@interface ACMTicketManager : ACCTicketManager

- (id)components;
- (id)preferences;
- (id)systemInfo;
- (id)certificateLabelForRealm:(id)a0;
- (id)decodedUserPreferences:(id)a0;
- (struct __SecCertificate { } *)defaultPublicKeyCertificateForRealm:(id)a0;
- (id)defaultPublicKeyVersionForRealm:(id)a0;
- (id)encodedUserPreferences:(id)a0;
- (id)publicKeyVersionForRealm:(id)a0;
- (void)setPublickKeyVersion:(id)a0 label:(id)a1 forRealm:(id)a2;
- (void)setUserPreferences:(id)a0 forToken:(id)a1;
- (void)uninstallPublicKeyForRealm:(id)a0;
- (id)userPreferencesForToken:(id)a0;

@end
