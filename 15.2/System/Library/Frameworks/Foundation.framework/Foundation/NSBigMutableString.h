@class NSData;

@interface NSBigMutableString : NSMutableString {
    struct { unsigned char isStorage : 1; unsigned char isUnicode : 1; unsigned char hasBOM : 1; unsigned char swap : 1; unsigned char immutable : 1; unsigned int  : 27; } flags;
    unsigned long long length;
    union { struct { NSData *data; char *dataBytes; } d; struct { struct __CFStorage *storage; } s; } contents;
}

- (void)getCharacters:(unsigned short *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)initWithString:(id)a0;
- (id)_newSmallImmutableSubstringWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 zone:(struct _NSZone { } *)a1;
- (id)_newSubstringWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 zone:(struct _NSZone { } *)a1;
- (unsigned long long)length;
- (unsigned short)characterAtIndex:(unsigned long long)a0;
- (BOOL)_isCString;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)initWithStorage:(struct __CFStorage { } *)a0 length:(unsigned long long)a1 isUnicode:(BOOL)a2;
- (void)replaceCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 withString:(id)a1;
- (id)_createSubstringWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (BOOL)_getData:(id *)a0 encoding:(unsigned long long *)a1;
- (BOOL)_setData:(id)a0 encoding:(unsigned long long)a1;
- (BOOL)_isMarkedAsImmutable;
- (BOOL)_copyDataFrom:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)_newBigSubstringWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 wantsMutable:(BOOL)a1 zone:(struct _NSZone { } *)a2;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)_copyStorage:(struct __CFStorage **)a0 encoding:(unsigned long long *)a1;
- (void)dealloc;
- (void)_markAsImmutable;
- (BOOL)_setStorage:(struct __CFStorage { } *)a0 encoding:(unsigned long long)a1;
- (void)_checkForInvalidMutationWithSelector:(SEL)a0;

@end
