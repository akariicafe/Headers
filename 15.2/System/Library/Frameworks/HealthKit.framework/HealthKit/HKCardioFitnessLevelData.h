@interface HKCardioFitnessLevelData : NSObject

@property (nonatomic) long long biologicalSex;
@property (nonatomic) long long cardioFitnessLevel;
@property (nonatomic) long long ageLowerBound;
@property (nonatomic) long long ageUpperBound;
@property (nonatomic) double vo2MaxLowerBound;
@property (nonatomic) double vo2MaxUpperBound;

- (id)description;
- (id)initWithCardioFitnessLevel:(long long)a0 biologicalSex:(long long)a1 ageLowerBound:(long long)a2 ageUpperBound:(long long)a3 vo2MaxLowerBound:(double)a4 vo2MaxUpperBound:(double)a5;

@end
