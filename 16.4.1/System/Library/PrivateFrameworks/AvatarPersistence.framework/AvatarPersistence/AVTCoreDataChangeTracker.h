@class AVTCoreEnvironment;
@protocol AVTAvatarManagedRecordTransformer, AVTCoreDataPersistentStoreConfiguration, AVTUILogger;

@interface AVTCoreDataChangeTracker : NSObject <AVTAvatarRecordChangeTracker>

@property (readonly, nonatomic) id<AVTCoreDataPersistentStoreConfiguration> configuration;
@property (readonly, nonatomic) AVTCoreEnvironment *environment;
@property (readonly, nonatomic) id<AVTUILogger> logger;
@property (readonly, nonatomic) id<AVTAvatarManagedRecordTransformer> recordTransformer;

+ (id)tokenFileURLForLocation:(id)a0;

- (void).cxx_destruct;
- (BOOL)processChangeTransactionsWithChangeTokenLocation:(id)a0 handler:(id /* block */)a1 error:(id *)a2;
- (id)initWithConfiguration:(id)a0 environment:(id)a1;
- (id)currentHistoryTokenForLocation:(id)a0;
- (id)enumerateChangesAfterToken:(id)a0 managedObjectContext:(id)a1 changesHandler:(id /* block */)a2 error:(id *)a3;
- (id)initWithConfiguration:(id)a0 recordTransformer:(id)a1 environment:(id)a2;
- (id)recordIdentifierForChange:(id)a0 managedObjectContext:(id)a1;
- (BOOL)saveToken:(id)a0 location:(id)a1 error:(id *)a2;
- (id)trackerChangesFromPersistentChanges:(id)a0 managedObjectContext:(id)a1;

@end
