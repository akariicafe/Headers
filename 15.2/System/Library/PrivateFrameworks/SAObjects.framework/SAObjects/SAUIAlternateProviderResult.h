@class NSArray, NSString, NSNumber, SAUIImageResource;

@interface SAUIAlternateProviderResult : SADomainObject

@property (copy, nonatomic) NSArray *commands;
@property (copy, nonatomic) NSNumber *numberOfResults;
@property (retain, nonatomic) SAUIImageResource *providerImage;
@property (copy, nonatomic) NSString *providerName;

+ (id)alternateProviderResult;
+ (id)alternateProviderResultWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
