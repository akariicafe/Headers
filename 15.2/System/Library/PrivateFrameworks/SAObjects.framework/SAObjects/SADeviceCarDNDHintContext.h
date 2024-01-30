@class NSString;

@interface SADeviceCarDNDHintContext : SADomainObject

@property (copy, nonatomic) NSString *utteranceDomainIdentifier;

+ (id)carDNDHintContext;
+ (id)carDNDHintContextWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
