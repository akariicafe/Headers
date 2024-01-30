@class NSArray;

@interface SPMacBeaconConfig : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) double initialNoBeaconDuration;
@property (nonatomic) double fastRollAdvertisementDuration;
@property (nonatomic) double fastRollAdvertisementInterval;
@property (nonatomic) double slowRollAdvertisementDuration;
@property (nonatomic) double slowRollNoAdvertisementDuration;
@property (nonatomic) double noAdvertisementDurationDecayFactor;
@property (copy, nonatomic) NSArray *postInitialDayAdvertisementTimes;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)persistToPrefs;
- (id)initWithInitialNoBeaconDuration:(double)a0 fastRollAdvertisementDuration:(double)a1 fastRollAdvertisementInterval:(double)a2 slowRollAdvertisementDuration:(double)a3 slowRollNoAdvertisementDuration:(double)a4 noAdvertisementDurationDecayFactor:(double)a5 postInitialDayAdvertisementTimes:(id)a6;
- (id)initFromPrefs;
- (id)initWithCoder:(id)a0;
- (id)debugDescription;
- (void)encodeWithCoder:(id)a0;

@end
