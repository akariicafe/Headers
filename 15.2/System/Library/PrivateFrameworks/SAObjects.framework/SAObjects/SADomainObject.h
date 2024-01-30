@class NSURL, NSString;

@interface SADomainObject : SABaseAceObject <SAAceIdentifiable>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSURL *identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)domainObject;
+ (id)domainObjectWithDictionary:(id)a0 context:(id)a1;

@end
