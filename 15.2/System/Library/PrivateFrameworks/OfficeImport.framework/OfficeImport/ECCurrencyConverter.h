@class NSMutableDictionary;

@interface ECCurrencyConverter : NSObject {
    NSMutableDictionary *mXlToLassoCurrencyCode;
    NSMutableDictionary *mLassoToXlCurrencyCode;
    NSMutableDictionary *mXlAccountingFormat;
    NSMutableDictionary *mXlToLassoCurrencyCodeBySymbol;
}

+ (id)currencyConverter;

- (void).cxx_destruct;
- (void)populateDictionaries;
- (id)lassoCurrencyCodeForDollar;
- (id)lassoCurrencyCodeFromXl:(id)a0;
- (id)xlCurrencyCodeFromLasso:(id)a0;
- (int)xlAccountFormatFromLasso:(id)a0;

@end
