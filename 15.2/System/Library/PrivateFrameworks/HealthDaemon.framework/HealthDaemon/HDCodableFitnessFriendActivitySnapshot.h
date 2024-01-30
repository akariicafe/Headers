@class NSString, HDCodableSample, NSData;

@interface HDCodableFitnessFriendActivitySnapshot : PBCodable <HDDecoding, NSCopying> {
    struct { unsigned char activeHours : 1; unsigned char activeHoursGoal : 1; unsigned char amm : 1; unsigned char briskMinutes : 1; unsigned char briskMinutesGoal : 1; unsigned char date : 1; unsigned char energyBurned : 1; unsigned char energyBurnedGoal : 1; unsigned char mmg : 1; unsigned char mmv : 1; unsigned char pushCount : 1; unsigned char snapshotIndex : 1; unsigned char stepCount : 1; unsigned char timeZoneOffsetFromUTCForNoon : 1; unsigned char uploadedDate : 1; unsigned char walkingAndRunningDistance : 1; unsigned char wheelchairUse : 1; } _has;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL hasSample;
@property (retain, nonatomic) HDCodableSample *sample;
@property (readonly, nonatomic) BOOL hasFriendUUID;
@property (retain, nonatomic) NSData *friendUUID;
@property (readonly, nonatomic) BOOL hasSourceUUID;
@property (retain, nonatomic) NSData *sourceUUID;
@property (nonatomic) BOOL hasSnapshotIndex;
@property (nonatomic) long long snapshotIndex;
@property (nonatomic) BOOL hasDate;
@property (nonatomic) double date;
@property (nonatomic) BOOL hasTimeZoneOffsetFromUTCForNoon;
@property (nonatomic) long long timeZoneOffsetFromUTCForNoon;
@property (nonatomic) BOOL hasEnergyBurned;
@property (nonatomic) double energyBurned;
@property (nonatomic) BOOL hasEnergyBurnedGoal;
@property (nonatomic) double energyBurnedGoal;
@property (nonatomic) BOOL hasBriskMinutes;
@property (nonatomic) double briskMinutes;
@property (nonatomic) BOOL hasBriskMinutesGoal;
@property (nonatomic) double briskMinutesGoal;
@property (nonatomic) BOOL hasActiveHours;
@property (nonatomic) double activeHours;
@property (nonatomic) BOOL hasActiveHoursGoal;
@property (nonatomic) double activeHoursGoal;
@property (nonatomic) BOOL hasWalkingAndRunningDistance;
@property (nonatomic) double walkingAndRunningDistance;
@property (nonatomic) BOOL hasStepCount;
@property (nonatomic) double stepCount;
@property (nonatomic) BOOL hasPushCount;
@property (nonatomic) double pushCount;
@property (nonatomic) BOOL hasWheelchairUse;
@property (nonatomic) long long wheelchairUse;
@property (nonatomic) BOOL hasUploadedDate;
@property (nonatomic) double uploadedDate;
@property (nonatomic) BOOL hasMmv;
@property (nonatomic) double mmv;
@property (nonatomic) BOOL hasMmg;
@property (nonatomic) double mmg;
@property (nonatomic) BOOL hasAmm;
@property (nonatomic) long long amm;

- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)applyToObject:(id)a0;

@end
