@class HKQuantity, NSDate;

@interface FIUIWorkoutSegment : NSObject

@property (copy, nonatomic) NSDate *startDate;
@property (copy, nonatomic) NSDate *endDate;
@property (retain, nonatomic) HKQuantity *activeEnergy;
@property (retain, nonatomic) HKQuantity *distance;
@property (nonatomic) double elapsedTime;

+ (id)_decimalNumberFormatter;

- (void).cxx_destruct;
- (id)description;
- (id)formattedActiveEnergyValueForUnit:(id)a0;
- (id)formattedDistanceValueForUnit:(id)a0;
- (id)formattedDurationValueWithFormattingManager:(id)a0;
- (id)formattedPaceUsingFormatType:(long long)a0 formattingManager:(id)a1;

@end
