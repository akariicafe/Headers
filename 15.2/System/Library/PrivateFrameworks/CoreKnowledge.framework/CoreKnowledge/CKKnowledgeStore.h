@class NSString, NSURL;

@interface CKKnowledgeStore : NSObject {
    void /* unknown type, empty encoding */ backingStore;
    void /* unknown type, empty encoding */ sparqlQueue;
    void /* unknown type, empty encoding */ location;
}

@property (nonatomic, weak) void /* unknown type, empty encoding */ delegate;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSURL *filePathURL;
@property (nonatomic, readonly) long long hash;

+ (id)userDefaultsKnowledgeStore;
+ (id)inMemoryKnowledgeStore;
+ (id)directoryURL;
+ (id)defaultSynchedKnowledgeStore;
+ (id)synchedKnowledgeStoreWithName:(id)a0;
+ (id)defaultKnowledgeStore;
+ (id)knowledgeStoreWithName:(id)a0;

- (void)dictionaryRepresentationForKeysMatching:(id)a0 completionHandler:(id /* block */)a1;
- (id)dictionaryRepresentationForKeysMatching:(id)a0 error:(id *)a1;
- (void)valuesWithCompletionHandler:(id /* block */)a0;
- (id)valueForKey:(id)a0;
- (void)keysMatching:(id)a0 completionHandler:(id /* block */)a1;
- (void)importTriplesFromFileAtPath:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)removeEntity:(id)a0 error:(id *)a1;
- (id)writeBatch;
- (id)triplesMatching:(id)a0 error:(id *)a1;
- (void)removeValueForKey:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)removeAllValuesAndReturnError:(id *)a0;
- (id)keysMatching:(id)a0 error:(id *)a1;
- (void)setValue:(id)a0 forKey:(id)a1;
- (void)keysWithCompletionHandler:(id /* block */)a0;
- (BOOL)removeValuesMatching:(id)a0 error:(id *)a1;
- (void)inferLinkTo:(id)a0 withPredicate:(id)a1 when:(id)a2 completionHandler:(id /* block */)a3;
- (id)entityWithIdentifier:(id)a0;
- (void)valuesForKeys:(id)a0 completionHandler:(id /* block */)a1;
- (id)dictionaryRepresentationAndReturnError:(id *)a0;
- (id)keysAndReturnError:(id *)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)subgraphWithEntities:(id)a0;
- (id)init;
- (void)dictionaryRepresentationWithCompletionHandler:(id /* block */)a0;
- (BOOL)removeValueForKey:(id)a0 error:(id *)a1;
- (void)setValue:(id)a0 forKey:(id)a1 completionHandler:(id /* block */)a2;
- (id)entitiesAndReturnError:(id *)a0;
- (void)sparqlResultsForQuery:(id)a0 completionHandler:(id /* block */)a1;
- (void)removeEntity:(id)a0 completionHandler:(id /* block */)a1;
- (void)valueForKey:(id)a0 completionHandler:(id /* block */)a1;
- (void)removeAllValuesWithCompletionHandler:(id /* block */)a0;
- (id)valuesAndReturnError:(id *)a0;
- (BOOL)removeValuesForKeys:(id)a0 error:(id *)a1;
- (void)removeValuesForKeys:(id)a0 completionHandler:(id /* block */)a1;
- (void)valuesForKeysMatching:(id)a0 completionHandler:(id /* block */)a1;
- (void)disableSyncAndDeleteCloudDataWithCompletionHandler:(id /* block */)a0;
- (void)triplesMatching:(id)a0 completionHandler:(id /* block */)a1;
- (void)importContentsOfJSONLDAtPath:(id)a0 completionHandler:(id /* block */)a1;
- (id)valuesForKeysMatching:(id)a0 error:(id *)a1;
- (void)removeValuesMatching:(id)a0 completionHandler:(id /* block */)a1;
- (void)entitiesWithCompletionHandler:(id /* block */)a0;
- (BOOL)inferLinkTo:(id)a0 withPredicate:(id)a1 when:(id)a2 error:(id *)a3;

@end
