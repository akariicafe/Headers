@interface SASettingGetBluetooth : SASettingGetBool

+ (id)getBluetooth;
+ (id)getBluetoothWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (BOOL)mutatingCommand;

@end
