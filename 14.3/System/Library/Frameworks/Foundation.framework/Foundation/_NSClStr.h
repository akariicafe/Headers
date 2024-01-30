@interface _NSClStr : NSString {
    unsigned long long length;
    unsigned short *characters;
}

- (unsigned long long)length;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithUTF8String:(const char *)a0;
- (void)dealloc;
- (id)initWithString:(id)a0;
- (void)getCharacters:(unsigned short *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (const unsigned short *)_fastCharacterContents;
- (id)initWithCharacters:(const unsigned short *)a0 length:(unsigned long long)a1;
- (unsigned short)characterAtIndex:(unsigned long long)a0;

@end
