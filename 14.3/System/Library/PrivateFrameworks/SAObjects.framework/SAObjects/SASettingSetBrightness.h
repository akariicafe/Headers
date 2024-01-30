@interface SASettingSetBrightness : SASettingSetFloat

+ (id)setBrightness;
+ (id)setBrightnessWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (id)encodedClassName;
- (BOOL)requiresResponse;
- (BOOL)mutatingCommand;

@end
