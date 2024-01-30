@class NSString, ACHTemplateStore, HDProfile, ACHAchievementProgressEngine, ACHWorkoutUtility, NSDate, ACHEarnedInstanceAwardingEngine;

@interface ACHWorkoutAwardingSource : NSObject <HDHealthDaemonReadyObserver, HDDataObserver, ACHEarnedInstanceAwarding, ACHAchievementProgressProviding>

@property (weak, nonatomic) HDProfile *profile;
@property (weak, nonatomic) ACHEarnedInstanceAwardingEngine *engine;
@property (weak, nonatomic) ACHAchievementProgressEngine *progressProvider;
@property (weak, nonatomic) ACHTemplateStore *templateStore;
@property (nonatomic) unsigned char creatorDevice;
@property (weak, nonatomic) ACHWorkoutUtility *workoutUtility;
@property (retain, nonatomic) NSDate *currentDateOverride;
@property (retain, nonatomic) NSString *watchCountryCodeOverride;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSString *uniqueName;

- (id)currentDate;
- (void).cxx_destruct;
- (void)samplesAdded:(id)a0 anchor:(id)a1;
- (void)daemonReady:(id)a0;
- (id)earnedInstancesForHistoricalInterval:(id)a0 databaseContext:(id)a1;
- (BOOL)providesProgressForTemplate:(id)a0;
- (id)currentProgressQuantityForTemplate:(id)a0;
- (id)currentGoalQuantityForTemplate:(id)a0;
- (id)_earnedInstancesForWorkouts:(id)a0;
- (BOOL)_handlesTemplate:(id)a0;
- (id)_progressEnvironment;
- (id)watchCountryCode;
- (id)initWithProfile:(id)a0 awardingEngine:(id)a1 templateStore:(id)a2 creatorDevice:(unsigned char)a3 progressProvider:(id)a4 workoutUtility:(id)a5;

@end
