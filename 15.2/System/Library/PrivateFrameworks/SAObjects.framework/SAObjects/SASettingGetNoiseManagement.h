@interface SASettingGetNoiseManagement : SASettingGetValue

+ (id)getNoiseManagement;
+ (id)getNoiseManagementWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (BOOL)mutatingCommand;

@end
