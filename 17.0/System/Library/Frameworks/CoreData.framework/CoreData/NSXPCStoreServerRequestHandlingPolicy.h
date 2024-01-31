@interface NSXPCStoreServerRequestHandlingPolicy : NSObject

+ (void)initialize;

- (id)allowableClassesForClientWithContext:(id)a0;
- (id)restrictingPullChangeHistoryPredicateForEntity:(id)a0 fromClientWithContext:(id)a1;
- (id)restrictingReadPredicateForEntity:(id)a0 fromClientWithContext:(id)a1;
- (id)processRequest:(id)a0 fromClientWithContext:(id)a1 error:(id *)a2;
- (id)processFaultForObjectWithID:(id)a0 fromClientWithContext:(id)a1 error:(id *)a2;
- (id)processFaultForRelationshipWithName:(id)a0 onObjectWithID:(id)a1 fromClientWithContext:(id)a2 error:(id *)a3;
- (id)restrictingWritePredicateForEntity:(id)a0 fromClientWithContext:(id)a1;
- (BOOL)shouldAcceptMetadataChangesFromClientWithContext:(id)a0;
- (BOOL)shouldAcceptConnectionsFromClientWithContext:(id)a0;

@end
