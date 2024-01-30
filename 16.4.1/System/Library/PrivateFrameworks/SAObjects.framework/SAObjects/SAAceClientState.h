@interface SAAceClientState : SADomainObject

+ (id)aceClientStateWithDictionary:(id)a0 context:(id)a1;
+ (id)aceClientState;
+ (id)deliveryDeadline;
+ (id)persistencePolicy;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
