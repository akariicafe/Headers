@interface CLReductiveFilterOptions : NSObject

@property (readonly, nonatomic) unsigned long long beaconType;
@property (readonly, nonatomic) double transmitPower;

- (id)init;
- (id)initWithBeaconType:(unsigned long long)a0 transmitPower:(double)a1;
- (id)initWithBeaconType:(unsigned long long)a0;

@end
