@class NSDictionary, SAUITemplateAttributedString;

@interface SAUITemplateLabel : SAUITemplateBaseItem

@property (copy, nonatomic) NSDictionary *attributedTexts;
@property (retain, nonatomic) SAUITemplateAttributedString *text;

+ (id)label;
+ (id)labelWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
