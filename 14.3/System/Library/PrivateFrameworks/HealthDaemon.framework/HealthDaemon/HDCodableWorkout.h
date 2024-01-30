@class NSString, HDCodableSample, NSMutableArray;

@interface HDCodableWorkout : PBCodable <HDDecoding, NSCopying> {
    struct { unsigned char duration : 1; unsigned char goal : 1; unsigned char goalType : 1; unsigned char totalBasalEnergyBurnedInCanonicalUnit : 1; unsigned char totalDistanceInCanonicalUnit : 1; unsigned char totalEnergyBurnedInCanonicalUnit : 1; unsigned char totalFlightsClimbedInCanonicalUnit : 1; unsigned char totalSwimmingStrokeCountInCanonicalUnit : 1; unsigned char type : 1; } _has;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL hasSample;
@property (retain, nonatomic) HDCodableSample *sample;
@property (nonatomic) BOOL hasType;
@property (nonatomic) long long type;
@property (retain, nonatomic) NSMutableArray *events;
@property (nonatomic) BOOL hasDuration;
@property (nonatomic) double duration;
@property (nonatomic) BOOL hasTotalEnergyBurnedInCanonicalUnit;
@property (nonatomic) double totalEnergyBurnedInCanonicalUnit;
@property (nonatomic) BOOL hasTotalDistanceInCanonicalUnit;
@property (nonatomic) double totalDistanceInCanonicalUnit;
@property (nonatomic) BOOL hasGoalType;
@property (nonatomic) long long goalType;
@property (nonatomic) BOOL hasGoal;
@property (nonatomic) double goal;
@property (nonatomic) BOOL hasTotalBasalEnergyBurnedInCanonicalUnit;
@property (nonatomic) double totalBasalEnergyBurnedInCanonicalUnit;
@property (nonatomic) BOOL hasTotalSwimmingStrokeCountInCanonicalUnit;
@property (nonatomic) double totalSwimmingStrokeCountInCanonicalUnit;
@property (nonatomic) BOOL hasTotalFlightsClimbedInCanonicalUnit;
@property (nonatomic) double totalFlightsClimbedInCanonicalUnit;

+ (Class)eventsType;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (void)clearEvents;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)eventsCount;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)addEvents:(id)a0;
- (id)eventsAtIndex:(unsigned long long)a0;
- (BOOL)applyToObject:(id)a0;
- (id)decodedWorkoutEvents;
- (id)decodedTotalEnergyBurned;
- (id)decodedTotalBasalEnergyBurned;
- (id)decodedTotalDistance;
- (id)decodedTotalSwimmingStrokeCount;
- (id)decodedTotalFlightsClimbed;
- (unsigned long long)decodedGoalType;
- (id)decodedGoal;

@end
