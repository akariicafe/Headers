@class NSArray;

@interface HDDemoDataBodySampleGenerator : HDDemoDataBaseSampleGenerator

@property (copy, nonatomic) NSArray *boysHeightBirthTo36MonthsGrowthCurve;
@property (copy, nonatomic) NSArray *boysHeight2To20YearsGrowthCurve;
@property (copy, nonatomic) NSArray *boysWeightBirthTo36MonthsGrowthCurve;
@property (copy, nonatomic) NSArray *boysWeight2To20YearsGrowthCurve;
@property (copy, nonatomic) NSArray *girlsHeightBirthTo36MonthsGrowthCurve;
@property (copy, nonatomic) NSArray *girlsHeight2To20YearsGrowthCurve;
@property (copy, nonatomic) NSArray *girlsWeightBirthTo36MonthsGrowthCurve;
@property (copy, nonatomic) NSArray *girlsWeight2To20YearsGrowthCurve;
@property (nonatomic) double nextHeightSampleTime;
@property (nonatomic) double nextWeightSampleTime;
@property (nonatomic) double lastHeightInCm;
@property (nonatomic) double lastWeightInKg;
@property (nonatomic) double weightAdultStartInKg;

+ (BOOL)supportsSecureCoding;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)setupWithDemoDataGenerator:(id)a0;
- (void)generateSamplesForDemoPerson:(id)a0 atTime:(double)a1 sampleDate:(id)a2 objectCollection:(id)a3;
- (id)heightForDemoPerson:(id)a0 atTime:(double)a1;
- (id)weightForDemoPerson:(id)a0 atTime:(double)a1;
- (double)leanBodyMassForDemoPerson:(id)a0 weight:(double)a1;
- (double)bodyFatPercentageForDemoPerson:(id)a0 atTime:(double)a1 weight:(double)a2 leanBodyMass:(double)a3;
- (double)bodyMassIndexForDemoPerson:(id)a0 weight:(double)a1 height:(double)a2;
- (id)_heightCurveForAge:(double)a0 sex:(long long)a1;
- (double)weightChangeForDemoPerson:(id)a0 atTime:(double)a1;
- (id)_weightCurveForAge:(double)a0 sex:(long long)a1;

@end
