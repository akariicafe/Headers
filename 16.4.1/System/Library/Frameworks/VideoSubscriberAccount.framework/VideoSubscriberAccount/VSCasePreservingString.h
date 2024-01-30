@class NSString;

@interface VSCasePreservingString : NSString {
    NSString *_underlyingString;
}

- (void)getCharacters:(unsigned short *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (unsigned short)characterAtIndex:(unsigned long long)a0;
- (id)lowercaseString;
- (id)initWithString:(id)a0;
- (unsigned long long)length;
- (id)uppercaseString;
- (void).cxx_destruct;
- (id)capitalizedString;
- (id)capitalizedStringWithLocale:(id)a0;
- (id)localizedCapitalizedString;
- (id)localizedLowercaseString;
- (id)localizedUppercaseString;
- (id)lowercaseStringWithLocale:(id)a0;
- (id)uppercaseStringWithLocale:(id)a0;

@end
