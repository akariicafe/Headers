@interface NSMutableAttributedString : NSAttributedString

+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (id)mutableString;
- (void)replaceCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 withAttributedString:(id)a1;
- (void)appendAttributedString:(id)a0;
- (void)addAttributes:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)insertAttributedString:(id)a0 atIndex:(unsigned long long)a1;
- (void)addAttribute:(id)a0 value:(id)a1 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (void)removeAttribute:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)setAttributes:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)deleteCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)replaceCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 withString:(id)a1;
- (void)_inflectWithReplacements:(id)a0;
- (void)addAttributesWeakly:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)endEditing;
- (void)setAttributedString:(id)a0;
- (Class)classForCoder;
- (void)beginEditing;

@end
