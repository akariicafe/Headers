@class HDAWDHealthKitUserCharacteristics, HDAWDHealthKitConcurrentCalendarItem, HDAWDHealthKitAchievementStatistics;

@interface HDAWDHealthKitWristOnSettings : PBCodable <NSCopying> {
    struct { unsigned char daysSinceFirstCalorieGoal : 1; unsigned char eventBusyTime : 1; unsigned char numberOfEvents : 1; unsigned char progressUpdateFrequency : 1; unsigned char timeZoneOffset : 1; unsigned char timestamp : 1; unsigned char enableAchievements : 1; unsigned char enableGoalCompletions : 1; unsigned char enableStandReminders : 1; unsigned char enableWeeklySummary : 1; unsigned char wellnessComplicationOnWatchFace : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasEnableStandReminders;
@property (nonatomic) BOOL enableStandReminders;
@property (nonatomic) BOOL hasProgressUpdateFrequency;
@property (nonatomic) long long progressUpdateFrequency;
@property (nonatomic) BOOL hasEnableGoalCompletions;
@property (nonatomic) BOOL enableGoalCompletions;
@property (nonatomic) BOOL hasEnableAchievements;
@property (nonatomic) BOOL enableAchievements;
@property (nonatomic) BOOL hasEnableWeeklySummary;
@property (nonatomic) BOOL enableWeeklySummary;
@property (nonatomic) BOOL hasTimeZoneOffset;
@property (nonatomic) long long timeZoneOffset;
@property (nonatomic) BOOL hasNumberOfEvents;
@property (nonatomic) long long numberOfEvents;
@property (nonatomic) BOOL hasEventBusyTime;
@property (nonatomic) long long eventBusyTime;
@property (nonatomic) BOOL hasDaysSinceFirstCalorieGoal;
@property (nonatomic) long long daysSinceFirstCalorieGoal;
@property (readonly, nonatomic) BOOL hasUserCharacteristics;
@property (retain, nonatomic) HDAWDHealthKitUserCharacteristics *userCharacteristics;
@property (readonly, nonatomic) BOOL hasAchievementStatistics;
@property (retain, nonatomic) HDAWDHealthKitAchievementStatistics *achievementStatistics;
@property (nonatomic) BOOL hasWellnessComplicationOnWatchFace;
@property (nonatomic) BOOL wellnessComplicationOnWatchFace;
@property (readonly, nonatomic) BOOL hasFirstCalendarItemOfDay;
@property (retain, nonatomic) HDAWDHealthKitConcurrentCalendarItem *firstCalendarItemOfDay;

- (void).cxx_destruct;
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
