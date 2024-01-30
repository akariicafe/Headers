@interface SASettingGetBluetooth : SASettingGetBool

+ (id)getBluetooth;
+ (id)getBluetoothWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (id)encodedClassName;
- (BOOL)requiresResponse;
- (BOOL)mutatingCommand;

@end
