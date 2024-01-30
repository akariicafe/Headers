@class EFLocked, EDInMemoryThreadQueryHandler, EDThreadPersistence, NSString, NSObject, EMThreadScope;
@protocol OS_os_log, EFScheduler, EDThreadMigratorDelegate;

@interface EDThreadMigrator : NSObject <EFLoggable>

@property (class, readonly) NSObject<OS_os_log> *log;

@property (readonly, nonatomic) EMThreadScope *threadScope;
@property (readonly, nonatomic) EFLocked *state;
@property (readonly, nonatomic) id<EFScheduler> workScheduler;
@property (readonly, nonatomic) EDThreadPersistence *threadPersistence;
@property (readonly, nonatomic) EDInMemoryThreadQueryHandler *queryHandler;
@property (readonly, weak, nonatomic) id<EDThreadMigratorDelegate> delegate;
@property (nonatomic) double threadFinalizationInterval;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)cancel;
- (void)start;
- (void).cxx_destruct;
- (void)reset;
- (void)_failMigration;
- (void)_finishMigrating;
- (void)_migrateNextBatchWithGeneration:(unsigned long long)a0;
- (void)_scheduleFinalizationForBatchedObjectIDs:(id)a0 withGeneration:(unsigned long long)a1 forDelete:(BOOL)a2;
- (void)addObjectIDsToMigrate:(id)a0;
- (void)changeObjectIDsToMigrate:(id)a0;
- (void)deleteObjectIDsToMigrate:(id)a0;
- (id)initWithThreadScope:(id)a0 threadPersistence:(id)a1 queryHandler:(id)a2 delegate:(id)a3;

@end
