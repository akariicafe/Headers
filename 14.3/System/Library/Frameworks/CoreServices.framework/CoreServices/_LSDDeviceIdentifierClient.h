@interface _LSDDeviceIdentifierClient : _LSDClient <_LSDDeviceIdentifierProtocol>

- (BOOL)hasUninstallEntitlement;
- (void)generateIdentifiersWithVendorName:(id)a0 bundleIdentifier:(id)a1;
- (void)getIdentifierOfType:(long long)a0 vendorName:(id)a1 bundleIdentifier:(id)a2 completionHandler:(id /* block */)a3;
- (BOOL)canAccessAdvertisingIdentifier;
- (void)clearAllIdentifiersOfType:(long long)a0;
- (BOOL)hasEntitlementToClearAllIdentifiersOfType:(long long)a0;
- (void)getIdentifierOfType:(long long)a0 completionHandler:(id /* block */)a1;
- (void)clearIdentifiersForUninstallationWithVendorName:(id)a0 bundleIdentifier:(id)a1;
- (unsigned int)findAppBundleForExecutableURL:(id)a0 withContext:(struct LSContext { id x0; } *)a1;
- (void)getClientProcessVendorNameBundleIdentifierAndRestrictedIDAccessWithType:(long long)a0 completionHandler:(id /* block */)a1;

@end
