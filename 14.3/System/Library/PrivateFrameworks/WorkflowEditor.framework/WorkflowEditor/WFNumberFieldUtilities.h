@interface WFNumberFieldUtilities : NSObject

+ (id)decimalSymbol;
+ (void)negateTextInput:(id)a0;
+ (BOOL)shouldChangeText:(id)a0 allowMinus:(BOOL)a1;
+ (id)stringBySanitizingNumberString:(id)a0 allowDecimalNumbers:(BOOL)a1;
+ (unsigned long long)numberOfOccurrencesOfString:(id)a0 inString:(id)a1;

@end
