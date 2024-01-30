@class ACHDatabaseAssertionClient, NSCalendar, NSDate, NSString, NSSet, NSDictionary, HDProfile, NSObject, ACHAwardsClient, ACHTemplateStore;
@protocol OS_dispatch_queue, ACHAchievementStoring;

@interface ACHTemplateSourceScheduler : NSObject <HDHealthDaemonReadyObserver, HDDatabaseProtectedDataObserver, ACHAchievementStoreObserving> {
    int _significantTimeChangeToken;
}

@property (retain, nonatomic) ACHAwardsClient *client;
@property (retain, nonatomic) ACHDatabaseAssertionClient *assertionClient;
@property (weak, nonatomic) HDProfile *profile;
@property (retain, nonatomic) ACHTemplateStore *templateStore;
@property (retain, nonatomic) id<ACHAchievementStoring> achievementStore;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;
@property (nonatomic) BOOL initialRunComplete;
@property (retain, nonatomic) NSSet *templateSources;
@property (retain, nonatomic) NSDictionary *lastRunDateByTemplateSourceIdentifier;
@property (retain, nonatomic) NSCalendar *gregorianCalendar;
@property (nonatomic) BOOL achievementStoreDidFinishInitialFetch;
@property (nonatomic) BOOL shouldScheduleAfterInitialFetch;
@property (nonatomic) int protectedDataToken;
@property (readonly, nonatomic) unsigned long long _sourceCount;
@property (retain, nonatomic) NSDate *currentDateOverride;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_startUp;
- (void)database:(id)a0 protectedDataDidBecomeAvailable:(BOOL)a1;
- (void)daemonReady:(id)a0;
- (BOOL)_queue_client_runTemplateSources:(id)a0 requiringRunnableForDate:(BOOL)a1 error:(id *)a2;
- (void)_listenForSignificantTimeChanges;
- (void)deregisterTemplateSource:(id)a0;
- (BOOL)_runSynchronouslyWithError:(id *)a0;
- (void)achievementStoreDidFinishInitialFetch:(id)a0;
- (void)registerTemplateSource:(id)a0;
- (void)achievementStore:(id)a0 didRemoveAchievements:(id)a1;
- (id)_runnableSourcesInSources:(id)a0 forDate:(id)a1 calendar:(id)a2;
- (void)achievementStore:(id)a0 didAddAchievements:(id)a1;
- (void)runImmediatelyForTemplateSource:(id)a0;
- (void)dealloc;
- (BOOL)_queue_runTemplateSources:(id)a0 requiringRunnableForDate:(BOOL)a1 error:(id *)a2;
- (void)achievementStore:(id)a0 didUpdateAchievements:(id)a1;
- (id)initWithClient:(id)a0 assertionClient:(id)a1 templateStore:(id)a2 achievementStore:(id)a3;
- (BOOL)_isProtectedDataAvailable;
- (id)_currentDate;
- (id)initWithProfile:(id)a0 templateStore:(id)a1 achievementStore:(id)a2;
- (void)_runAllTemplateSources;
- (BOOL)_queue_daemon_runTemplateSources:(id)a0 requiringRunnableForDate:(BOOL)a1 error:(id *)a2;
- (void).cxx_destruct;

@end
