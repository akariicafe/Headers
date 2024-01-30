@interface _PFEncodedString : _PFAbstractString {
    int _cd_rc;
    unsigned int _length;
    id _sourceData;
}

- (BOOL)isEqualToString:(id)a0;
- (void)getCharacters:(unsigned short *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (unsigned long long)length;
- (unsigned short)characterAtIndex:(unsigned long long)a0;
- (unsigned long long)retainCount;
- (BOOL)_isCString;
- (id)retain;
- (void)getCString:(char *)a0;
- (unsigned long long)cStringLength;
- (BOOL)_isDeallocating;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (const char *)UTF8String;
- (void)getCharacters:(unsigned short *)a0;
- (id)copy;
- (unsigned long long)hash;
- (void)dealloc;
- (BOOL)_tryRetain;
- (oneway void)release;

@end
