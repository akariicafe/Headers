@interface NFCurrency : NSObject

+ (unsigned long long)decodeBCDAmount:(id)a0;
+ (id)encodeBCDAmount:(unsigned long long)a0;
+ (id)getCurrencyStringCodeFromNumericCode:(unsigned int)a0;
+ (int)getFractionDigitsFromCurrencyStringCode:(id)a0;

@end
