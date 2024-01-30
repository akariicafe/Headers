@class NSObject;
@protocol OS_dispatch_queue, AVTUILogger, AVTEventCoalescer;

@interface AVTCoreDataStoreMaintenance : NSObject <AVTCoreDataStoreMaintenance>

@property (readonly, nonatomic) id<AVTUILogger> logger;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly, nonatomic) id<AVTEventCoalescer> eventCoalescer;
@property (readonly, copy, nonatomic) id /* block */ mocFactory;

- (void).cxx_destruct;
- (void)storeDidChange;
- (id)duplicatedIdentifiersInManagedObjectContext:(id)a0 error:(id *)a1;
- (id)fetchDuplicatedRecordsForIdentifiers:(id)a0 managedObjectContext:(id)a1 error:(id *)a2;
- (BOOL)fixDuplicateRecordIdentifiers:(id)a0 managedObjectContext:(id)a1 error:(id *)a2;
- (id)initWithEnvironment:(id)a0 managedObjectContextFactory:(id /* block */)a1;
- (id)initWithWorkQueue:(id)a0 managedObjectContextFactory:(id /* block */)a1 eventCoalescer:(id)a2 logger:(id)a3;
- (BOOL)mitigateDuplicatesWithManagedObjectContext:(id)a0 error:(id *)a1;
- (void)runMaintenanceTasks;

@end
