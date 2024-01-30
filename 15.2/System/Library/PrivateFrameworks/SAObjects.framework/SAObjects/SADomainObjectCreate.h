@class SADomainObject, NSString;

@interface SADomainObjectCreate : SADomainCommand <SADomainObjectCommand>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) SADomainObject *object;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)domainObjectCreate;
+ (id)domainObjectCreateWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;

@end
