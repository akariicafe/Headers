@class SADomainObject;

@interface SAAcknowledgeAlert : SABaseClientBoundCommand

@property (retain, nonatomic) SADomainObject *object;

+ (id)acknowledgeAlertWithDictionary:(id)a0 context:(id)a1;
+ (id)acknowledgeAlert;

- (BOOL)requiresResponse;
- (id)groupIdentifier;
- (id)encodedClassName;

@end
