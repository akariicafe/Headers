@class NSArray, NSDate;

@interface HDHeartRateMeasurement : HDHealthServiceCharacteristic <HDDatumRendering>

@property (readonly, nonatomic) NSDate *updateTime;
@property (nonatomic) long long heartRateValue;
@property (nonatomic) BOOL hasEnergyExpended;
@property (nonatomic) long long energyExpended;
@property (nonatomic) BOOL hasSensorContact;
@property (nonatomic) BOOL sensorContact;
@property (retain, nonatomic) NSArray *rrIntervals;
@property (readonly, nonatomic) unsigned long long derivedContactStatus;

+ (id)uuid;
+ (id)_buildWithBinaryValue:(id)a0 error:(id *)a1;

- (void).cxx_destruct;
- (id)description;
- (id)generateDatums:(id)a0;

@end
