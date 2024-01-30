@class NSUUID, NSArray, NSDateComponents, NSDate;

@interface ASCompetition : NSObject <NSCopying>

@property (retain, nonatomic) NSUUID *UUID;
@property (nonatomic) long long currentCacheIndex;
@property (nonatomic) long long lastPushedCacheIndex;
@property (retain, nonatomic) NSArray *scores;
@property (retain, nonatomic) NSArray *opponentScores;
@property (retain, nonatomic) NSDateComponents *startDateComponents;
@property (retain, nonatomic) NSDateComponents *durationDateComponents;
@property (retain, nonatomic) NSArray *preferredVictoryBadgeStyles;
@property (nonatomic) unsigned long long maximumNumberOfPointsPerDay;
@property (readonly, nonatomic) BOOL isDailyScoreCapped;
@property (readonly, nonatomic) unsigned int victoryBadgeStyle;
@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) NSDate *endDate;
@property (readonly, nonatomic) NSDate *lastDayOfCompetition;
@property (readonly, nonatomic) BOOL isFirstDayOfCompetition;
@property (readonly, nonatomic) BOOL isLastDayOfCompetition;
@property (readonly, nonatomic) long long endDateCacheIndex;
@property (readonly, nonatomic) unsigned long long numberOfDaysRemaining;
@property (readonly, nonatomic) unsigned long long myTotalScore;
@property (readonly, nonatomic) unsigned long long myDailyAverageScore;
@property (readonly, nonatomic) unsigned long long opponentTotalScore;
@property (readonly, nonatomic) unsigned long long opponentDailyAverageScore;
@property (readonly, nonatomic) BOOL isScoreTied;
@property (readonly, nonatomic) long long stage;
@property (readonly, nonatomic) BOOL hasCalculatedFinalScore;
@property (readonly, nonatomic) BOOL hasPushedFinalScore;
@property (retain, nonatomic) NSDate *currentDateOverride;

+ (id)competitionWithCodableCompetition:(id)a0;
+ (id)codableDatabaseCompetitionsFromCompetitions:(id)a0 withFriendWithUUID:(id)a1 withType:(long long)a2;

- (id)currentDate;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)codableCompetition;
- (BOOL)isEqualToCompetition:(id)a0;
- (id)_scoresForParticipant:(long long)a0;
- (unsigned long long)dailyScoreForParticipant:(long long)a0 onDate:(id)a1;
- (id)daysWonByParticipant:(long long)a0;
- (BOOL)isParticipantWinning:(long long)a0;

@end
