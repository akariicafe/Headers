@class SHLouvainClusterDataStore;

@interface SHLouvainClusterImport : NSObject

@property (readonly, nonatomic) SHLouvainClusterDataStore *dataStore;

- (id)initWithDataStore:(id)a0;
- (void).cxx_destruct;
- (void)importClustersToModelObjects:(id)a0 cluster:(id)a1 importClusters:(id)a2;
- (BOOL)loadClustersFromDataURL:(id)a0 error:(id *)a1;
- (BOOL)loadClustersLineByLineFromDataURL:(id)a0 error:(id *)a1;

@end
