@class NSAttributedString;

@interface _UILabelAttributedStringContent : _UILabelContent {
    NSAttributedString *_attributedString;
}

- (id)attributedString;
- (BOOL)isEqualToAttributedString:(id)a0;
- (BOOL)isEqualToString:(id)a0;
- (BOOL)_isContentEqualToContent:(id)a0;
- (id)string;
- (long long)length;
- (id)defaultValueForAttribute:(id)a0;
- (id)contentWithAttributedString:(id)a0;
- (id)initWithAttributedString:(id)a0 defaultAttributes:(id)a1;
- (void).cxx_destruct;
- (BOOL)isNil;
- (BOOL)isEqualToContent:(id)a0 byAttribute:(id)a1;
- (BOOL)isAttributed;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)contentByApplyingAttribute:(id)a0 value:(id)a1 toRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (id)contentWithString:(id)a0;
- (BOOL)isAttribute:(id)a0 uniformlyEqualToValue:(id)a1;
- (unsigned long long)hash;
- (id)attributedStringContent;
- (BOOL)isWidthVariant;

@end
