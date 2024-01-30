@class NSURL, KGDatabase;

@interface KGDegasAllInMemoryGraphStore : KGMemoryGraphStore {
    KGDatabase *_database;
    unsigned long long _transactionCounter;
    NSURL *_url;
}

+ (id)persistentStoreFileExtension;
+ (BOOL)copyFromURL:(id)a0 toURL:(id)a1 error:(id *)a2;
+ (BOOL)destroyAtURL:(id)a0 error:(id *)a1;
+ (BOOL)migrateFromURL:(id)a0 toURL:(id)a1 error:(id *)a2;

- (void)beginTransaction;
- (id)url;
- (void)close;
- (id)initWithURL:(id)a0;
- (BOOL)addEdges:(id)a0 error:(id *)a1;
- (void)rollbackTransaction;
- (void)commitTransaction;
- (void)setGraphVersion:(unsigned long long)a0;
- (BOOL)copyToURL:(id)a0 error:(id *)a1;
- (BOOL)updateEdgeForIdentifier:(unsigned long long)a0 withWeight:(float)a1 error:(id *)a2;
- (BOOL)addNodes:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (unsigned long long)graphVersion;
- (BOOL)openWithMode:(unsigned long long)a0 error:(id *)a1;
- (BOOL)updateNodeForIdentifier:(unsigned long long)a0 withProperties:(id)a1 error:(id *)a2;
- (id)graphIdentifier;
- (BOOL)updateNodeForIdentifier:(unsigned long long)a0 withWeight:(float)a1 error:(id *)a2;
- (BOOL)updateEdgeForIdentifier:(unsigned long long)a0 withProperties:(id)a1 error:(id *)a2;
- (void)enumerateModelNodesWithBlock:(id /* block */)a0;
- (void)enumerateModelEdgesWithBlock:(id /* block */)a0;

@end
