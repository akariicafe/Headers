@class NSString, NSCharacterSet;

@interface NSConcreteScanner : NSScanner {
    NSString *scanString;
    NSCharacterSet *skipSet;
    NSCharacterSet *invertedSkipSet;
    id locale;
    unsigned long long scanLocation;
    struct { unsigned char caseSensitive : 1; unsigned int  : 31; } flags;
}

- (void)setLocale:(id)a0;
- (id)initWithString:(id)a0;
- (BOOL)caseSensitive;
- (BOOL)scanLongLong:(long long *)a0;
- (id)string;
- (id)locale;
- (unsigned long long)scanLocation;
- (BOOL)scanInt:(int *)a0;
- (void)setCaseSensitive:(BOOL)a0;
- (void)setCharactersToBeSkipped:(id)a0;
- (id)_invertedSkipSet;
- (void)dealloc;
- (void)setScanLocation:(unsigned long long)a0;
- (id)charactersToBeSkipped;

@end
