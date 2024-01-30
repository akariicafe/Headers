@interface SASettingGetAssistiveTouch : SASettingGetBool

+ (id)getAssistiveTouch;
+ (id)getAssistiveTouchWithDictionary:(id)a0 context:(id)a1;

- (BOOL)requiresResponse;
- (id)groupIdentifier;
- (id)encodedClassName;
- (BOOL)mutatingCommand;

@end
