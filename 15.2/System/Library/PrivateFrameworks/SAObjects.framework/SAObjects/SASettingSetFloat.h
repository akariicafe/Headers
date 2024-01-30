@interface SASettingSetFloat : SASettingSetNumber

@property (nonatomic) float value;

+ (id)setFloat;
+ (id)setFloatWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;

@end
