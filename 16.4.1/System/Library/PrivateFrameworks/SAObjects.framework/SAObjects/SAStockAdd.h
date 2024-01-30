@class NSArray;

@interface SAStockAdd : SADomainCommand

@property (copy, nonatomic) NSArray *stocks;

+ (id)add;
+ (id)addWithDictionary:(id)a0 context:(id)a1;

- (BOOL)requiresResponse;
- (id)groupIdentifier;
- (id)encodedClassName;

@end
