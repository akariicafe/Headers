@interface SASettingNumericSnippet : SASettingSnippet

@property (nonatomic) BOOL increment;

+ (id)numericSnippet;
+ (id)numericSnippetWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
