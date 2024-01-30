@interface _PFResultUniString : _PFResultString {
    unsigned int _length;
}

+ (void)initialize;
+ (struct __CFAllocator { } *)cfDeallocator;
+ (unsigned long long)bufferOffset;

- (BOOL)isEqualToString:(id)a0;
- (unsigned long long)cStringLength;
- (unsigned long long)length;
- (const char *)UTF8String;
- (void)getCharacters:(unsigned short *)a0;
- (void)getCharacters:(unsigned short *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (BOOL)_isCString;
- (void)getCString:(char *)a0;
- (unsigned short)characterAtIndex:(unsigned long long)a0;

@end
