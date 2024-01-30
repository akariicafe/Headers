@interface UniqueAnimationKey : NSString {
    unsigned long long _key;
}

- (id)initWithKey:(unsigned long long)a0;
- (unsigned short)characterAtIndex:(unsigned long long)a0;
- (unsigned long long)length;
- (BOOL)getBytes:(void *)a0 maxLength:(unsigned long long)a1 usedLength:(unsigned long long *)a2 encoding:(unsigned long long)a3 options:(unsigned long long)a4 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a5 remainingRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a6;

@end
