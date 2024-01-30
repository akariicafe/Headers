@class NSDictionary;

@interface _UILabelContent : NSObject <NSCopying> {
    NSDictionary *_defaultAttributes;
}

- (BOOL)isEqualToString:(id)a0;
- (id)attributedString;
- (id)attributedStringContent;
- (id)font;
- (BOOL)isAttribute:(id)a0 uniformlyEqualToValue:(id)a1;
- (id)backgroundColor;
- (id)contentWithString:(id)a0;
- (BOOL)_isContentEqualToContent:(id)a0;
- (id)contentByAddingAttributesToDefaultAttributes:(id)a0;
- (id)paragraphStyle;
- (BOOL)isWidthVariant;
- (long long)differenceVersusContent:(id)a0;
- (id)string;
- (long long)length;
- (id)defaultValueForAttribute:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqualToAttributedString:(id)a0;
- (id)contentByCompletingDefaultAttributesWithAttributes:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)shadow;
- (BOOL)isEqualToContent:(id)a0 byAttribute:(id)a1;
- (BOOL)isAttributed;
- (id)contentWithAttributedString:(id)a0;
- (unsigned long long)hash;
- (id)textColor;
- (id)contentByApplyingAttributeToEntireRange:(id)a0 value:(id)a1;
- (id)defaultAttributes;
- (id)contentByApplyingAttribute:(id)a0 value:(id)a1 toRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (id)description;
- (id)contentWithDefaultAttributes:(id)a0;
- (id)widthVariantContentForView:(id)a0;
- (id)initWithDefaultAttributes:(id)a0;
- (id)contentByAddingAttribute:(id)a0 toDefaultAttributesWithValue:(id)a1;
- (void).cxx_destruct;
- (BOOL)isNil;

@end
