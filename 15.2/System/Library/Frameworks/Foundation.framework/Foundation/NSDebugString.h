@class NSString;

@interface NSDebugString : NSString {
    NSString *string;
}

- (void)getCharacters:(unsigned short *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)initWithString:(id)a0;
- (unsigned long long)length;
- (unsigned short)characterAtIndex:(unsigned long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;

@end
