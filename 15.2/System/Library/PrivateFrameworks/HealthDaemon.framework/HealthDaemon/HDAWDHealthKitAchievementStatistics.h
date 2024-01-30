@interface HDAWDHealthKitAchievementStatistics : PBCodable <NSCopying> {
    struct { unsigned char consecutiveBriskMinuteGoalsMet : 1; unsigned char consecutiveCompleteDays : 1; unsigned char consecutiveStandingHoursGoalsMet : 1; unsigned char currentCalorieGoalConsecutiveCompleteDays : 1; } _has;
}

@property (nonatomic) BOOL hasConsecutiveStandingHoursGoalsMet;
@property (nonatomic) long long consecutiveStandingHoursGoalsMet;
@property (nonatomic) BOOL hasConsecutiveBriskMinuteGoalsMet;
@property (nonatomic) long long consecutiveBriskMinuteGoalsMet;
@property (nonatomic) BOOL hasCurrentCalorieGoalConsecutiveCompleteDays;
@property (nonatomic) long long currentCalorieGoalConsecutiveCompleteDays;
@property (nonatomic) BOOL hasConsecutiveCompleteDays;
@property (nonatomic) long long consecutiveCompleteDays;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
