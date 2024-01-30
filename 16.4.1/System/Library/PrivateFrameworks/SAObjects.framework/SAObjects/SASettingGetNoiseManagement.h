@interface SASettingGetNoiseManagement : SASettingGetValue

+ (id)getNoiseManagement;
+ (id)getNoiseManagementWithDictionary:(id)a0 context:(id)a1;

- (BOOL)requiresResponse;
- (id)groupIdentifier;
- (id)encodedClassName;
- (BOOL)mutatingCommand;

@end
