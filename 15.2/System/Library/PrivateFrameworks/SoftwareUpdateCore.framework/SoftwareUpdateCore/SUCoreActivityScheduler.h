@class SUCorePersistedState, NSMutableArray, NSObject;
@protocol OS_dispatch_queue, _CDContext;

@interface SUCoreActivityScheduler : NSObject {
    id<_CDContext> _context;
    NSMutableArray *_activityArray;
    NSMutableArray *_registrationArray;
    NSObject<OS_dispatch_queue> *_stateQueue;
    SUCorePersistedState *_persistedState;
}

+ (id)sharedInstance;

- (id)_queue_registrationForActivity:(id)a0;
- (id)initWithPersistedStatePath:(id)a0;
- (id)sharedMemoryStore;
- (id)_contextStoreRegisteredActivities;
- (void)unregisterActivity:(id)a0;
- (void)scheduleActivity:(id)a0 withHandler:(id /* block */)a1;
- (void)_queue_persistRegistrationMap;
- (id)copyScheduledActivities;
- (void)_queue_addRegistration:(id)a0 forActivity:(id)a1;
- (void)_unregisterAllActivitiesWithName:(id)a0;
- (void)_loadPersistedRegistrationMap;
- (void).cxx_destruct;
- (void)_queue_removeRegistrationForActivity:(id)a0;
- (id)_copyRegisteredActivities;
- (void)unregisterActivitiesWithName:(id)a0;
- (void)_registerRegistration:(id)a0 forActivity:(id)a1;
- (void)_unregisterRegistrationForActivity:(id)a0;

@end
