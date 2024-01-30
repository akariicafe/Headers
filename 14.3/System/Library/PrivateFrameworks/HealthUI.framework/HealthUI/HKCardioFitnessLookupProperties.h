@class HKQuantity;

@interface HKCardioFitnessLookupProperties : NSObject

@property (nonatomic) long long biologicalSex;
@property (nonatomic) long long age;
@property (retain, nonatomic) HKQuantity *vo2MaxQuantity;

- (void).cxx_destruct;

@end
