@interface KGNodeChangeRequestWorker : NSObject

+ (BOOL)insertNodeForCreationRequest:(id)a0 graph:(id)a1 error:(id *)a2;
+ (BOOL)applyMutationsForRequest:(id)a0 graph:(id)a1 error:(id *)a2;
+ (BOOL)deleteNodesForRemovalRequests:(id)a0 graph:(id)a1 error:(id *)a2;

@end
