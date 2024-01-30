@class NSString, NSCharacterSet;

@interface NSConcreteScanner : NSScanner {
    NSString *scanString;
    NSCharacterSet *skipSet;
    NSCharacterSet *invertedSkipSet;
    id locale;
    unsigned long long scanLocation;
    struct { unsigned char caseSensitive : 1; unsigned int  : 31; } flags;
}

- (id)locale;
- (void)setCaseSensitive:(BOOL)a0;
- (BOOL)caseSensitive;
- (void)dealloc;
- (id)initWithString:(id)a0;
- (id)string;
- (void)setLocale:(id)a0;
- (unsigned long long)scanLocation;
- (id)charactersToBeSkipped;
- (id)_invertedSkipSet;
- (BOOL)scanInt:(int *)a0;
- (BOOL)scanLongLong:(long long *)a0;
- (void)setScanLocation:(unsigned long long)a0;
- (void)setCharactersToBeSkipped:(id)a0;

@end
