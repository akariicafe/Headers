@interface SASettingGetBluetooth : SASettingGetBool

+ (id)getBluetooth;
+ (id)getBluetoothWithDictionary:(id)a0 context:(id)a1;

- (BOOL)requiresResponse;
- (id)groupIdentifier;
- (id)encodedClassName;
- (BOOL)mutatingCommand;

@end
