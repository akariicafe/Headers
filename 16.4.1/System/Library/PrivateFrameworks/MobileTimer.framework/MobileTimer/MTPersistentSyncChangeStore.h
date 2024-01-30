@class NSString;
@protocol NAScheduler;

@interface MTPersistentSyncChangeStore : NSObject <MTSyncChangeStore>

@property (readonly, nonatomic) id<NAScheduler> archiverScheduler;
@property (copy, nonatomic) NSString *syncDataPath;
@property (copy, nonatomic) NSString *syncDataFile;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDataModel:(id)a0;
- (void)setupSyncDataFileForDataModel:(id)a0;
- (void)_removeSyncDataFile;
- (void)persistChanges:(id)a0;
- (id)loadChanges;
- (void).cxx_destruct;

@end
