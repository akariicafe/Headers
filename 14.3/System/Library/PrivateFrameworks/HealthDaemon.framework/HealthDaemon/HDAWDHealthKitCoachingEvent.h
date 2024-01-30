@class HDAWDHealthKitCoachingFeatureGroup;

@interface HDAWDHealthKitCoachingEvent : PBCodable <NSCopying> {
    struct { unsigned int *list; unsigned long long count; unsigned long long size; } _goalTypes;
    struct { unsigned char duration : 1; unsigned char eventTimestamp : 1; unsigned char timestamp : 1; unsigned char dismissReason : 1; unsigned char eventType : 1; unsigned char newGoal : 1; unsigned char recommendedGoal : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasEventType;
@property (nonatomic) unsigned int eventType;
@property (nonatomic) BOOL hasDismissReason;
@property (nonatomic) unsigned int dismissReason;
@property (readonly, nonatomic) unsigned long long goalTypesCount;
@property (readonly, nonatomic) unsigned int *goalTypes;
@property (nonatomic) BOOL hasRecommendedGoal;
@property (nonatomic) unsigned int recommendedGoal;
@property (nonatomic) BOOL hasNewGoal;
@property (nonatomic) unsigned int newGoal;
@property (nonatomic) BOOL hasDuration;
@property (nonatomic) unsigned long long duration;
@property (readonly, nonatomic) BOOL hasFeatures;
@property (retain, nonatomic) HDAWDHealthKitCoachingFeatureGroup *features;
@property (nonatomic) BOOL hasEventTimestamp;
@property (nonatomic) unsigned long long eventTimestamp;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (void)dealloc;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)clearGoalTypes;
- (void)setGoalTypes:(unsigned int *)a0 count:(unsigned long long)a1;
- (unsigned int)goalTypeAtIndex:(unsigned long long)a0;
- (void)addGoalType:(unsigned int)a0;

@end
