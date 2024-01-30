@class NSArray;

@interface BCSFlagMeasurement : BCSMeasurement

@property (nonatomic) BOOL flagWasSet;
@property (readonly, nonatomic) NSArray *realTimeMeasurementHandlers;
@property (readonly, nonatomic) long long flagMeasurementType;
@property (nonatomic) BOOL flag;

+ (id)newFlagMeasurement:(long long)a0 withHandlers:(id)a1;

- (void).cxx_destruct;
- (id)_initWithType:(long long)a0 handlers:(id)a1;

@end
