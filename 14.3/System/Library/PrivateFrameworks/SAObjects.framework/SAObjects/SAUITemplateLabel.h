@class NSDictionary, SAUITemplateAttributedString;

@interface SAUITemplateLabel : SAUITemplateBaseItem

@property (copy, nonatomic) NSDictionary *attributedTexts;
@property (retain, nonatomic) SAUITemplateAttributedString *text;

+ (id)labelWithDictionary:(id)a0 context:(id)a1;
+ (id)label;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
