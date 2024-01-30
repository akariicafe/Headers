@interface SASettingGetNoiseManagement : SASettingGetValue

+ (id)getNoiseManagement;
+ (id)getNoiseManagementWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (id)encodedClassName;
- (BOOL)requiresResponse;
- (BOOL)mutatingCommand;

@end
