@interface TransparencyRPCRequestBuilder : NSObject

+ (id)buildQueryRequest:(id)a0 application:(id)a1 error:(id *)a2;
+ (id)buildPublicKeysRequest:(id)a0 error:(id *)a1;
+ (id)buildConsistencyProofRequest:(id)a0 revisions:(id)a1 error:(id *)a2;
+ (id)buildRevisionLogInclusionProofRequest:(id)a0 logType:(int)a1 revisions:(id)a2 error:(id *)a3;

@end
