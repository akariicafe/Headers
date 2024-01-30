@class ATXLocationOfInterest, CLLocation;

@interface ATXPredictionLocationMotionContext : ATXPredictionContextDomain

@property (readonly, nonatomic) ATXLocationOfInterest *previousLOI;
@property (readonly, nonatomic) ATXLocationOfInterest *currentLOI;
@property (readonly, nonatomic) long long motionType;
@property (readonly, nonatomic) CLLocation *currentLocation;
@property (readonly, nonatomic) BOOL locationEnabled;
@property (readonly, nonatomic) double distanceFromHomeOfCurrentLocationInMeters;
@property (readonly, nonatomic) double distanceFromWorkOfCurrentLocationInMeters;
@property (readonly, nonatomic) double distanceFromSchoolOfCurrentLocationInMeters;
@property (readonly, nonatomic) double distanceFromGymOfCurrentLocationInMeters;
@property (readonly, nonatomic) BOOL canPredictClipsGivenRecentMotion;

- (id)jsonDict;
- (id)_archiveCLLocation:(id)a0;
- (void).cxx_destruct;
- (id)initWithProtoData:(id)a0;
- (int)_pbMotionTypeFromATXMotionType:(long long)a0;
- (BOOL)_locationsAreEqualWithFirstLocation:(id)a0 secondLocation:(id)a1;
- (id)initWithProto:(id)a0;
- (id)proto;
- (id)encodeAsProto;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (BOOL)isEqualToATXPredictionLocationMotionContext:(id)a0;
- (id)_unarchiveCLLocation:(id)a0;
- (long long)_atxMotionTypeFromPBMotionType:(int)a0;
- (id)initWithCurrentLOI:(id)a0 previousLOI:(id)a1 motionType:(long long)a2 currentLocation:(id)a3 locationEnabled:(BOOL)a4 distanceFromHome:(double)a5 distanceFromWork:(double)a6 distanceFromSchool:(double)a7 distanceFromGym:(double)a8 canPredictClipsGivenRecentMotion:(BOOL)a9;

@end
