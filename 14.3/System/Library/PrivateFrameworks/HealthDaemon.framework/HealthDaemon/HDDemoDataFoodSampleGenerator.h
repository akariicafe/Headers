@class NSArray, HDDemoDataFoodDatabase;

@interface HDDemoDataFoodSampleGenerator : HDDemoDataBaseSampleGenerator

@property (retain, nonatomic) HDDemoDataFoodDatabase *foodDatabase;
@property (nonatomic) double nextMealTime;
@property (copy, nonatomic) NSArray *lastMeal;
@property (nonatomic) double nextBloodGlucoseSampleTime;
@property (nonatomic) double nextBloodGlucoseFingerStickSampleTime;
@property (nonatomic) double nextBloodGlucoseMealTime;
@property (nonatomic) double lastBloodGlucose;
@property (nonatomic) double nextInsulinPumpBasalSampleTime;
@property (nonatomic) double carbohydratesLeftToDigest;
@property (nonatomic) double bloodGlucoseCarbohydrateGlycemicRate;
@property (nonatomic) double bloodGlucoseDecreaseRateDueToInsulin;
@property (nonatomic) double nextWaterConsumedSampleTime;
@property (readonly, nonatomic) double nextBreakfastTime;
@property (readonly, nonatomic) double nextLunchTime;
@property (readonly, nonatomic) double nextSnackTime;
@property (readonly, nonatomic) double nextDinnerTime;
@property (readonly, nonatomic) double lastMealTime;

+ (BOOL)supportsSecureCoding;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)generateFirstRunSampleForDemoPerson:(id)a0 firstDate:(id)a1 objectCollection:(id)a2;
- (void)setupWithDemoDataGenerator:(id)a0;
- (void)generateWaterAndCaffeineSampleForTodayIfNeededWith:(id)a0;
- (void)generateSamplesForDemoPerson:(id)a0 atTime:(double)a1 sampleDate:(id)a2 objectCollection:(id)a3;
- (double)totalDailyInsulinTherapyRequirementForDemoPerson:(id)a0;
- (long long)mealTypeForTime:(double)a0;
- (id)_mealForDemoPerson:(id)a0 atTime:(double)a1;
- (BOOL)_isTypicalNutritionTrackingQuantityType:(id)a0;
- (double)_computeNutrientForDemoPerson:(id)a0 atTime:(double)a1 mealItem:(id)a2 quantityType:(id)a3;
- (id)basalInsulinInjectionForDemoPerson:(id)a0 quantityType:(id)a1 totalDailyInsulinInUnits:(double)a2 sampleDate:(id)a3;
- (id)bolusInsulinDeliveryForFoodItems:(id)a0 totalDailyInsulinInUnits:(double)a1;
- (id)bloodGlucoseForDemoPerson:(id)a0 atTime:(double)a1;
- (id)basalInsulinPumpDeliveryForDemoPerson:(id)a0 quantityType:(id)a1 totalDailyInsulinInUnits:(double)a2 currentTime:(double)a3 sampleDate:(id)a4;
- (id)waterConsumedForDemoPerson:(id)a0 atTime:(double)a1;
- (double)_computeMealTimeForDemoPerson:(id)a0 fromTime:(double)a1 mealTimeType:(long long)a2 timeMean:(double)a3 stdDev:(double)a4;
- (double)_computeBloodGlucoseForDemoPerson:(id)a0 atTime:(double)a1 weight:(double)a2;
- (double)basalInsulinDeliveryForTotalDailyInsulinInUnits:(double)a0 timeInterval:(double)a1;
- (double)_nextMealTimeForDemoPerson:(id)a0 atTime:(double)a1;
- (BOOL)_isDemoPersonConsumingCaffeine:(id)a0 atTime:(double)a1;
- (void)_generateRandomLastMeal;
- (id)_lastMeal;

@end
