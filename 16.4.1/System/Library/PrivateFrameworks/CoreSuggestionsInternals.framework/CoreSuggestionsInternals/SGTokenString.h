@interface SGTokenString : NSString {
    unsigned char _isASCII : 1;
    unsigned int _length : 31;
    union { char ascii[0]; unsigned short utf16[0]; } _contents;
}

@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } range;
@property (nonatomic) int confidence;

+ (id)stringWithString:(id)a0;
+ (id)stringWithString:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
+ (id)stringWithString:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 confidence:(int)a2;

- (void)getCharacters:(unsigned short *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (unsigned short)characterAtIndex:(unsigned long long)a0;
- (unsigned long long)fastestEncoding;
- (const char *)_fastCStringContents:(BOOL)a0;
- (unsigned long long)length;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (const char *)UTF8String;
- (const unsigned short *)_fastCharacterContents;
- (id)stringWithNewContents:(id)a0;

@end
