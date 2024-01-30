@class SADomainObject, NSString;

@interface SADomainObjectCommit : SABaseClientBoundCommand <SADomainObjectCommand>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) SADomainObject *identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)domainObjectCommit;
+ (id)domainObjectCommitWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;

@end
