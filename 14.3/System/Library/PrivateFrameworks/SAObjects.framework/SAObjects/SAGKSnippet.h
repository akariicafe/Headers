@class SAUIAppPunchOut, NSArray;

@interface SAGKSnippet : SAUISnippet

@property (retain, nonatomic) SAUIAppPunchOut *appPunchOut;
@property (copy, nonatomic) NSArray *pods;

+ (id)snippetWithDictionary:(id)a0 context:(id)a1;
+ (id)snippet;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
