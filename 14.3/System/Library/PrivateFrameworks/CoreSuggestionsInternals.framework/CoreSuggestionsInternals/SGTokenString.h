@interface SGTokenString : NSString {
    unsigned char _isASCII : 1;
    unsigned int _length : 31;
    union { char ascii[0]; unsigned short utf16[0]; } _contents;
}

@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } range;
@property (nonatomic) int confidence;

+ (id)stringWithString:(id)a0;
+ (id)stringWithString:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 confidence:(int)a2;
+ (id)stringWithString:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;

- (unsigned long long)fastestEncoding;
- (unsigned long long)length;
- (const char *)UTF8String;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)getCharacters:(unsigned short *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (const unsigned short *)_fastCharacterContents;
- (unsigned short)characterAtIndex:(unsigned long long)a0;
- (const char *)_fastCStringContents:(BOOL)a0;
- (id)stringWithNewContents:(id)a0;

@end
