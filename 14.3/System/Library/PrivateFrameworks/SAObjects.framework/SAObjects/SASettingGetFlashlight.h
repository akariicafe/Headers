@interface SASettingGetFlashlight : SASettingGetBool

+ (id)getFlashlight;
+ (id)getFlashlightWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (id)encodedClassName;
- (BOOL)requiresResponse;
- (BOOL)mutatingCommand;

@end
