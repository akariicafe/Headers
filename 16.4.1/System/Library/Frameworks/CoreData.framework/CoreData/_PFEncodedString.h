@interface _PFEncodedString : _PFAbstractString {
    int _cd_rc;
    unsigned int _length;
    id _sourceData;
}

- (BOOL)isEqualToString:(id)a0;
- (id)retain;
- (void)getCharacters:(unsigned short *)a0;
- (void)getCharacters:(unsigned short *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (unsigned short)characterAtIndex:(unsigned long long)a0;
- (oneway void)release;
- (unsigned long long)cStringLength;
- (BOOL)_tryRetain;
- (unsigned long long)length;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (const char *)UTF8String;
- (unsigned long long)hash;
- (id)copy;
- (void)getCString:(char *)a0;
- (BOOL)_isDeallocating;
- (id)init;
- (BOOL)_isCString;
- (unsigned long long)retainCount;

@end
