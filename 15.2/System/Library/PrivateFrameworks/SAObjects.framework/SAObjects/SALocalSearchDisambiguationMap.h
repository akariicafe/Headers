@class NSArray;

@interface SALocalSearchDisambiguationMap : SAUISnippet

@property (copy, nonatomic) NSArray *items;

+ (id)disambiguationMap;
+ (id)disambiguationMapWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
