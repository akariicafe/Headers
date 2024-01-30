@interface _HKTieredDecimalPrecisionPercentageFormatter : _HKTieredDecimalPrecisionNumberFormatter

+ (id)sharedInstance;

- (unsigned long long)style;
- (BOOL)returnsUnitWithValueForDisplay;
- (id)stringFromNumber:(id)a0 displayType:(id)a1 unitController:(id)a2;

@end
