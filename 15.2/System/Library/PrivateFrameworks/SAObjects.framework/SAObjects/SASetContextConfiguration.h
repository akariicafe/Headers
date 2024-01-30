@interface SASetContextConfiguration : SABaseClientBoundCommand

@property (nonatomic) long long contextTimeoutSeconds;

+ (id)setContextConfiguration;
+ (id)setContextConfigurationWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;

@end
