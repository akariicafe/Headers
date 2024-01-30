@interface SAClientSetupInfo : SABaseClientBoundCommand

@property (nonatomic) BOOL delay;
@property (nonatomic) double threshold;

+ (id)clientSetupInfo;
+ (id)clientSetupInfoWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (BOOL)mutatingCommand;

@end
