@class NSString, ACHTemplateStore, HDProfile, ACHAchievementProgressEngine, ACHEarnedInstanceStore, ACHMonthlyChallengeDataSource, ACHEarnedInstanceAwardingEngine;

@interface ACHMonthlyChallengeAwardingSource : NSObject <HDHealthDaemonReadyObserver, HDCurrentActivitySummaryHelperObserver, HDDataObserver, ACHEarnedInstanceAwarding, ACHAchievementProgressProviding>

@property (weak, nonatomic) HDProfile *profile;
@property (weak, nonatomic) ACHEarnedInstanceAwardingEngine *engine;
@property (weak, nonatomic) ACHAchievementProgressEngine *progressProvider;
@property (weak, nonatomic) ACHTemplateStore *templateStore;
@property (weak, nonatomic) ACHEarnedInstanceStore *earnedInstanceStore;
@property (weak, nonatomic) ACHMonthlyChallengeDataSource *monthlyDataSource;
@property (nonatomic) unsigned char creatorDevice;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSString *uniqueName;

- (void)samplesAdded:(id)a0 anchor:(id)a1;
- (void)daemonReady:(id)a0;
- (void).cxx_destruct;
- (void)currentActivitySummaryHelper:(id)a0 didUpdateTodayActivitySummary:(id)a1 changedFields:(unsigned long long)a2;
- (void)currentActivitySummaryHelper:(id)a0 didUpdateYesterdayActivitySummary:(id)a1 changedFields:(unsigned long long)a2;
- (id)_earnedInstancesForInterval:(id)a0;
- (void)_requestIncrementalEvaluation;
- (id)_evaluationEnvironmentForTemplate:(id)a0;
- (id)_monthlyChallengeTemplatesForHistoricalInterval:(id)a0;
- (id)earnedInstancesForHistoricalInterval:(id)a0 databaseContext:(id)a1;
- (BOOL)providesProgressForTemplate:(id)a0;
- (id)currentProgressQuantityForTemplate:(id)a0;
- (id)currentGoalQuantityForTemplate:(id)a0;
- (id)initWithProfile:(id)a0 awardingEngine:(id)a1 templateStore:(id)a2 earnedInstanceStore:(id)a3 monthlyDataSource:(id)a4 creatorDevice:(unsigned char)a5 progressProvider:(id)a6;

@end
