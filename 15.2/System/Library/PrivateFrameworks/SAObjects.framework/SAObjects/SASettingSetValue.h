@interface SASettingSetValue : SASettingCommand

@property (nonatomic) BOOL dryRun;
@property (nonatomic) BOOL failOnSiriDisconnectWarnings;

+ (id)setValue;
+ (id)setValueWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;

@end
