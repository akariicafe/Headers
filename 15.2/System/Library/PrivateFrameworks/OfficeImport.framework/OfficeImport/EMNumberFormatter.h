@class NSString;

@interface EMNumberFormatter : NSObject {
    struct __CFNumberFormatter { } *_genericFormatter;
    struct __CFNumberFormatter { } *_doubleFormatter;
    struct __CFNumberFormatter { } *_percentFormatter;
    struct __CFNumberFormatter { } *_bigNumberFormatter;
    struct __CFNumberFormatter { } *_currencyFormatter;
    struct __CFDateFormatter { } *_dateFormatter;
    NSString *_excelFormatString;
    NSString *_baseICUFormatString;
    BOOL _isNegativeRed;
    BOOL _hasLocales;
    int _formatType;
}

+ (id)formatterForFormat:(id)a0;

- (struct __CFNumberFormatter { } *)_currencyFormatter;
- (struct __CFDateFormatter { } *)_dateFormatter;
- (void).cxx_destruct;
- (int)formatType;
- (void)dealloc;
- (id)formatPhoneNumber:(double)a0;
- (struct __CFNumberFormatter { } *)_percentFormatter;
- (id)formatDefault:(double)a0;
- (unsigned long long)optimalNumberOfDigitsForValue:(double)a0;
- (BOOL)useBigNumberFormatterForValue:(double)a0;
- (id)formatDefault:(double)a0 showingNumberOfDigits:(unsigned long long)a1;
- (BOOL)isNegativeRed;
- (id)formatValue:(double)a0 inWorkbook:(id)a1;
- (id)formatPercent:(double)a0;
- (id)formatDate:(id)a0;
- (id)initWithExcelFormatString:(id)a0;
- (id)initForGeneralFormatting;
- (void)_parseExcelFormatString:(id)a0;
- (id)convertedGenericNumberFormatWithFormat:(id)a0;
- (id)_icuFormatStringForDateFormat;
- (id)_icuFormatStringForCurrencyFormat;
- (void)convertGenericNumberFormat:(id)a0;
- (struct __CFNumberFormatter { } *)_doubleFormatter;
- (struct __CFNumberFormatter { } *)_bigNumberFormatter;
- (struct __CFNumberFormatter { } *)_genericFormatterForNumberOfSignificantDigits:(unsigned long long)a0;
- (id)formatCurrency:(double)a0;
- (id)formatFraction:(double)a0;
- (id)formatDoubleValue:(double)a0;

@end
