@interface SASettingSetBrightness : SASettingSetFloat

+ (id)setBrightness;
+ (id)setBrightnessWithDictionary:(id)a0 context:(id)a1;

- (BOOL)requiresResponse;
- (id)groupIdentifier;
- (id)encodedClassName;
- (BOOL)mutatingCommand;

@end
