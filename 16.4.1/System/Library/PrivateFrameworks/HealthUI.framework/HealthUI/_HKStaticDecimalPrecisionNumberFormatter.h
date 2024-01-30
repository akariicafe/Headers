@class NSString;

@interface _HKStaticDecimalPrecisionNumberFormatter : NSObject <HKNumberFormatter>

@property (nonatomic) long long decimalPrecision;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)formatterWithDecimalPrecision:(long long)a0;

- (BOOL)returnsUnitWithValueForDisplay;
- (id)stringFromNumber:(id)a0 displayType:(id)a1 unitController:(id)a2;

@end
