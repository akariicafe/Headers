@class NSString, NSNumber;

@interface SASource : SADomainObject

@property (copy, nonatomic) NSString *accountIdentifier;
@property (copy, nonatomic) NSString *accountName;
@property (copy, nonatomic) NSString *domainIdentifier;
@property (copy, nonatomic) NSNumber *remote;

+ (id)source;
+ (id)sourceWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
