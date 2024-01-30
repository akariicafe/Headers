@class NSAttributedString;

@interface _UILabelAttributedStringContent : _UILabelContent {
    NSAttributedString *_attributedString;
}

- (BOOL)isEqualToString:(id)a0;
- (id)attributedString;
- (id)attributedStringContent;
- (BOOL)isAttribute:(id)a0 uniformlyEqualToValue:(id)a1;
- (id)contentWithString:(id)a0;
- (BOOL)_isContentEqualToContent:(id)a0;
- (BOOL)isWidthVariant;
- (id)string;
- (long long)length;
- (id)defaultValueForAttribute:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqualToAttributedString:(id)a0;
- (BOOL)isEqualToContent:(id)a0 byAttribute:(id)a1;
- (BOOL)isAttributed;
- (id)contentWithAttributedString:(id)a0;
- (unsigned long long)hash;
- (id)contentByApplyingAttribute:(id)a0 value:(id)a1 toRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (id)initWithAttributedString:(id)a0 defaultAttributes:(id)a1;
- (void).cxx_destruct;
- (BOOL)isNil;

@end
