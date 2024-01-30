@class NSString, NSMutableDictionary, NSMutableArray;

@interface TSUNumberFormatter : NSObject {
    struct __CFLocale { } *mLocale;
    struct __CFArray { } *mDecimalFormatters;
    struct __CFArray { } *mCurrencyFormatters;
    struct __CFArray { } *mPercentageFormatters;
    struct __CFArray { } *mScientificFormatters;
    struct __CFNumberFormatter { } *mFractionFormatter;
    NSMutableDictionary *mCurrencyCodeToSymbolMap;
    NSMutableDictionary *mCurrencyCodeToHalfWidthSymbolMap;
    NSString *mCurrencyString;
    NSString *mPercentageString;
    NSString *mScientificString;
    NSString *mDecimalString;
    NSString *mPercentSymbol;
    NSMutableArray *mTransformedDecimalStrings;
    NSMutableArray *mTransformedCurrencyStrings;
    NSMutableArray *mTransformedPercentageStrings;
    NSMutableArray *mTransformedScientificStrings;
    struct __CFString { } *mAdditionalCurrencyCode;
    struct __CFArray { } *mAdditionalCurrencyCodeFormatters;
}

+ (void)initialize;
+ (id)currentLocaleCurrencyCode;
+ (id)formatString:(id)a0 transformedForNegativeStyle:(int)a1;
+ (id)defaultFormatStringForValueType:(int)a0 negativeStyle:(int)a1;
+ (id)currencySymbolForCurrencyCode:(id)a0;
+ (id)userVisibleCurrencyCodes;
+ (id)formatterForLocale:(struct __CFLocale { } *)a0;
+ (int)positionOfSymbol:(id)a0 inNumberFormatSubpattern:(id)a1;
+ (void)formatString:(id)a0 replaceOccurencesOfUnescapedString:(id)a1 withString:(id)a2;
+ (int)positionOfMinusSignInNumberFormatSubpattern:(id)a0;
+ (id)displayNameForCurrencyCode:(id)a0;
+ (id)defaultFormatStringForValueType:(int)a0;
+ (int)positionOfCurrencySymbolInNumberFormatSubpattern:(id)a0;
+ (id)availableCurrencyCodes;
+ (unsigned short)defaultDecimalPlacesForCurrencyCode:(id)a0;
+ (id)currentLocaleDecimalSeparator;
+ (id)numberFormatStringSpecialSymbols;
+ (id)localizedPercentSymbol;
+ (id)currentNonCachedLocaleCurrencyCode;
+ (id)currentNonCachedLocaleDecimalSeparator;
+ (id)currentLocaleListSeparator;

- (id)initWithLocale:(struct __CFLocale { } *)a0;
- (void)dealloc;
- (id)currentLocaleCurrencyCode;
- (id)defaultFormatStringForValueType:(int)a0 negativeStyle:(int)a1;
- (id)currencySymbolForCurrencyCode:(id)a0;
- (BOOL)decimalFromString:(struct __CFString { } *)a0 value:(double *)a1 formatString:(const struct __CFString **)a2;
- (BOOL)currencyFromString:(struct __CFString { } *)a0 additionalCurrencyCode:(struct __CFString { } *)a1 value:(double *)a2 formatString:(const struct __CFString **)a3 currencyCode:(const struct __CFString **)a4;
- (BOOL)percentageFromString:(struct __CFString { } *)a0 value:(double *)a1 formatString:(const struct __CFString **)a2;
- (BOOL)scientificFromString:(struct __CFString { } *)a0 value:(double *)a1 formatString:(const struct __CFString **)a2;
- (BOOL)fractionFromString:(struct __CFString { } *)a0 value:(double *)a1;
- (id)displayNameForCurrencyCode:(id)a0;
- (id)defaultFormatStringForValueType:(int)a0;
- (struct __CFArray { } *)p_decimalFormatters;
- (struct __CFArray { } *)p_currencyFormatters;
- (struct __CFArray { } *)p_percentageFormatters;
- (struct __CFArray { } *)p_scientificFormatters;
- (id)halfWidthCurrencySymbolForCurrencyCode:(id)a0;
- (id)localizedPercentSymbol;
- (void)numberPreferencesChanged:(id)a0;
- (BOOL)valueFromString:(struct __CFString { } *)a0 formatters:(struct __CFArray { } *)a1 value:(double *)a2 formatString:(const struct __CFString **)a3 currencyCode:(const struct __CFString **)a4;
- (BOOL)findCurrencySymbolInString:(struct __CFString { } *)a0 additionalCurrencyCode:(struct __CFString { } *)a1 successTSUlString:(const struct __CFString **)a2;

@end
