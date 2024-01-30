@interface TAFilterGeneralSettings : NSObject

@property (readonly, nonatomic) double durationOfConsideration;
@property (readonly, nonatomic) double thresholdOfLocationRelevance;
@property (readonly, nonatomic) double thresholdOfSignificantDuration;
@property (readonly, nonatomic) double thresholdOfSignificantDistance;
@property (readonly, nonatomic) double capOfReasonableWalkingSpeed;
@property (readonly, nonatomic) BOOL allowNavGeoHintAsPrivateVehicleHint;
@property (readonly, nonatomic) unsigned long long vehicularImmediacyType;
@property (readonly, nonatomic) unsigned long long beepOnMoveVehicularImmediacyType;
@property (readonly, nonatomic) unsigned long long beepOnMovePedestrianImmediacyType;
@property (readonly, nonatomic) unsigned long long nextPLOIVehicularImmediacyType;
@property (readonly, nonatomic) unsigned long long nextPLOIPedestrianImmediacyType;
@property (readonly, nonatomic) unsigned long long beepOnMoveConsiderationTimeInterval;

- (id)initWithDefaults;
- (id)initWithDurationOfConsideration:(double)a0 thresholdOfLocationRelevance:(double)a1 thresholdOfSignificantDuration:(double)a2 thresholdOfSignificantDistance:(double)a3 capOfReasonableWalkingSpeed:(double)a4 allowNavGeoHintAsPrivateVehicleHint:(BOOL)a5 vehicularImmediacyType:(unsigned long long)a6 beepOnMoveVehicularImmediacyType:(unsigned long long)a7 beepOnMovePedestrianImmediacyType:(unsigned long long)a8 nextPLOIVehicularImmediacyType:(unsigned long long)a9 nextPLOIPedestrianImmediacyType:(unsigned long long)a10 beepOnMoveConsiderationTimeInterval:(unsigned long long)a11;
- (id)initWithDurationOfConsiderationOrDefault:(id)a0 thresholdOfLocationRelevanceOrDefault:(id)a1 thresholdOfSignificantDurationOrDefault:(id)a2 thresholdOfSignificantDistanceOrDefault:(id)a3 capOfReasonableWalkingSpeedOrDefault:(id)a4 allowNavGeoHintAsPrivateVehicleHintOrDefault:(id)a5 vehicularImmediacyTypeOrDefault:(id)a6 beepOnMoveVehicularImmediacyTypeOrDefault:(id)a7 beepOnMovePedestrianImmediacyTypeOrDefault:(id)a8 nextPLOIVehicularImmediacyTypeOrDefault:(id)a9 nextPLOIPedestrianImmediacyTypeOrDefault:(id)a10 beepOnMoveConsiderationTimeIntervalOrDefault:(id)a11;

@end
