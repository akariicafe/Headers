@interface SASettingGetCellularData : SASettingGetBool

+ (id)getCellularData;
+ (id)getCellularDataWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (id)encodedClassName;
- (BOOL)requiresResponse;
- (BOOL)mutatingCommand;

@end
