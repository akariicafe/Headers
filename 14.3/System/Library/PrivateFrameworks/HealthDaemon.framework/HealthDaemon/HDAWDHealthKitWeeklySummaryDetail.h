@interface HDAWDHealthKitWeeklySummaryDetail : PBCodable <NSCopying> {
    struct { unsigned char mostRecentGoal : 1; unsigned char numTimesGoalAchieved : 1; unsigned char selectedGoal : 1; } _has;
}

@property (nonatomic) BOOL hasMostRecentGoal;
@property (nonatomic) long long mostRecentGoal;
@property (nonatomic) BOOL hasNumTimesGoalAchieved;
@property (nonatomic) long long numTimesGoalAchieved;
@property (nonatomic) BOOL hasSelectedGoal;
@property (nonatomic) long long selectedGoal;

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
