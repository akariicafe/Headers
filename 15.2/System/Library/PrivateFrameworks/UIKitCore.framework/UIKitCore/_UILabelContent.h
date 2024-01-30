@class NSDictionary;

@interface _UILabelContent : NSObject <NSCopying> {
    NSDictionary *_defaultAttributes;
}

- (id)defaultAttributes;
- (id)attributedString;
- (BOOL)isEqualToAttributedString:(id)a0;
- (BOOL)isEqualToString:(id)a0;
- (BOOL)_isContentEqualToContent:(id)a0;
- (id)widthVariantContentForView:(id)a0;
- (id)string;
- (long long)length;
- (id)contentByCompletingDefaultAttributesWithAttributes:(id)a0;
- (id)description;
- (id)defaultValueForAttribute:(id)a0;
- (id)contentWithAttributedString:(id)a0;
- (id)initWithDefaultAttributes:(id)a0;
- (id)backgroundColor;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)isNil;
- (BOOL)isEqualToContent:(id)a0 byAttribute:(id)a1;
- (id)contentByAddingAttribute:(id)a0 toDefaultAttributesWithValue:(id)a1;
- (BOOL)isAttributed;
- (id)contentByAddingAttributesToDefaultAttributes:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)contentByApplyingAttribute:(id)a0 value:(id)a1 toRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (id)paragraphStyle;
- (id)contentWithString:(id)a0;
- (id)font;
- (id)shadow;
- (BOOL)isAttribute:(id)a0 uniformlyEqualToValue:(id)a1;
- (unsigned long long)hash;
- (id)textColor;
- (id)attributedStringContent;
- (long long)differenceVersusContent:(id)a0;
- (id)contentByApplyingAttributeToEntireRange:(id)a0 value:(id)a1;
- (id)contentWithDefaultAttributes:(id)a0;
- (BOOL)isWidthVariant;

@end
