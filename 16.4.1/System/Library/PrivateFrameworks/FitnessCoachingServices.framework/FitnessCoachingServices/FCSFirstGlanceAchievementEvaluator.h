@class NSString;
@protocol FCSFirstGlanceAchievementEvaluatorDataSource;

@interface FCSFirstGlanceAchievementEvaluator : NSObject {
    NSString *_progressLocalizationKeyOverride;
    NSString *_yesterdayLocalizationKeyOverride;
}

@property (weak, nonatomic) id<FCSFirstGlanceAchievementEvaluatorDataSource> dataSource;

- (id)initWithDataSource:(id)a0;
- (void).cxx_destruct;
- (void)_firstAchievementFromAchievements:(id)a0 passingMilestoneTest:(id /* block */)a1 completion:(id /* block */)a2;
- (id)evaluateYesterdayAchievements:(id)a0 isStandaloneMode:(BOOL)a1;
- (void)progressAchievementAndMilestoneWithCurrentDate:(id)a0 calendar:(id)a1 experienceType:(unsigned long long)a2 isStandaloneMode:(BOOL)a3 completion:(id /* block */)a4;
- (void)progressAchievementAndMilestoneWithMonthlyChallengeAchievement:(id)a0 achievementsMap:(id)a1 currentDate:(id)a2 calendar:(id)a3 experienceType:(unsigned long long)a4 isStandaloneMode:(BOOL)a5 completion:(id /* block */)a6;
- (id)progressLocalizationKeyForAchievement:(id)a0 progressMilestone:(id)a1 experienceType:(unsigned long long)a2;
- (void)setLocalizationKeyOverride:(id)a0;
- (id)yesterdayLocalizationKeyForAchievement:(id)a0 experienceType:(unsigned long long)a1;

@end
