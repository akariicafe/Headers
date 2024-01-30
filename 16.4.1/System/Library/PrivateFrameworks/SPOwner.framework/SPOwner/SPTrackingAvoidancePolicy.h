@interface SPTrackingAvoidancePolicy : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long type;
@property (nonatomic) double expiryTimeInterval;
@property (nonatomic) double purgeTimeInterval;
@property (nonatomic) double keepAliveInterval;
@property (nonatomic) double minimumStagingInterval;
@property (nonatomic) long long stagingBackstopHour;
@property (nonatomic) long long assumedKeyRollHour;
@property (nonatomic) double scanInterval;
@property (nonatomic) BOOL surfaceImmediatelyBetweenBackstopAndKeyroll;
@property (nonatomic) double maxExpectedWildInterval;
@property (nonatomic) BOOL shouldAlertImmediatelyForImmediateTypes;
@property (nonatomic) double durationOfConsideration;
@property (nonatomic) double thresholdOfLocationRelevance;
@property (nonatomic) double thresholdOfSignificantDuration;
@property (nonatomic) double thresholdOfSignificantDistance;
@property (nonatomic) double capOfReasonableWalkingSpeed;
@property (nonatomic) BOOL allowNavGeoHintAsPrivateVehicleHint;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)initWithType:(long long)a0 expiryTimeInterval:(double)a1 keepAliveInterval:(double)a2 minimumStagingInterval:(double)a3 stagingBackstopHour:(long long)a4 assumedKeyRollHour:(long long)a5 scanInterval:(double)a6 surfaceImmediatelyBetweenBackstopAndKeyroll:(BOOL)a7 maxExpectedWildInterval:(double)a8 shouldAlertImmediatelyForImmediateTypes:(BOOL)a9 durationOfConsideration:(double)a10 thresholdOfLocationRelevance:(double)a11 thresholdOfSignificantDuration:(double)a12 thresholdOfSignificantDistance:(double)a13 capOfReasonableWalkingSpeed:(double)a14 allowNavGeoHintAsPrivateVehicleHint:(BOOL)a15;

@end
