@class NSString;

@interface SAPropertyOverride : SADomainObject

@property (copy, nonatomic) NSString *property;
@property (copy, nonatomic) NSString *value;

+ (id)propertyOverride;
+ (id)propertyOverrideWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
