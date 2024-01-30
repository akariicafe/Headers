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

- (void)unregisterActivity:(id)a0;
- (void).cxx_destruct;
- (id)_queue_registrationForActivity:(id)a0;
- (id)_contextStoreRegisteredActivities;
- (id)_copyRegisteredActivities;
- (void)_loadPersistedRegistrationMap;
- (void)_queue_addRegistration:(id)a0 forActivity:(id)a1;
- (void)_queue_persistRegistrationMap;
- (void)_queue_removeRegistrationForActivity:(id)a0;
- (void)_registerRegistration:(id)a0 forActivity:(id)a1;
- (void)_unregisterAllActivitiesWithName:(id)a0;
- (void)_unregisterRegistrationForActivity:(id)a0;
- (id)copyScheduledActivities;
- (id)initWithPersistedStatePath:(id)a0;
- (void)scheduleActivity:(id)a0 withHandler:(id /* block */)a1;
- (id)sharedMemoryStore;
- (void)unregisterActivitiesWithName:(id)a0;

@end
