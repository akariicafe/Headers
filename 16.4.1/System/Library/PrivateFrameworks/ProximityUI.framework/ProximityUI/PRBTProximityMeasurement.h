@class NSUUID, NSNumber;

@interface PRBTProximityMeasurement : NSObject

@property (readonly, nonatomic) double timestamp;
@property (readonly, nonatomic) unsigned long long proximityLevel;
@property (readonly, nonatomic) double rssi;
@property (readonly, nonatomic) NSUUID *uuid;
@property (readonly, nonatomic) NSNumber *continuousProximityLevel;
@property (readonly, nonatomic) unsigned long long proximityTrend;

+ (id)btProximityWithTime:(double)a0 proximityLevel:(unsigned long long)a1 rssi:(double)a2 continuousProximityLevel:(id)a3 uuid:(id)a4 proximityTrend:(unsigned long long)a5;

- (void).cxx_destruct;
- (id)initWithTime:(double)a0 proximityLevel:(unsigned long long)a1 rssi:(double)a2 continuousProximityLevel:(id)a3 uuid:(id)a4 proximityTrend:(unsigned long long)a5;

@end
