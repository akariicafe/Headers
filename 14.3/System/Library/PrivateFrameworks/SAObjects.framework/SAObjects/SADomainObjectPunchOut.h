@class SADomainObject;

@interface SADomainObjectPunchOut : SABaseClientBoundCommand

@property (retain, nonatomic) SADomainObject *domainItem;

+ (id)domainObjectPunchOut;
+ (id)domainObjectPunchOutWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (id)encodedClassName;
- (BOOL)requiresResponse;

@end
