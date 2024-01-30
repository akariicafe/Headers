@interface SAClientSetupInfo : SABaseClientBoundCommand

@property (nonatomic) BOOL delay;
@property (nonatomic) double threshold;

+ (id)clientSetupInfo;
+ (id)clientSetupInfoWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (id)encodedClassName;
- (BOOL)requiresResponse;
- (BOOL)mutatingCommand;

@end
