@interface MDMUserParser : MDMParser

- (id)_allCommands;
- (id)_profileList:(id)a0;
- (id)_installProfile:(id)a0 accessRights:(int)a1;
- (id)_removeProfile:(id)a0;
- (id)_restrictions:(id)a0;
- (id)_allowedDeviceQueriesForAccessRights:(int)a0;
- (void)_performQuery:(id)a0 withResultDictionary:(id)a1;
- (void)_sendAnalyticsMDMCommandEventWithRequest:(id)a0 response:(id)a1;

@end
