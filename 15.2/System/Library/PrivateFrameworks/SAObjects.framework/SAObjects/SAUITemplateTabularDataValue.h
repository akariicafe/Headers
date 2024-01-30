@class NSArray, NSDictionary, SAUITemplateAttributedString, SAUIImageResource;

@interface SAUITemplateTabularDataValue : SAUITemplateBaseItem

@property (retain, nonatomic) SAUITemplateAttributedString *attributedText;
@property (copy, nonatomic) NSDictionary *attributedTexts;
@property (nonatomic) BOOL highlighted;
@property (retain, nonatomic) SAUIImageResource *image;
@property (nonatomic) double imagePointHeight;
@property (nonatomic) double imagePointWidth;
@property (copy, nonatomic) NSArray *themeImages;

+ (id)tabularDataValue;
+ (id)tabularDataValueWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
