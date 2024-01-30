@class NSString;

@interface VSCasePreservingString : NSString {
    NSString *_underlyingString;
}

- (void)getCharacters:(unsigned short *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)lowercaseStringWithLocale:(id)a0;
- (id)uppercaseStringWithLocale:(id)a0;
- (id)initWithString:(id)a0;
- (id)capitalizedString;
- (unsigned long long)length;
- (unsigned short)characterAtIndex:(unsigned long long)a0;
- (id)localizedCapitalizedString;
- (id)localizedUppercaseString;
- (id)uppercaseString;
- (id)localizedLowercaseString;
- (id)capitalizedStringWithLocale:(id)a0;
- (void).cxx_destruct;
- (id)lowercaseString;

@end
