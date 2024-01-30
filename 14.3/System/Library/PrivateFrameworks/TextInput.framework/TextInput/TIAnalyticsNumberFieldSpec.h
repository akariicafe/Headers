@class NSNumber;

@interface TIAnalyticsNumberFieldSpec : TIAnalyticsFieldSpec

@property (readonly, nonatomic) BOOL isInteger;
@property (readonly, nonatomic) NSNumber *minValue;
@property (readonly, nonatomic) NSNumber *maxValue;
@property (readonly, nonatomic) NSNumber *significantDigits;

- (void).cxx_destruct;
- (id)initWithName:(id)a0 isInteger:(BOOL)a1 minValue:(id)a2 maxValue:(id)a3 significantDigits:(id)a4;
- (BOOL)validate:(id)a0 error:(id *)a1;

@end
