@class NSString;

@interface _UILabelStringContent : _UILabelContent {
    NSString *_string;
    struct { unsigned char isWidthVariant : 1; } _flags;
}

- (BOOL)isEqualToString:(id)a0;
- (id)attributedString;
- (id)attributedStringContent;
- (id)contentWithString:(id)a0;
- (BOOL)_isContentEqualToContent:(id)a0;
- (BOOL)isWidthVariant;
- (id)string;
- (long long)length;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithString:(id)a0 defaultAttributes:(id)a1;
- (BOOL)isEqualToAttributedString:(id)a0;
- (BOOL)isAttributed;
- (id)contentWithAttributedString:(id)a0;
- (unsigned long long)hash;
- (id)contentByApplyingAttribute:(id)a0 value:(id)a1 toRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (void).cxx_destruct;
- (BOOL)isNil;

@end
