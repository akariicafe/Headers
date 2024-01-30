@class NSArray;

@interface SAStockDelete : SADomainCommand

@property (copy, nonatomic) NSArray *stocks;

+ (id)delete;
+ (id)deleteWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (id)encodedClassName;
- (BOOL)requiresResponse;

@end
