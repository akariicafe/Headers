@interface HKElectrocardiogramVoltageMeasurement : NSObject {
    float _leadIVoltage;
}

@property (readonly, nonatomic) double timeSinceSampleStart;

- (id)quantityForLead:(long long)a0;
- (id)initWithLeadIVoltage:(float)a0 timeSinceSampleStart:(double)a1;

@end
