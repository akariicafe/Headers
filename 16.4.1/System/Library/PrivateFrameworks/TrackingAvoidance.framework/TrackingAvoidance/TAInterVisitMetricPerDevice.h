@class NSArray, TASPAdvertisement, NSDictionary, TAInterVisitMetricPerDeviceSettings;

@interface TAInterVisitMetricPerDevice : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) TAInterVisitMetricPerDeviceSettings *settings;
@property (readonly, nonatomic) NSArray *sampledObservedLocations;
@property (nonatomic) BOOL segmentSpeedExceedsLimit;
@property (readonly, nonatomic) unsigned long long numOfAssociatedLocs;
@property (readonly, nonatomic) double duration;
@property (readonly, nonatomic) double distance;
@property (readonly, nonatomic) TASPAdvertisement *latestAdvertisement;
@property (readonly, nonatomic) NSDictionary *durationPerMotionState;

- (void)accumulateSampledObservedLocations:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)accumulateDistance:(double)a0;
- (id)initWithCoder:(id)a0;
- (void)accumulateLatestAdvertisement:(id)a0;
- (id)descriptionDictionary;
- (void)accumulate:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)accumulateNumOfAssociatedLocs:(unsigned long long)a0;
- (id)initWithSettings:(id)a0;
- (void)accumulateDuration:(double)a0;
- (id)init;
- (id)description;
- (void)accumulateDurationPerMotionState:(id)a0;
- (void).cxx_destruct;

@end
