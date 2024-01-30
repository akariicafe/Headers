@interface SARange : SADomainObject

@property (nonatomic) long long length;
@property (nonatomic) long long start;

+ (id)range;
+ (id)rangeWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
