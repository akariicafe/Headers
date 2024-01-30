@class NSArray;

@interface SASettingSnippet : SAUISnippet

@property (copy, nonatomic) NSArray *settingKeys;

+ (id)snippet;
+ (id)snippetWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
