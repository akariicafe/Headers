@class HKAnchoredObjectQuery, HDProfile, NSDate, NSDictionary, ACHAchievementProgressEngine, ACHEarnedInstanceAwardingEngine, HKHealthStore, ACHAwardsWorkoutClient, ACHWorkoutUtility, NSString, ACHDataStore, ACHAwardsClient, NSNumber, NSArray, ACHTemplateStore;

@interface ACHWorkoutAwardingSource : NSObject <HDHealthDaemonReadyObserver, HDDataObserver, ACHDataStorePropertyProviding, ACHEarnedInstanceAwarding, ACHAchievementProgressProviding> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (weak, nonatomic) ACHAwardsClient *client;
@property (retain, nonatomic) HKHealthStore *healthStore;
@property (weak, nonatomic) HDProfile *profile;
@property (weak, nonatomic) ACHEarnedInstanceAwardingEngine *engine;
@property (weak, nonatomic) ACHDataStore *dataStore;
@property (weak, nonatomic) ACHAchievementProgressEngine *progressProvider;
@property (weak, nonatomic) ACHTemplateStore *templateStore;
@property (nonatomic) unsigned char creatorDevice;
@property (weak, nonatomic) ACHAwardsWorkoutClient *workoutClient;
@property (weak, nonatomic) ACHWorkoutUtility *workoutUtility;
@property (retain, nonatomic) HKAnchoredObjectQuery *workoutQuery;
@property (retain, nonatomic) NSNumber *overrideIsAppleWatch;
@property (readonly, nonatomic) BOOL isAppleWatch;
@property double bestElevationGainedHiking;
@property double best5KDuration;
@property double best10KDuration;
@property double bestWheelchair5KDuration;
@property double bestWheelchair10KDuration;
@property double bestHalfMarathonDuration;
@property double bestMarathonDuration;
@property double bestWheelchairHalfMarathonDuration;
@property double bestWheelchairMarathonDuration;
@property (nonatomic) int protectedDataToken;
@property (copy, nonatomic) id /* block */ initialResultsHandler;
@property (retain, nonatomic) NSDate *currentDateOverride;
@property (retain, nonatomic) NSString *watchCountryCodeOverride;
@property (retain, nonatomic) NSNumber *injectedIsMetricLocale;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSString *uniqueName;
@property (readonly, nonatomic) NSArray *dataStorePropertyKeys;
@property (retain, nonatomic) NSDictionary *dataStoreProperties;

- (void)samplesAdded:(id)a0 anchor:(id)a1;
- (void)_stopWorkoutQuery;
- (id)_earnedInstancesForWorkouts:(id)a0;
- (void)daemonReady:(id)a0;
- (id)watchCountryCode;
- (id)_stringForExperienceType:(unsigned long long)a0;
- (id)_client_earnedInstancesForWorkoutsInDateInterval:(id)a0 error:(id *)a1;
- (id)initWithProfile:(id)a0 awardingEngine:(id)a1 dataStore:(id)a2 templateStore:(id)a3 creatorDevice:(unsigned char)a4 progressProvider:(id)a5 workoutUtility:(id)a6;
- (id)initWithClient:(id)a0 healthStore:(id)a1 awardingEngine:(id)a2 dataStore:(id)a3 templateStore:(id)a4 creatorDevice:(unsigned char)a5 progressProvider:(id)a6 workoutUtility:(id)a7 initialResultsHandler:(id /* block */)a8;
- (id)currentDate;
- (id)_progressEnvironment;
- (void)_client_appendEarnedInstancesForWorkout:(id)a0 toSet:(id)a1 templates:(id)a2 calendar:(id)a3 numberOfDaysInWeek:(unsigned long long)a4 predicates:(id)a5 firstDayOfFitnessWeek:(long long)a6 watchCountryCode:(id)a7;
- (void)_startWorkoutQueryIfNecessary;
- (id)initWithClient:(id)a0 healthStore:(id)a1 awardingEngine:(id)a2 dataStore:(id)a3 templateStore:(id)a4 creatorDevice:(unsigned char)a5 progressProvider:(id)a6 workoutUtility:(id)a7;
- (BOOL)providesProgressForTemplate:(id)a0;
- (void)dataStoreDidClearAllProperties:(id)a0 completion:(id /* block */)a1;
- (id)_daemon_earnedInstancesForWorkouts:(id)a0;
- (id)_bestElevationGainedKeyForActivityType:(unsigned long long)a0;
- (id)earnedInstancesForHistoricalInterval:(id)a0;
- (void)_lock_startWorkoutQueryWithInitialResultsHandler:(id /* block */)a0;
- (void)dealloc;
- (id)currentProgressQuantityForTemplate:(id)a0;
- (BOOL)_handlesTemplate:(id)a0;
- (id)_stringForDate:(id)a0;
- (void)workoutsAdded:(id)a0;
- (void)_injectIsMetricLocale:(BOOL)a0;
- (void)activate;
- (id)earnedInstancesForHistoricalInterval:(id)a0 databaseContext:(id)a1;
- (id)_client_earnedInstancesForWorkouts:(id)a0;
- (id)currentGoalQuantityForTemplate:(id)a0;
- (void).cxx_destruct;
- (id)_stringForDuration:(double)a0;
- (BOOL)_isMetricLocale;

@end
