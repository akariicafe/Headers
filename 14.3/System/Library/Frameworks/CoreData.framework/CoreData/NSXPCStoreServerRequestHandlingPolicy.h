@interface NSXPCStoreServerRequestHandlingPolicy : NSObject

+ (void)initialize;

- (id)processObtainRequest:(id)a0 inContext:(id)a1 error:(id *)a2;
- (id)restrictingReadPredicateForEntity:(id)a0 fromClientWithContext:(id)a1;
- (id)_prefetchRelationshipKey:(id)a0 sourceEntityDescription:(id)a1 sourceObjectIDs:(id)a2 prefetchRelationshipKeys:(id)a3 inContext:(id)a4;
- (id)processBatchInsertRequest:(id)a0 fromClientWithContext:(id)a1 error:(id *)a2;
- (id)restrictingPullChangeHistoryPredicateForEntity:(id)a0 fromClientWithContext:(id)a1;
- (id)processBatchUpdateRequest:(id)a0 fromClientWithContext:(id)a1 error:(id *)a2;
- (id)processFetchRequest:(id)a0 fromClientWithContext:(id)a1 error:(id *)a2;
- (id)processBatchDeleteRequest:(id)a0 fromClientWithContext:(id)a1 error:(id *)a2;
- (id)_coreFaultForObjectWithID:(id)a0 fromClientWithContext:(id)a1 error:(id *)a2;
- (id)restrictingWritePredicateForEntity:(id)a0 fromClientWithContext:(id)a1;
- (id)processSaveRequest:(id)a0 fromClientWithContext:(id)a1 error:(id *)a2;
- (BOOL)shouldAcceptConnectionsFromClientWithContext:(id)a0;
- (id)prefetchRelationships:(id)a0 forFetch:(id)a1 sourceOIDs:(id)a2 fromClientWithContext:(id)a3;
- (id)processFaultForRelationshipWithName:(id)a0 onObjectWithID:(id)a1 fromClientWithContext:(id)a2 error:(id *)a3;
- (BOOL)shouldAcceptMetadataChangesFromClientWithContext:(id)a0;
- (id)processFaultForObjectWithID:(id)a0 fromClientWithContext:(id)a1 error:(id *)a2;
- (id)processRequest:(id)a0 fromClientWithContext:(id)a1 error:(id *)a2;
- (id)_coreProcessFetchRequest:(id)a0 fromClientWithContext:(id)a1 error:(id *)a2;
- (id)getIDsForEntity:(id)a0 count:(id)a1 inContext:(id)a2 error:(id *)a3;
- (id)processPersistentHistoryRequest:(id)a0 fromClientWithContext:(id)a1 error:(id *)a2;
- (id)processFetchResults:(id)a0 prefetchedObjects:(id)a1 ofType:(unsigned long long)a2;
- (id)processRelationshipSourceObjectID:(id)a0 fromClientWithContext:(id)a1 error:(id *)a2;

@end
