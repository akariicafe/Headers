@class NSString, ACHAchievementStore;

@interface ACHQueryServer : HDQueryServer <ACHAchievementStoreObserving> {
    ACHAchievementStore *_achievementStore;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)queryClass;

- (id)initWithUUID:(id)a0 configuration:(id)a1 client:(id)a2 delegate:(id)a3;
- (void)_queue_start;
- (void).cxx_destruct;
- (void)_queue_stop;
- (id)_clientProxy;
- (void)achievementStore:(id)a0 didAddAchievements:(id)a1;
- (void)achievementStore:(id)a0 didUpdateAchievements:(id)a1;
- (void)achievementStore:(id)a0 didRemoveAchievements:(id)a1;
- (void)achievementStoreDidFinishInitialFetch:(id)a0;

@end
