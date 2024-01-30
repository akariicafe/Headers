@class NSString;
@protocol ACHAchievementStoring;

@interface ACHQueryServer : HDQueryServer <ACHAchievementStoreObserving> {
    id<ACHAchievementStoring> _achievementStore;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)queryClass;

- (void)_queue_start;
- (void)_queue_stop;
- (void)achievementStoreDidFinishInitialFetch:(id)a0;
- (void)achievementStore:(id)a0 didRemoveAchievements:(id)a1;
- (void)achievementStore:(id)a0 didAddAchievements:(id)a1;
- (id)initWithUUID:(id)a0 configuration:(id)a1 client:(id)a2 delegate:(id)a3;
- (void)achievementStore:(id)a0 didUpdateAchievements:(id)a1;
- (id)_clientProxy;
- (void).cxx_destruct;
- (id)_newSystemEnabledError;

@end
