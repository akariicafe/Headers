@interface TSCEUnitRegistry : NSObject

+ (void)initialize;
+ (int)unitForString:(id)a0;
+ (int)unitPrefixForCharacter:(unsigned short)a0;
+ (int)binaryUnitPrefixForChars:(unsigned short)a0 :(unsigned short)a1;
+ (double)multiplierForUnitPrefix:(int)a0;
+ (int)unitForCurrencyCode:(id)a0;
+ (id)currencyCodeForUnit:(int)a0;
+ (int)canonicalUnitForDimension:(int)a0;
+ (struct { int x0; int x1; })prefixedUnitForString:(id)a0;
+ (BOOL)unitIsMetric:(int)a0;
+ (struct TSUDecimal { struct { unsigned long long x0[2]; } x0; })convert:(const struct TSUDecimal { struct { unsigned long long x0[2]; } x0; } *)a0 fromUnit:(struct { int x0; int x1; })a1 toUnit:(struct { int x0; int x1; })a2;
+ (int)dimensionForUnit:(int)a0;

@end
