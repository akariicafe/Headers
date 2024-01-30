@class NSManagedObjectContext, NSString, DRSTaskingCloudKitHelper, NSPersistentContainer;

@interface DRSConfigPersistedStore : NSObject

@property (readonly, nonatomic) NSPersistentContainer *container;
@property (readonly, nonatomic) NSManagedObjectContext *context;
@property (readonly, nonatomic) NSString *workingDirectory;
@property (readonly, nonatomic) BOOL isReadOnly;
@property (readonly, nonatomic) DRSTaskingCloudKitHelper *cloudKitHelper;

- (unsigned long long)metadataCountForPredicate:(id)a0 fetchLimit:(unsigned long long)a1 withErrorOut:(id *)a2;
- (unsigned long long)_countForFetchRequest:(id)a0 withPredicate:(id)a1 fetchLimit:(unsigned long long)a2 errorOut:(id *)a3;
- (id)_ON_MOC_cloudChannelConfigMOs;
- (id)cloudChannelConfig;
- (id)configMetadataForUUID:(id)a0 errorOut:(id *)a1;
- (void)_ON_MOC_deleteCloudChannelConfigMOs:(id)a0;
- (BOOL)completeConfigWithUUID:(id)a0 completedDate:(id)a1 completionType:(unsigned long long)a2 completionDescription:(id)a3 errorOut:(id *)a4;
- (id)initWithWorkingDirectory:(id)a0 isReadOnly:(BOOL)a1 cloudKitHelper:(id)a2 errorOut:(id *)a3;
- (unsigned long long)configCountForPredicate:(id)a0 fetchLimit:(unsigned long long)a1 withErrorOut:(id *)a2;
- (id)configMetadatasForPredicate:(id)a0 sortDescriptors:(id)a1 fetchLimit:(unsigned long long)a2 errorOut:(id *)a3;
- (BOOL)applyWaitingConfigWithUUID:(id)a0 appliedDate:(id)a1 errorOut:(id *)a2;
- (BOOL)updateCloudChannelConfig:(id)a0 errorOut:(id *)a1;
- (BOOL)clearStoreWithErrorOut:(id *)a0;
- (void).cxx_destruct;
- (BOOL)addConfigMetdata:(id)a0 errorOut:(id *)a1;

@end
