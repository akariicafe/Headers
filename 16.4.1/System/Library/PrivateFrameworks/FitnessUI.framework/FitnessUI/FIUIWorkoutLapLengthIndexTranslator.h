@class HKUnit;

@interface FIUIWorkoutLapLengthIndexTranslator : NSObject

@property (retain, nonatomic) HKUnit *distanceUnit;

- (double)valueForIndex:(long long)a0;
- (void).cxx_destruct;
- (long long)indexForValue:(double)a0;
- (id)initWithDistanceUnit:(id)a0;
- (double)valueTranslatedFromDistanceUnit:(double)a0;
- (double)valueTranslatedIntoDistanceUnit:(double)a0;

@end
