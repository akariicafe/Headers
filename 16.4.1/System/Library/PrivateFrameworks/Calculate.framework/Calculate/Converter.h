@class NSString, NSNumber, NSArray;

@interface Converter : NSObject

@property (retain, nonatomic) NSString *inputString;
@property (retain, nonatomic) NSString *inputUnit;
@property (retain, nonatomic) NSString *outputUnit;
@property (retain, nonatomic) NSNumber *inputValue;
@property (retain, nonatomic) NSNumber *outputValue;
@property (retain, nonatomic) NSString *localizedInputValueAndUnit;
@property (retain, nonatomic) NSString *localizedOutputValueAndUnit;
@property (retain, nonatomic) NSString *localizedOutputValue;
@property (retain, nonatomic) NSString *localizedOutputUnit;
@property (retain, nonatomic) NSString *conversionType;
@property (retain, nonatomic) NSArray *additionalResults;
@property float currencyUpdateTimeOut;
@property (readonly) BOOL isCurrency;

+ (void)initialize;
+ (id)dispatchQueue;
+ (BOOL)needsRefresh;
+ (id)currencyCacheLastRefreshDate;
+ (BOOL)refreshCurrencyCache;
+ (BOOL)refreshCurrencyCacheIfNeeded;

- (id)initWithInput:(id)a0;
- (void).cxx_destruct;
- (void)_standardizeInputAndOutputUnits;
- (id)_calculate:(id)a0;
- (double)_doubleWithoutUnrelevantDecimalsForNumber:(id)a0;
- (id)_localizedPluralizedStringsforNumber:(id)a0 unit:(id)a1;
- (id)_normalizedUnitNamesForName:(id)a0;
- (id)_operateConversionForOutputUnit:(id)a0;
- (BOOL)_parseInputQuery;
- (void)_performUnitPluralization;
- (id)_safe_subStringOf:(id)a0 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)_unitInfoForNormalizedName:(id)a0;
- (void)_updateInputValueFromMatch:(id)a0;
- (void)processConversionWithCompletion:(id /* block */)a0;
- (id)similarUnitsForNormalizedName:(id)a0;

@end
