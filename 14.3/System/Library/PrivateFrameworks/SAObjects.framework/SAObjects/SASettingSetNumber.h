@interface SASettingSetNumber : SASettingSetValue

@property (nonatomic) BOOL increment;

+ (id)setNumber;
+ (id)setNumberWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (id)encodedClassName;
- (BOOL)requiresResponse;

@end
