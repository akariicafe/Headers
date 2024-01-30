@interface HDAWDHealthKitCoachingFeatures : PBCodable <NSCopying> {
    struct { unsigned char activeCalories : 1; unsigned char automotive : 1; unsigned char briskMinutes : 1; unsigned char cycling : 1; unsigned char duration : 1; unsigned char heartRate : 1; unsigned char other : 1; unsigned char running : 1; unsigned char unknown : 1; unsigned char walking : 1; unsigned char workout : 1; } _has;
}

@property (nonatomic) BOOL hasWalking;
@property (nonatomic) unsigned int walking;
@property (nonatomic) BOOL hasAutomotive;
@property (nonatomic) unsigned int automotive;
@property (nonatomic) BOOL hasCycling;
@property (nonatomic) unsigned int cycling;
@property (nonatomic) BOOL hasRunning;
@property (nonatomic) unsigned int running;
@property (nonatomic) BOOL hasOther;
@property (nonatomic) unsigned int other;
@property (nonatomic) BOOL hasWorkout;
@property (nonatomic) unsigned int workout;
@property (nonatomic) BOOL hasHeartRate;
@property (nonatomic) unsigned int heartRate;
@property (nonatomic) BOOL hasActiveCalories;
@property (nonatomic) unsigned int activeCalories;
@property (nonatomic) BOOL hasBriskMinutes;
@property (nonatomic) unsigned int briskMinutes;
@property (nonatomic) BOOL hasDuration;
@property (nonatomic) unsigned int duration;
@property (nonatomic) BOOL hasUnknown;
@property (nonatomic) unsigned int unknown;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;

@end
