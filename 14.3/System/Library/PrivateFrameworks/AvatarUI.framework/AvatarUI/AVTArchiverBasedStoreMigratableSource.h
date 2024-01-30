@class NSURL, NSString, AVTCoreEnvironment;

@interface AVTArchiverBasedStoreMigratableSource : NSObject <AVTStoreBackendMigratableSource>

@property (readonly, nonatomic) NSURL *storeLocation;
@property (readonly, nonatomic) AVTCoreEnvironment *environment;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)migrationNeeded;
- (id)initWithStoreLocation:(id)a0 environment:(id)a1;
- (id)createSourceBackend;
- (BOOL)finalizeMigration:(id *)a0;
- (id)migratedRecordFromRecord:(id)a0 index:(unsigned long long)a1 totalCount:(unsigned long long)a2;

@end
