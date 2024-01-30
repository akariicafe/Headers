@interface SASettingSetBool : SASettingSetValue

@property (nonatomic) BOOL toggle;
@property (nonatomic) BOOL value;

+ (id)setBoolWithDictionary:(id)a0 context:(id)a1;
+ (id)setBool;

- (id)groupIdentifier;
- (id)encodedClassName;
- (BOOL)requiresResponse;
- (BOOL)mutatingCommand;

@end
