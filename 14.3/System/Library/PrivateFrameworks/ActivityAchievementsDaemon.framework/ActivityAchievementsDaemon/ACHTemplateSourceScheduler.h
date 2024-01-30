@class NSDate, NSCalendar, NSString, ACHAchievementStore, NSSet, NSDictionary, HDProfile, NSObject, ACHTemplateStore;
@protocol OS_dispatch_queue;

@interface ACHTemplateSourceScheduler : NSObject <HDHealthDaemonReadyObserver, HDDatabaseProtectedDataObserver, ACHAchievementStoreObserving> {
    int _significantTimeChangeToken;
}

@property (weak, nonatomic) HDProfile *profile;
@property (retain, nonatomic) ACHTemplateStore *templateStore;
@property (retain, nonatomic) ACHAchievementStore *achievementStore;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;
@property (nonatomic) BOOL initialRunComplete;
@property (retain, nonatomic) NSSet *templateSources;
@property (retain, nonatomic) NSDictionary *lastRunDateByTemplateSourceIdentifier;
@property (retain, nonatomic) NSCalendar *gregorianCalendar;
@property (nonatomic) BOOL achievementStoreDidFinishInitialFetch;
@property (nonatomic) BOOL shouldScheduleAfterInitialFetch;
@property (readonly, nonatomic) unsigned long long _sourceCount;
@property (retain, nonatomic) NSDate *currentDateOverride;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_currentDate;
- (void).cxx_destruct;
- (void)daemonReady:(id)a0;
- (void)database:(id)a0 protectedDataDidBecomeAvailable:(BOOL)a1;
- (void)registerTemplateSource:(id)a0;
- (void)deregisterTemplateSource:(id)a0;
- (void)achievementStore:(id)a0 didAddAchievements:(id)a1;
- (void)achievementStore:(id)a0 didUpdateAchievements:(id)a1;
- (void)achievementStore:(id)a0 didRemoveAchievements:(id)a1;
- (void)achievementStoreDidFinishInitialFetch:(id)a0;
- (BOOL)_runSynchronouslyWithError:(id *)a0;
- (BOOL)_queue_runTemplateSources:(id)a0 requiringRunnableForDate:(BOOL)a1 error:(id *)a2;
- (void)_runAllTemplateSources;
- (id)_runnableSourcesInSources:(id)a0 forDate:(id)a1 calendar:(id)a2;
- (id)initWithProfile:(id)a0 templateStore:(id)a1 achievementStore:(id)a2;
- (void)runImmediatelyForTemplateSource:(id)a0;

@end
