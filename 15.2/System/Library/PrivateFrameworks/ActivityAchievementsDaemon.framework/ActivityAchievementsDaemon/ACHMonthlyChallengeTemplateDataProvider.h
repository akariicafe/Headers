@class ACHActivitySummaryUtility, ACHAchievementStore, HDProfile, NSCalendar, NSDate;

@interface ACHMonthlyChallengeTemplateDataProvider : NSObject {
    NSDate *_currentDateOverride;
    NSCalendar *_currentCalendarOverride;
}

@property (weak, nonatomic) ACHAchievementStore *achievementStore;
@property (weak, nonatomic) HDProfile *profile;
@property (weak, nonatomic) ACHActivitySummaryUtility *activitySummaryUtility;
@property (retain, nonatomic) NSCalendar *currentCalendar;
@property (retain, nonatomic) NSDate *currentDate;

- (void).cxx_destruct;
- (BOOL)isWheelchairUser;
- (BOOL)isDate:(id)a0 betweenStartDate:(id)a1 andEndDate:(id)a2;
- (id)existingMonthlyChallengeTemplates;
- (unsigned long long)monthlyChallengeTypeForMonth:(id)a0;
- (id)initWithProfile:(id)a0 achievementStore:(id)a1 activitySummaryUtility:(id)a2;
- (long long)numberOfEarnedInstancesOfTemplateWithUniqueName:(id)a0 inDateComponentInterval:(id)a1 withCalendar:(id)a2;
- (BOOL)monthlyChallengeExistsForMonth:(id)a0;
- (long long)currentActivityMoveMode;
- (unsigned long long)currentExperienceType;
- (BOOL)hasMinimumActiveDays;
- (void)setCurrentDateOverride:(id)a0;
- (void)setCurrentCalendarOverride:(id)a0;

@end
