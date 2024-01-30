@interface SAHandoffAvailabilityCheck : SABaseClientBoundCommand

+ (id)handoffAvailabilityCheck;
+ (id)handoffAvailabilityCheckWithDictionary:(id)a0 context:(id)a1;

- (BOOL)requiresResponse;
- (id)groupIdentifier;
- (id)encodedClassName;

@end
