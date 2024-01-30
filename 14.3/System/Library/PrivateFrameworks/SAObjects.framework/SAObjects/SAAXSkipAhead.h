@interface SAAXSkipAhead : SADomainCommand

+ (id)skipAhead;
+ (id)skipAheadWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (id)encodedClassName;
- (BOOL)requiresResponse;

@end
