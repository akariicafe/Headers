@class NSArray, TAInterVisitMetricPerDeviceSettings, TASPAdvertisement;

@interface TAInterVisitMetricPerDevice : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) TAInterVisitMetricPerDeviceSettings *settings;
@property (readonly, nonatomic) NSArray *sampledObservedLocations;
@property (nonatomic) BOOL segmentSpeedExceedsLimit;
@property (readonly, nonatomic) unsigned long long numOfAssociatedLocs;
@property (readonly, nonatomic) double duration;
@property (readonly, nonatomic) double distance;
@property (readonly, nonatomic) TASPAdvertisement *latestAdvertisement;

- (id)descriptionDictionary;
- (id)initWithSettings:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)accumulate:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void)accumulateDistance:(double)a0;
- (void)accumulateDuration:(double)a0;
- (void)accumulateNumOfAssociatedLocs:(unsigned long long)a0;
- (void)accumulateSampledObservedLocations:(id)a0;
- (void)accumulateLatestAdvertisement:(id)a0;

@end
