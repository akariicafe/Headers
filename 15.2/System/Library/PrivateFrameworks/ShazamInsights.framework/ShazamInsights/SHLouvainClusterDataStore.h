@class NSString, SHDataStoreMetadata, SHLouvainClusterQuery, NSPersistentContainer;

@interface SHLouvainClusterDataStore : NSObject <SHDataStore>

@property (readonly, nonatomic) BOOL useInMemoryStore;
@property (readonly, nonatomic) NSPersistentContainer *persistentContainer;
@property (readonly, nonatomic) SHLouvainClusterQuery *query;
@property (retain, nonatomic) SHDataStoreMetadata *metadata;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initInMemoryStore;
- (void).cxx_destruct;
- (BOOL)saveContextWithError:(id *)a0;
- (BOOL)loadClustersLineByLineFromDataURL:(id)a0 error:(id *)a1;
- (BOOL)isDataLoaded;
- (void)removeAllData;

@end
