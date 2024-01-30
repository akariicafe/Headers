@class NSString, NSCharacterSet;

@interface NSScanner : NSObject <NSCopying>

@property (readonly, copy) NSString *string;
@property unsigned long long scanLocation;
@property (copy) NSCharacterSet *charactersToBeSkipped;
@property BOOL caseSensitive;
@property (retain) id locale;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)localizedScannerWithString:(id)a0;
+ (id)scannerWithString:(id)a0;

- (BOOL)scanInt:(int *)a0;
- (id)initWithString:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_invertedSkipSet;
- (BOOL)scanLongLong:(long long *)a0;
- (BOOL)isAtEnd;
- (id)_remainingString;
- (BOOL)_scanDecimal:(unsigned long long)a0 into:(long long *)a1;
- (BOOL)scanCharactersFromSet:(id)a0 intoString:(id *)a1;
- (BOOL)scanDecimal:(struct { unsigned char x0 : 8; unsigned char x1 : 4; unsigned char x2 : 1; unsigned char x3 : 1; unsigned int x4 : 18; unsigned short x5[8]; } *)a0;
- (BOOL)scanDouble:(double *)a0;
- (BOOL)scanFloat:(float *)a0;
- (BOOL)scanHexDouble:(double *)a0;
- (BOOL)scanHexFloat:(float *)a0;
- (BOOL)scanHexInt:(unsigned int *)a0;
- (BOOL)scanHexLongLong:(unsigned long long *)a0;
- (BOOL)scanInteger:(long long *)a0;
- (BOOL)scanString:(id)a0 intoString:(id *)a1;
- (BOOL)scanUnsignedInteger:(unsigned long long *)a0;
- (BOOL)scanUnsignedLongLong:(unsigned long long *)a0;
- (BOOL)scanUpToCharactersFromSet:(id)a0 intoString:(id *)a1;
- (BOOL)scanUpToString:(id)a0 intoString:(id *)a1;

@end
