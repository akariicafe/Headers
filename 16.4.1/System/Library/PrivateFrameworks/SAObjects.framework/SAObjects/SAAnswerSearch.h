@class NSString, SALocation, NSArray;

@interface SAAnswerSearch : SADomainCommand

@property (retain, nonatomic) SALocation *address;
@property (copy, nonatomic) NSString *attribute;
@property (copy, nonatomic) NSString *miscQuestion;
@property (copy, nonatomic) NSString *placeAttribute;
@property (copy, nonatomic) NSArray *product;
@property (copy, nonatomic) NSString *timeQuestion;
@property (copy, nonatomic) NSString *verbType;

+ (id)search;
+ (id)searchWithDictionary:(id)a0 context:(id)a1;

- (BOOL)requiresResponse;
- (id)groupIdentifier;
- (id)encodedClassName;

@end
