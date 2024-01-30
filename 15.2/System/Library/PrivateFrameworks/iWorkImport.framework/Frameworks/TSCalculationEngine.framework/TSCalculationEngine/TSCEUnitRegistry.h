@interface TSCEUnitRegistry : NSObject

+ (void)initialize;
+ (unsigned short)unitForString:(id)a0;
+ (unsigned char)unitPrefixForCharacter:(unsigned short)a0;
+ (unsigned char)binaryUnitPrefixForChars:(unsigned short)a0 :(unsigned short)a1;
+ (double)multiplierForUnitPrefix:(unsigned char)a0;
+ (unsigned short)unitForCurrencyCode:(id)a0;
+ (id)currencyCodeForUnit:(unsigned short)a0;
+ (unsigned short)canonicalUnitForDimension:(unsigned char)a0;
+ (struct { unsigned char x0; unsigned short x1; })prefixedUnitForString:(id)a0;
+ (BOOL)unitIsMetric:(unsigned short)a0;
+ (struct TSUDecimal { struct { unsigned long long x0[2]; } x0; })convert:(const struct TSUDecimal { struct { unsigned long long x0[2]; } x0; } *)a0 fromUnit:(struct { unsigned char x0; unsigned short x1; })a1 toUnit:(struct { unsigned char x0; unsigned short x1; })a2;
+ (unsigned char)dimensionForUnit:(unsigned short)a0;

@end
