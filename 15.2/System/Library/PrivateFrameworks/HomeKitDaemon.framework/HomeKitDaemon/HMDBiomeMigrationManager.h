@class HMDBiomeEventManager, HMDDuetEventManager, NSObject;
@protocol OS_dispatch_queue, HMDBiomeMigrationManagerDataSource;

@interface HMDBiomeMigrationManager : HMFObject

@property (readonly) HMDDuetEventManager *duetEventManager;
@property (readonly) HMDBiomeEventManager *biomeEventManager;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly, weak) id<HMDBiomeMigrationManagerDataSource> dataSource;

- (void).cxx_destruct;
- (id)initWithDuetEventManager:(id)a0 biomeEventManager:(id)a1 dataSource:(id)a2;
- (void)migrateAllEvents:(id /* block */)a0;

@end
