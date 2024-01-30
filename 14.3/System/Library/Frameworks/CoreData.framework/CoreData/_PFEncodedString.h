@interface _PFEncodedString : _PFAbstractString {
    int _cd_rc;
    unsigned int _length;
    id _sourceData;
}

- (BOOL)isEqualToString:(id)a0;
- (unsigned long long)cStringLength;
- (unsigned long long)length;
- (id)init;
- (const char *)UTF8String;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (oneway void)release;
- (BOOL)_isDeallocating;
- (void)dealloc;
- (BOOL)_tryRetain;
- (void)getCharacters:(unsigned short *)a0;
- (unsigned long long)retainCount;
- (id)copy;
- (void)getCharacters:(unsigned short *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (unsigned long long)hash;
- (id)retain;
- (BOOL)isEqual:(id)a0;
- (BOOL)_isCString;
- (void)getCString:(char *)a0;
- (unsigned short)characterAtIndex:(unsigned long long)a0;

@end
