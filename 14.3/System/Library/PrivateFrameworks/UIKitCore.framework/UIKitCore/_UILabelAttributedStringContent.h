@class NSAttributedString;

@interface _UILabelAttributedStringContent : _UILabelContent {
    NSAttributedString *_attributedString;
}

- (BOOL)isEqualToString:(id)a0;
- (id)initWithAttributedString:(id)a0 defaultAttributes:(id)a1;
- (long long)length;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isWidthVariant;
- (id)attributedString;
- (BOOL)isAttributed;
- (BOOL)isAttribute:(id)a0 uniformlyEqualToValue:(id)a1;
- (id)string;
- (BOOL)_isContentEqualToContent:(id)a0;
- (id)attributedStringContent;
- (unsigned long long)hash;
- (id)contentWithString:(id)a0;
- (id)contentWithAttributedString:(id)a0;
- (BOOL)isNil;
- (id)contentByApplyingAttribute:(id)a0 value:(id)a1 toRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (id)defaultValueForAttribute:(id)a0;
- (BOOL)isEqualToAttributedString:(id)a0;
- (BOOL)isEqualToContent:(id)a0 byAttribute:(id)a1;

@end
