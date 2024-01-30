@interface _PFResultUniString : _PFResultString {
    unsigned int _length;
}

+ (void)initialize;
+ (unsigned long long)bufferOffset;
+ (struct __CFAllocator { } *)cfDeallocator;

- (BOOL)isEqualToString:(id)a0;
- (void)getCharacters:(unsigned short *)a0;
- (void)getCharacters:(unsigned short *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (unsigned short)characterAtIndex:(unsigned long long)a0;
- (unsigned long long)cStringLength;
- (unsigned long long)length;
- (BOOL)isEqual:(id)a0;
- (const char *)UTF8String;
- (unsigned long long)hash;
- (void)getCString:(char *)a0;
- (BOOL)_isCString;

@end
