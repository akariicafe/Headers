@interface KGEdgeChangeRequestWorker : NSObject

+ (BOOL)applyMutationsForRequest:(id)a0 graph:(id)a1 error:(id *)a2;
+ (BOOL)insertEdgeForCreationRequest:(id)a0 graph:(id)a1 error:(id *)a2;
+ (BOOL)deleteEdgesForRemovalRequests:(id)a0 graph:(id)a1 error:(id *)a2;

@end
