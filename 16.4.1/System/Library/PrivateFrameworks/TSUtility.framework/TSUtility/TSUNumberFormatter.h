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
+ (id)availableCurrencyCodes;
+ (id)currencySymbolForCurrencyCode:(id)a0;
+ (id)currentLocaleCurrencyCode;
+ (id)currentLocaleDecimalSeparator;
+ (id)currentLocaleListSeparator;
+ (id)currentNonCachedLocaleCurrencyCode;
+ (id)currentNonCachedLocaleDecimalSeparator;
+ (unsigned short)defaultDecimalPlacesForCurrencyCode:(id)a0;
+ (id)defaultFormatStringForValueType:(int)a0;
+ (id)defaultFormatStringForValueType:(int)a0 negativeStyle:(int)a1;
+ (id)displayNameForCurrencyCode:(id)a0;
+ (void)formatString:(id)a0 replaceOccurencesOfUnescapedString:(id)a1 withString:(id)a2;
+ (id)formatString:(id)a0 transformedForNegativeStyle:(int)a1;
+ (id)formatterForLocale:(struct __CFLocale { } *)a0;
+ (id)localizedPercentSymbol;
+ (id)numberFormatStringSpecialSymbols;
+ (int)positionOfCurrencySymbolInNumberFormatSubpattern:(id)a0;
+ (int)positionOfMinusSignInNumberFormatSubpattern:(id)a0;
+ (int)positionOfSymbol:(id)a0 inNumberFormatSubpattern:(id)a1;
+ (id)userVisibleCurrencyCodes;

- (void)dealloc;
- (id)initWithLocale:(struct __CFLocale { } *)a0;
- (BOOL)currencyFromString:(struct __CFString { } *)a0 additionalCurrencyCode:(struct __CFString { } *)a1 value:(double *)a2 formatString:(const struct __CFString **)a3 currencyCode:(const struct __CFString **)a4;
- (id)currencySymbolForCurrencyCode:(id)a0;
- (id)currentLocaleCurrencyCode;
- (BOOL)decimalFromString:(struct __CFString { } *)a0 value:(double *)a1 formatString:(const struct __CFString **)a2;
- (id)defaultFormatStringForValueType:(int)a0;
- (id)defaultFormatStringForValueType:(int)a0 negativeStyle:(int)a1;
- (id)displayNameForCurrencyCode:(id)a0;
- (BOOL)findCurrencySymbolInString:(struct __CFString { } *)a0 additionalCurrencyCode:(struct __CFString { } *)a1 successTSUlString:(const struct __CFString **)a2;
- (BOOL)fractionFromString:(struct __CFString { } *)a0 value:(double *)a1;
- (id)halfWidthCurrencySymbolForCurrencyCode:(id)a0;
- (id)localizedPercentSymbol;
- (void)numberPreferencesChanged:(id)a0;
- (struct __CFArray { } *)p_currencyFormatters;
- (struct __CFArray { } *)p_decimalFormatters;
- (struct __CFArray { } *)p_percentageFormatters;
- (struct __CFArray { } *)p_scientificFormatters;
- (BOOL)percentageFromString:(struct __CFString { } *)a0 value:(double *)a1 formatString:(const struct __CFString **)a2;
- (BOOL)scientificFromString:(struct __CFString { } *)a0 value:(double *)a1 formatString:(const struct __CFString **)a2;
- (BOOL)valueFromString:(struct __CFString { } *)a0 formatters:(struct __CFArray { } *)a1 value:(double *)a2 formatString:(const struct __CFString **)a3 currencyCode:(const struct __CFString **)a4;

@end
