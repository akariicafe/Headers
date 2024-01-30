@class NSArray;

@interface SALocalSearchDisambiguationMap : SAUISnippet

@property (copy, nonatomic) NSArray *items;

+ (id)disambiguationMap;
+ (id)disambiguationMapWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
