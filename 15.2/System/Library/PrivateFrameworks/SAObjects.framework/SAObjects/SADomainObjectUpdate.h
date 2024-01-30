@class SADomainObject, NSString;

@interface SADomainObjectUpdate : SABaseClientBoundCommand <SADomainObjectCommand>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) SADomainObject *addFields;
@property (retain, nonatomic) SADomainObject *identifier;
@property (retain, nonatomic) SADomainObject *removeFields;
@property (retain, nonatomic) SADomainObject *setFields;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)domainObjectUpdate;
+ (id)domainObjectUpdateWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;

@end
