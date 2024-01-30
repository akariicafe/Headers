@class NSNumber, HLHeartRateData, NSDateInterval;

@interface HLOxygenSaturationMeasurement : NSObject

@property (retain, nonatomic) NSDateInterval *dateInterval;
@property (retain, nonatomic) NSNumber *oxygenSaturationPercentage;
@property (retain, nonatomic) HLHeartRateData *averageHeartRateData;
@property (retain, nonatomic) NSNumber *pressureInKilopascals;

- (void).cxx_destruct;

@end
