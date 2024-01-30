@class NSString, AVTCoreEnvironment;
@protocol AVTCoreDataPersistentStoreLocalConfiguration;

@interface AVTSideCoreDataStoreMigratableSource : NSObject <AVTStoreBackendMigratableSource>

@property (readonly, nonatomic) id<AVTCoreDataPersistentStoreLocalConfiguration> configuration;
@property (readonly, nonatomic) AVTCoreEnvironment *environment;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)migrationNeeded;
- (void).cxx_destruct;
- (id)initWithConfiguration:(id)a0 environment:(id)a1;
- (id)createSourceBackend;
- (BOOL)finalizeMigration:(id *)a0;
- (id)migratedRecordFromRecord:(id)a0 index:(unsigned long long)a1 totalCount:(unsigned long long)a2;

@end
