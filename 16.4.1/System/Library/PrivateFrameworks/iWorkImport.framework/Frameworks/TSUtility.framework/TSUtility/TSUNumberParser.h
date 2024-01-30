@interface TSUNumberParser : NSObject

+ (BOOL)numberValueFromString:(id)a0 locale:(id)a1 outDoubleValue:(double *)a2;
+ (BOOL)numberValueFromString:(id)a0 locale:(id)a1 outDecimalValue:(struct TSUDecimal { struct { unsigned long long x0[2]; } x0; } *)a2;
+ (BOOL)numberValueFromString:(id)a0 locale:(id)a1 outDecimalValue:(struct TSUDecimal { struct { unsigned long long x0[2]; } x0; } *)a2 outValueType:(int *)a3 outCurrencyCode:(id *)a4;
+ (BOOL)numberValueFromString:(id)a0 locale:(id)a1 outDoubleValue:(double *)a2 outValueType:(int *)a3;
+ (BOOL)numberValueFromString:(id)a0 locale:(id)a1 outDecimalValue:(struct TSUDecimal { struct { unsigned long long x0[2]; } x0; } *)a2 outValueType:(int *)a3;
+ (BOOL)numberValueFromString:(id)a0 locale:(id)a1 outDoubleValue:(double *)a2 outValueType:(int *)a3 outCurrencyCode:(id *)a4;

@end
