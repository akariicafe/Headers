@class NSString, NSArray, NSDictionary, TSUFormattingSymbols, TSUDecimalFormatter, TSULocale, NSMutableDictionary;

@interface TSUNumberFormatter : NSObject {
    TSULocale *_locale;
    TSUFormattingSymbols *_formattingSymbols;
    NSArray *_decimalFormatters;
    NSDictionary *_currencyFormatters;
    NSArray *_percentageFormatters;
    NSArray *_scientificFormatters;
    TSUDecimalFormatter *_fractionFormatter;
    NSMutableDictionary *_currencyCodeToSymbolMap;
    NSMutableDictionary *_currencyCodeToHalfWidthSymbolMap;
    NSString *_additionalCurrencyCode;
    NSDictionary *_additionalCurrencyCodeFormatters;
}

+ (void)initialize;
+ (void)unlock;
+ (void)lock;
+ (id)formatString:(id)a0 transformedForNegativeStyle:(unsigned char)a1;
+ (id)defaultFormatStringForValueType:(int)a0 negativeStyle:(unsigned char)a1;
+ (id)formatterForLocale:(id)a0;
+ (id)stringBySubstitutingCharactersCFNumberFormatterDoesntUnderstand:(id)a0;
+ (int)positionOfSymbol:(id)a0 inNumberFormatSubpattern:(id)a1;
+ (void)formatString:(id)a0 replaceOccurencesOfUnescapedString:(id)a1 withString:(id)a2;
+ (int)positionOfMinusSignInNumberFormatSubpattern:(id)a0;
+ (id)defaultFormatStringForValueType:(int)a0;
+ (int)positionOfCurrencySymbolInNumberFormatSubpattern:(id)a0;
+ (id)numberFormatStringSpecialSymbols;
+ (id)formatString:(id)a0 transformedForNegativeStyle:(unsigned char)a1 placeMinusSignAfterRLM:(BOOL)a2;

- (id)initWithLocale:(id)a0;
- (void).cxx_destruct;
- (id)defaultFormatStringForValueType:(int)a0 negativeStyle:(unsigned char)a1;
- (BOOL)decimalFromString:(id)a0 value:(double *)a1 formatString:(id *)a2;
- (BOOL)currencyFromString:(id)a0 additionalCurrencyCode:(id)a1 value:(double *)a2 formatString:(id *)a3 currencyCode:(id *)a4;
- (BOOL)percentageFromString:(id)a0 value:(double *)a1 formatString:(id *)a2;
- (BOOL)scientificFromString:(id)a0 value:(double *)a1 formatString:(id *)a2;
- (BOOL)fractionFromString:(id)a0 value:(double *)a1;
- (id)defaultFormatStringForValueType:(int)a0;
- (void)p_numberPreferencesChanged:(id)a0;
- (id)p_decimalFormatters;
- (BOOL)p_valueFromString:(id)a0 formatters:(id)a1 value:(double *)a2 formatString:(id *)a3;
- (id)p_findCurrencySymbolInString:(id)a0 additionalCurrencyCode:(id)a1 successfullString:(id *)a2 currencyCode:(id *)a3;
- (id)p_currencyFormatters;
- (id)p_createDictionaryOfCurrencyFormattersForCurrencies:(id)a0;
- (id)p_percentageFormatters;
- (id)p_scientificFormatters;

@end
