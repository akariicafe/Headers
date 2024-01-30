@class NSMutableAttributedString;

@interface NSMutableStringProxyForMutableAttributedString : NSMutableString {
    NSMutableAttributedString *mutableAttributedString;
}

- (unsigned long long)length;
- (void)dealloc;
- (void)replaceCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 withString:(id)a1;
- (void)getCharacters:(unsigned short *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (unsigned short)characterAtIndex:(unsigned long long)a0;
- (id)initWithMutableAttributedString:(id)a0;

@end
