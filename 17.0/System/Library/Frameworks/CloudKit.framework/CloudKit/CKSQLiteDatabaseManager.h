@class CKSQLiteDatabaseRegistry, CKSQLiteDatabaseActivities, NSDate, NSObject;
@protocol OS_dispatch_source, OS_dispatch_queue;

@interface CKSQLiteDatabaseManager : CKSQLiteSharedTableGroup {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _timerLock;
    NSObject<OS_dispatch_source> *_activityTimer;
    NSDate *_nextActivityDate;
    NSObject<OS_dispatch_queue> *_activityQueue;
    CKSQLiteDatabaseRegistry *_registry;
    CKSQLiteDatabaseActivities *_activities;
}

+ (id)managerInDatabase:(id)a0 error:(id *)a1;

- (id)init;
- (id)createTables:(id *)a0;
- (void)flush;
- (id)nextActivityDate;
- (void)runActivities:(id)a0;
- (void).cxx_destruct;
- (void)waitForComplete;
- (id)activitiesStartingBeforeDate:(id)a0;
- (id)activityEntryForTarget:(id)a0 error:(id *)a1;
- (id)addActivityTriggerWithTarget:(id)a0 date:(id)a1 coalescingInterval:(double)a2 minimumSeparation:(double)a3;
- (void)databaseWasRemoved:(id)a0;
- (id)earliestActivityDate;
- (id)finishInitializing;
- (id)migrateDataFromGroup:(id)a0;
- (id)nextActivityDateForTarget:(id)a0;
- (id)registerDatabase:(id)a0;
- (void)scheduleActivityDate:(id)a0;
- (void)setSchedulingDataInActivity:(id)a0 date:(id)a1 coalescingInterval:(double)a2 minimumSeparation:(double)a3;
- (void)target:(id)a0 group:(id)a1 didRunActivity:(id)a2;
- (id)target:(id)a0 group:(id)a1 willRunActivity:(id)a2;
- (void)waitForTargetActivityComplete:(id)a0;

@end
