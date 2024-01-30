@class NSString, NSURL;

@interface CKKnowledgeStore : NSObject {
    void /* unknown type, empty encoding */ backingStore;
    void /* unknown type, empty encoding */ sparqlQueue;
    void /* unknown type, empty encoding */ location;
}

@property (nonatomic, retain) void /* unknown type, empty encoding */ delegate;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSURL *filePathURL;
@property (nonatomic, readonly) long long hash;

+ (id)defaultKnowledgeStore;
+ (id)directoryURL;
+ (id)knowledgeStoreWithName:(id)a0;
+ (id)inMemoryKnowledgeStore;
+ (id)defaultSynchedKnowledgeStore;
+ (id)userDefaultsKnowledgeStore;
+ (id)synchedKnowledgeStoreWithName:(id)a0;

- (void)dictionaryRepresentationForKeysMatching:(id)a0 completionHandler:(id /* block */)a1;
- (void)valuesForKeys:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)removeValueForKey:(id)a0 error:(id *)a1;
- (id)init;
- (void).cxx_destruct;
- (void)disableSyncAndDeleteCloudDataWithCompletionHandler:(id /* block */)a0;
- (void)removeEntity:(id)a0 completionHandler:(id /* block */)a1;
- (void)removeValueForKey:(id)a0 completionHandler:(id /* block */)a1;
- (void)removeValuesForKeys:(id)a0 completionHandler:(id /* block */)a1;
- (void)removeValuesMatching:(id)a0 completionHandler:(id /* block */)a1;
- (void)removeAllValuesWithCompletionHandler:(id /* block */)a0;
- (void)setValue:(id)a0 forKey:(id)a1 completionHandler:(id /* block */)a2;
- (id)writeBatch;
- (id)valueForKey:(id)a0;
- (void)importTriplesFromFileAtPath:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)removeEntity:(id)a0 error:(id *)a1;
- (BOOL)removeValuesForKeys:(id)a0 error:(id *)a1;
- (BOOL)removeValuesMatching:(id)a0 error:(id *)a1;
- (BOOL)removeAllValuesAndReturnError:(id *)a0;
- (id)keysAndReturnError:(id *)a0;
- (id)keysMatching:(id)a0 error:(id *)a1;
- (id)valuesAndReturnError:(id *)a0;
- (id)valuesForKeysMatching:(id)a0 error:(id *)a1;
- (BOOL)isEqual:(id)a0;
- (void)entitiesWithCompletionHandler:(id /* block */)a0;
- (void)dictionaryRepresentationWithCompletionHandler:(id /* block */)a0;
- (void)keysWithCompletionHandler:(id /* block */)a0;
- (void)setValue:(id)a0 forKey:(id)a1;
- (id)dictionaryRepresentationAndReturnError:(id *)a0;
- (id)dictionaryRepresentationForKeysMatching:(id)a0 error:(id *)a1;
- (void)keysMatching:(id)a0 completionHandler:(id /* block */)a1;
- (void)valuesWithCompletionHandler:(id /* block */)a0;
- (void)valueForKey:(id)a0 completionHandler:(id /* block */)a1;
- (void)valuesForKeysMatching:(id)a0 completionHandler:(id /* block */)a1;
- (id)entitiesAndReturnError:(id *)a0;
- (id)triplesMatching:(id)a0 error:(id *)a1;
- (void)sparqlResultsForQuery:(id)a0 completionHandler:(id /* block */)a1;
- (id)subgraphWithEntities:(id)a0;
- (void)importContentsOfJSONLDAtPath:(id)a0 completionHandler:(id /* block */)a1;
- (id)entityWithIdentifier:(id)a0;
- (void)triplesMatching:(id)a0 completionHandler:(id /* block */)a1;
- (void)inferLinkTo:(id)a0 withPredicate:(id)a1 when:(id)a2 completionHandler:(id /* block */)a3;
- (BOOL)inferLinkTo:(id)a0 withPredicate:(id)a1 when:(id)a2 error:(id *)a3;

@end
