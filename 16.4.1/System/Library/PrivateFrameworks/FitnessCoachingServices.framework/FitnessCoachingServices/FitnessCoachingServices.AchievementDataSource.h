@class NSArray, NSCalendar, NSError, NSDate, ACHAchievement;

@interface FitnessCoachingServices.AchievementDataSource : NSObject <FCSFirstGlanceAchievementEvaluatorDataSource> {
    void /* unknown type, empty encoding */ query;
    void /* unknown type, empty encoding */ state;
}

- (void)achievementsWithNames:(NSArray *)a0 completion:(void (^)(NSArray *, NSError *))a1;
- (void)monthlyChallengeForDate:(NSDate *)a0 calendar:(NSCalendar *)a1 completion:(void (^)(ACHAchievement *, NSError *))a2;
- (id)init;
- (void).cxx_destruct;

@end
