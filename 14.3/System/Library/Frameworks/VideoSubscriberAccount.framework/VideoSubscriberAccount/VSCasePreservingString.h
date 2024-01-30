@class NSString;

@interface VSCasePreservingString : NSString {
    NSString *_underlyingString;
}

- (id)lowercaseStringWithLocale:(id)a0;
- (id)uppercaseStringWithLocale:(id)a0;
- (unsigned long long)length;
- (id)capitalizedString;
- (void).cxx_destruct;
- (id)initWithString:(id)a0;
- (id)uppercaseString;
- (void)getCharacters:(unsigned short *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)capitalizedStringWithLocale:(id)a0;
- (id)lowercaseString;
- (id)localizedUppercaseString;
- (id)localizedLowercaseString;
- (id)localizedCapitalizedString;
- (unsigned short)characterAtIndex:(unsigned long long)a0;

@end
