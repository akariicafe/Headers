@interface SASettingNumericSnippet : SASettingSnippet

@property (nonatomic) BOOL increment;

+ (id)numericSnippet;
+ (id)numericSnippetWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
