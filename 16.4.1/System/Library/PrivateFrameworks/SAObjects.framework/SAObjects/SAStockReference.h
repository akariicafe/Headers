@class NSString;

@interface SAStockReference : SADomainObject

@property (copy, nonatomic) NSString *companyName;
@property (copy, nonatomic) NSString *symbol;

+ (id)reference;
+ (id)referenceWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
