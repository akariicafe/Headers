@class NSString;

@interface _UILabelStringContent : _UILabelContent {
    NSString *_string;
    struct { unsigned char isWidthVariant : 1; } _flags;
}

- (id)attributedString;
- (BOOL)isEqualToAttributedString:(id)a0;
- (BOOL)isEqualToString:(id)a0;
- (BOOL)_isContentEqualToContent:(id)a0;
- (id)string;
- (long long)length;
- (id)contentWithAttributedString:(id)a0;
- (void).cxx_destruct;
- (BOOL)isNil;
- (BOOL)isAttributed;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)contentByApplyingAttribute:(id)a0 value:(id)a1 toRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (id)contentWithString:(id)a0;
- (unsigned long long)hash;
- (id)attributedStringContent;
- (id)initWithString:(id)a0 defaultAttributes:(id)a1;
- (BOOL)isWidthVariant;

@end
