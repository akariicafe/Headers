@class NSString, NSCharacterSet;

@interface NSConcreteScanner : NSScanner {
    NSString *scanString;
    NSCharacterSet *skipSet;
    NSCharacterSet *invertedSkipSet;
    id locale;
    unsigned long long scanLocation;
    struct { unsigned char caseSensitive : 1; unsigned int  : 31; } flags;
}

- (BOOL)scanInt:(int *)a0;
- (void)setLocale:(id)a0;
- (id)initWithString:(id)a0;
- (id)string;
- (void)setCaseSensitive:(BOOL)a0;
- (unsigned long long)scanLocation;
- (void)dealloc;
- (id)charactersToBeSkipped;
- (void)setScanLocation:(unsigned long long)a0;
- (void)setCharactersToBeSkipped:(id)a0;
- (BOOL)caseSensitive;
- (id)_invertedSkipSet;
- (BOOL)scanLongLong:(long long *)a0;
- (id)locale;

@end
