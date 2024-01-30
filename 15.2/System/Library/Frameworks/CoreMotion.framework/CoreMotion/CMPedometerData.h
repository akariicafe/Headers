@class NSString, NSUUID, NSDate, NSNumber;

@interface CMPedometerData : NSObject <SRSampling, NSSecureCoding, NSCopying> {
    NSDate *fStartDate;
    NSDate *fEndDate;
    NSNumber *fNumberOfSteps;
    NSNumber *fDistance;
    NSNumber *fFloorsAscended;
    NSNumber *fFloorsDescended;
    NSNumber *fRecordId;
    NSNumber *fCurrentPace;
    NSNumber *fCurrentCadence;
    NSDate *fFirstStepTime;
    NSNumber *fActiveTime;
    NSUUID *fSourceId;
    NSNumber *fIsOdometerDistance;
    NSNumber *fIsOdometerPace;
    NSNumber *fNumberOfPushes;
    NSNumber *fWorkoutType;
    NSNumber *fElevationAscended;
    NSNumber *fElevationDescended;
    NSNumber *fDistanceSource;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) long long recordId;
@property (readonly, nonatomic) NSUUID *sourceId;
@property (readonly, nonatomic) NSNumber *numberOfPushes;
@property (readonly, nonatomic) NSNumber *workoutType;
@property (readonly, nonatomic) NSNumber *elevationAscended;
@property (readonly, nonatomic) NSNumber *elevationDescended;
@property (readonly, nonatomic) NSNumber *distanceSource;
@property (readonly, nonatomic) NSDate *firstStepTime;
@property (readonly, nonatomic) NSNumber *activeTime;
@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) NSDate *endDate;
@property (readonly, nonatomic) NSNumber *numberOfSteps;
@property (readonly, nonatomic) NSNumber *distance;
@property (readonly, nonatomic) NSNumber *floorsAscended;
@property (readonly, nonatomic) NSNumber *floorsDescended;
@property (readonly, nonatomic) NSNumber *currentPace;
@property (readonly, nonatomic) NSNumber *currentCadence;
@property (readonly, nonatomic) NSNumber *averageActivePace;

+ (id)maxPedometerEntries;

- (id)initWithStartDate:(double)a0 endDate:(double)a1 steps:(int)a2 distance:(double)a3 floorsAscended:(id)a4 floorsDescended:(id)a5 recordID:(long long)a6 currentPace:(id)a7 currentCadence:(id)a8 firstStepTime:(double)a9 activeTime:(id)a10 sourceId:(id)a11 isOdometerDistance:(id)a12 isOdometerPace:(id)a13 pushes:(int)a14 workoutType:(int)a15 elevationAscended:(id)a16 elevationDescended:(id)a17 distanceSource:(int)a18;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isOdometerPace;
- (BOOL)isOdometerDistance;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)initWithBinarySampleRepresentation:(id)a0 metadata:(id)a1 timestamp:(double)a2;
- (id)binarySampleRepresentation;

@end
