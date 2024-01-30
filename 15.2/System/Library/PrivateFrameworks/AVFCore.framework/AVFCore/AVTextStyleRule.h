@class NSDictionary, NSString, AVTextStyleRuleInternal;

@interface AVTextStyleRule : NSObject <NSCopying> {
    AVTextStyleRuleInternal *_textStyleRule;
}

@property (readonly, nonatomic) NSDictionary *textMarkupAttributes;
@property (readonly, nonatomic) NSString *textSelector;

+ (id)textStyleRuleWithTextMarkupAttributes:(id)a0 textSelector:(id)a1;
+ (id)textStyleRulesFromPropertyList:(id)a0;
+ (id)textStyleRuleWithTextMarkupAttributes:(id)a0;
+ (id)propertyListForTextStyleRules:(id)a0;

- (id)_dictionaryPlistRepresentation;
- (id)initWithTextMarkupAttributes:(id)a0 textSelector:(id)a1;
- (id)initWithTextMarkupAttributes:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (void)dealloc;

@end
