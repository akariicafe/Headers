@class NSArray;

@interface SAWeatherLocationSnippet : SAUISnippet

@property (copy, nonatomic) NSArray *weatherLocations;

+ (id)locationSnippet;
+ (id)locationSnippetWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
