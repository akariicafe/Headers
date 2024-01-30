@class HKUnit, NSDateComponents, HKDisplayType;

@interface _HKCardioFitnessLevelDataSourceDelegate : NSObject <HKDateRangeDataSourceDelegate>

@property (nonatomic) long long cardioFitnessLevel;
@property (nonatomic) long long biologicalSex;
@property (retain, nonatomic) NSDateComponents *dateOfBirthComponents;
@property (retain, nonatomic) HKUnit *unit;
@property (retain, nonatomic) HKDisplayType *baseDisplayType;

- (void).cxx_destruct;
- (void)setUpdateDelegate:(id)a0;
- (id)dataForDateRange:(id)a0 timeScope:(long long)a1;
- (id)initWithCardioFitnessLevel:(long long)a0 healthStore:(id)a1 baseDisplayType:(id)a2;

@end
