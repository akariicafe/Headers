@class NSString;

@interface _UILabelStringContent : _UILabelContent {
    NSString *_string;
    struct { unsigned char isWidthVariant : 1; } _flags;
}

- (BOOL)isEqualToString:(id)a0;
- (long long)length;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isWidthVariant;
- (id)attributedString;
- (BOOL)isAttributed;
- (id)string;
- (BOOL)_isContentEqualToContent:(id)a0;
- (id)initWithString:(id)a0 defaultAttributes:(id)a1;
- (id)attributedStringContent;
- (unsigned long long)hash;
- (id)contentWithString:(id)a0;
- (id)contentWithAttributedString:(id)a0;
- (BOOL)isNil;
- (id)contentByApplyingAttribute:(id)a0 value:(id)a1 toRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (BOOL)isEqualToAttributedString:(id)a0;

@end
