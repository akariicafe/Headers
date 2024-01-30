@interface SASettingGetCellularData : SASettingGetBool

+ (id)getCellularData;
+ (id)getCellularDataWithDictionary:(id)a0 context:(id)a1;

- (BOOL)requiresResponse;
- (id)groupIdentifier;
- (id)encodedClassName;
- (BOOL)mutatingCommand;

@end
