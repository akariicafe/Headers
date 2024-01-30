@class NSCharacterSet;

@interface APFormatter : NSFormatter {
    NSCharacterSet *_characterSet;
    NSCharacterSet *_invertedCharacterSet;
}

@property (nonatomic) unsigned long long maxLength;

+ (id)hexSet;
+ (id)formatterForBSFormatter:(int)a0 withMaxLen:(long long)a1;
+ (id)hexFormatter:(unsigned long long)a0;
+ (id)numberOnlyFormatter:(unsigned long long)a0;
+ (id)sharedIPFormatter;
+ (id)sharedIPv6Formatter;
+ (id)ipOctetFormatter:(unsigned long long)a0;
+ (id)sharedIPv4PrefixFormatter;
+ (id)sharedPhoneNumberFormatter;
+ (id)portRangeFormatter:(unsigned long long)a0;
+ (id)romanSet;
+ (id)ipv4AddressSet;
+ (id)ipv6AddressSet;
+ (id)ipv4AddressWithPrefixSet;
+ (id)multipleIpAddressesSet;
+ (id)portRangeSet;
+ (id)phoneNumberSet;
+ (id)asciiSet;
+ (id)romanFormatter:(unsigned long long)a0;
+ (id)ipFormatter:(unsigned long long)a0;
+ (id)sharedMultipleIPFormatter;
+ (id)multipleIPFormatter:(unsigned long long)a0;
+ (id)maxLengthFormatter:(unsigned long long)a0;
+ (id)nonZeroNumberOnly:(unsigned long long)a0;
+ (id)phoneNumberFormatter:(unsigned long long)a0;
+ (id)asciiFormatter:(unsigned long long)a0;
+ (id)pogoPasswordSet;

- (id)stringForObjectValue:(id)a0;
- (BOOL)isPartialStringValid:(id)a0 newEditingString:(id *)a1 errorDescription:(id *)a2;
- (id)characterSet;
- (void)setCharacterSet:(id)a0;
- (BOOL)isPartialStringValid:(id *)a0 proposedSelectedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a1 originalString:(id)a2 originalSelectedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3 errorDescription:(id *)a4;
- (void)dealloc;
- (BOOL)getObjectValue:(id *)a0 forString:(id)a1 errorDescription:(id *)a2;
- (id)initWithCharacterSet:(id)a0 withMaxLength:(unsigned long long)a1;
- (void)setInvertedCharacterSet:(id)a0;
- (id)invertedCharacterSet;
- (id)initWithMaxLength:(unsigned long long)a0;
- (id)initWithStringOfValidCharacters:(id)a0 withMaxLength:(unsigned long long)a1;

@end
