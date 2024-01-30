@class NSArray, NSDictionary;

@interface SARestaurantRestaurantsSnippet : SAUISirilandSnippet

@property (copy, nonatomic) NSArray *attributionOrder;
@property (copy, nonatomic) NSArray *contributingProviderIds;
@property (copy, nonatomic) NSDictionary *providerPunchOutMap;
@property (copy, nonatomic) NSArray *restaurants;

+ (id)restaurantsSnippet;
+ (id)restaurantsSnippetWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
