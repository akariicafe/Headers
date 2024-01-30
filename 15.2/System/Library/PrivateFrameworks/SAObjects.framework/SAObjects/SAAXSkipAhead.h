@interface SAAXSkipAhead : SADomainCommand

+ (id)skipAhead;
+ (id)skipAheadWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;

@end
