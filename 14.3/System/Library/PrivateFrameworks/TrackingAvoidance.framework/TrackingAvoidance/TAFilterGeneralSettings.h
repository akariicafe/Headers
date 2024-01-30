@interface TAFilterGeneralSettings : NSObject

@property (readonly, nonatomic) double durationOfConsideration;
@property (readonly, nonatomic) double thresholdOfLocationRelevance;
@property (readonly, nonatomic) double thresholdOfSignificantDuration;
@property (readonly, nonatomic) double thresholdOfSignificantDistance;
@property (readonly, nonatomic) double capOfReasonableWalkingSpeed;
@property (readonly, nonatomic) BOOL allowNavGeoHintAsPrivateVehicleHint;

- (id)initWithDurationOfConsiderationOrDefault:(id)a0 thresholdOfLocationRelevanceOrDefault:(id)a1 thresholdOfSignificantDurationOrDefault:(id)a2 thresholdOfSignificantDistanceOrDefault:(id)a3 capOfReasonableWalkingSpeedOrDefault:(id)a4 allowNavGeoHintAsPrivateVehicleHint:(id)a5;
- (id)initWithDurationOfConsideration:(double)a0 thresholdOfLocationRelevance:(double)a1 thresholdOfSignificantDuration:(double)a2 thresholdOfSignificantDistance:(double)a3 capOfReasonableWalkingSpeed:(double)a4 allowNavGeoHintAsPrivateVehicleHint:(BOOL)a5;
- (id)initWithDefaults;

@end
