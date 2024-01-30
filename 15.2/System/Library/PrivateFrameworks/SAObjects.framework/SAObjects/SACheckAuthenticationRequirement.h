@class NSArray;

@interface SACheckAuthenticationRequirement : SABaseClientBoundCommand

@property (copy, nonatomic) NSArray *restrictionsOnCompanion;

+ (id)checkAuthenticationRequirement;
+ (id)checkAuthenticationRequirementWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (BOOL)mutatingCommand;

@end
