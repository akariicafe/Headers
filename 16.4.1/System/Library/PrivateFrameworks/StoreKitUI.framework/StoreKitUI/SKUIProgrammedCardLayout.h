@interface SKUIProgrammedCardLayout : SKUICardLayout

+ (BOOL)allowsViewElement:(id)a0;

- (long long)layoutStyle;
- (id)_fontForButton:(id)a0;
- (id)_fontForLabel:(id)a0;
- (id)_stringLayoutForViewElement:(id)a0 width:(double)a1;
- (id)attributedStringForButton:(id)a0;
- (id)attributedStringForLabel:(id)a0;
- (double)bottomInsetForLastViewElement:(id)a0 width:(double)a1;
- (double)horizontalContentInset;
- (double)topInsetForViewElement:(id)a0 previousViewElement:(id)a1 width:(double)a2;

@end
