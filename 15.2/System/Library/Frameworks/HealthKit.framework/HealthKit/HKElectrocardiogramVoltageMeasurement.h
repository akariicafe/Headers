@class HKQuantity;

@interface HKElectrocardiogramVoltageMeasurement : NSObject {
    HKQuantity *_leadIVoltage;
}

@property (readonly, nonatomic) double timeSinceSampleStart;

- (void).cxx_destruct;
- (id)quantityForLead:(long long)a0;
- (id)initWithLeadIVoltage:(id)a0 timeSinceSampleStart:(double)a1;

@end
