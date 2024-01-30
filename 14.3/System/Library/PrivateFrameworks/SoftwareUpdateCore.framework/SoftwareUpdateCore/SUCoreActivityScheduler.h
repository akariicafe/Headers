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

- (void).cxx_destruct;
- (void)_loadPersistedRegistrationMap;
- (id)initWithPersistedStatePath:(id)a0;
- (void)_queue_addRegistration:(id)a0 forActivity:(id)a1;
- (void)_queue_persistRegistrationMap;
- (id)_queue_registrationForActivity:(id)a0;
- (void)_queue_removeRegistrationForActivity:(id)a0;
- (id)_contextStoreRegisteredActivities;
- (id)sharedMemoryStore;
- (void)_registerRegistration:(id)a0 forActivity:(id)a1;
- (void)_unregisterRegistrationForActivity:(id)a0;
- (void)_unregisterAllActivitiesWithName:(id)a0;
- (id)_copyRegisteredActivities;
- (void)scheduleActivity:(id)a0 withHandler:(id /* block */)a1;
- (void)unregisterActivity:(id)a0;
- (void)unregisterActivitiesWithName:(id)a0;
- (id)copyScheduledActivities;

@end
