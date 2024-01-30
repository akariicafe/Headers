@class NSURL, NSString;

@interface SADomainObjectCreateCompleted : SABaseCommand <SAServerBoundCommand, SADomainObjectCommand>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSURL *identifier;
@property (copy, nonatomic) NSString *aceId;
@property (copy, nonatomic) NSString *refId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)domainObjectCreateCompleted;
+ (id)domainObjectCreateCompletedWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;

@end
