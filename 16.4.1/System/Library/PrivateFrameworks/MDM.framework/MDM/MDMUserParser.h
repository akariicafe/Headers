@interface MDMUserParser : MDMParser

- (id)_originator;
- (id)_removeProfile:(id)a0;
- (id)_allCommands;
- (id)_allSettingsItems;
- (id)_allowedDeviceQueriesForAccessRights:(unsigned long long)a0;
- (id)_declarativeManagement:(id)a0;
- (id)_installProfile:(id)a0 accessRights:(unsigned long long)a1;
- (void)_performQuery:(id)a0 withResultDictionary:(id)a1;
- (id)_profileList:(id)a0;
- (id)_restrictions:(id)a0;
- (void)_sendAnalyticsMDMCommandEventWithRequest:(id)a0 response:(id)a1;

@end
