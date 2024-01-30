@class NSString, TSULocale;

@interface TSUDecimalFormatter : NSObject {
    struct TSUDecimalFormatterCore { void /* function */ **x0; void **x1; id x2; long long x3; id x4; id x5; id x6; id x7; id x8; id x9; BOOL x10; BOOL x11; BOOL x12; } *_formatter;
}

@property (retain, nonatomic) NSString *format;
@property (nonatomic) BOOL isLenient;
@property (nonatomic) int minFractionDigits;
@property (nonatomic) int maxFractionDigits;
@property (nonatomic) int minIntegerDigits;
@property (nonatomic) int maxIntegerDigits;
@property (nonatomic) unsigned long long roundingMode;
@property (retain, nonatomic) NSString *minusSign;
@property (retain, nonatomic) NSString *exponentSymbol;
@property (nonatomic) BOOL useGroupingSeparator;
@property (nonatomic) int groupingSize;
@property (readonly, nonatomic) NSString *currencyCode;
@property (readonly, nonatomic) NSString *currencySymbol;
@property (readonly, nonatomic) TSULocale *locale;

+ (id)createHarmonizedDecimalFormatterOfStyle:(long long)a0 locale:(id)a1 formattingSymbols:(id)a2;

- (struct TSUDecimalFormatterCore { void /* function */ **x0; void **x1; id x2; long long x3; id x4; id x5; id x6; id x7; id x8; id x9; BOOL x10; BOOL x11; BOOL x12; } *)formatter;
- (void)dealloc;
- (id)initWithLocale:(id)a0 style:(long long)a1;
- (id)createStringWithNumber:(id)a0;
- (id)createStringWithValue:(double)a0;
- (void)setMinFractionDigits:(int)a0 maxFractionDigits:(int)a1;
- (id)copyFormatterPropertyForKey:(struct __CFString { } *)a0;
- (id)createStringWithDecimal:(const struct TSUDecimal { struct { unsigned long long x0[2]; } x0; } *)a0;
- (BOOL)getValueFromString:(id)a0 rangePtr:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a1 valuePtr:(double *)a2;
- (void)harmonizedSetCurrency:(id)a0 locale:(id)a1;

@end
