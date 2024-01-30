@class NSURL, KGDatabase;

@interface KGDegasAllInMemoryGraphStore : KGMemoryGraphStore {
    KGDatabase *_database;
    unsigned long long _transactionCounter;
    NSURL *_url;
}

+ (BOOL)destroyAtURL:(id)a0 error:(id *)a1;
+ (BOOL)migrateFromURL:(id)a0 toURL:(id)a1 error:(id *)a2;
+ (id)_markerFilePathForPersistentStoreFileURL:(id)a0;
+ (BOOL)copyFromURL:(id)a0 toURL:(id)a1 error:(id *)a2;
+ (id)persistentStoreFileExtension;
+ (BOOL)hasMarkerForDiskRepresentationAtURL:(id)a0;
+ (BOOL)setMarkerForDiskRepresentationAtURL:(id)a0;
+ (void)deleteMarkerForDiskRepresentationAtURL:(id)a0;

- (void)beginTransaction;
- (void)close;
- (void).cxx_destruct;
- (unsigned long long)graphVersion;
- (void)enumerateModelNodesWithBlock:(id /* block */)a0;
- (void)enumerateModelEdgesWithBlock:(id /* block */)a0;
- (void)setGraphVersion:(unsigned long long)a0;
- (id)_markerFilePath;
- (BOOL)copyToURL:(id)a0 error:(id *)a1;
- (id)initWithURL:(id)a0;
- (id)url;
- (id)graphIdentifier;
- (void)setMarker;
- (void)deleteMarker;
- (void)commitTransaction;
- (BOOL)hasMarker;
- (unsigned long long)addNodeWithLabels:(id)a0 weight:(float)a1 properties:(id)a2 error:(id *)a3;
- (unsigned long long)addEdgeWithLabels:(id)a0 weight:(float)a1 properties:(id)a2 sourceNodeIdentifier:(unsigned long long)a3 targetNodeIdentifier:(unsigned long long)a4 error:(id *)a5;
- (BOOL)openWithMode:(unsigned long long)a0 error:(id *)a1;
- (BOOL)updateNodeForIdentifier:(unsigned long long)a0 withWeight:(float)a1 error:(id *)a2;
- (BOOL)updateNodeForIdentifier:(unsigned long long)a0 withProperties:(id)a1 error:(id *)a2;
- (BOOL)updateEdgeForIdentifier:(unsigned long long)a0 withWeight:(float)a1 error:(id *)a2;
- (BOOL)updateEdgeForIdentifier:(unsigned long long)a0 withProperties:(id)a1 error:(id *)a2;

@end
