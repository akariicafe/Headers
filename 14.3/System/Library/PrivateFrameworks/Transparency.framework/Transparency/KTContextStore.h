@class TransparencyManagedDataStore, NSMutableDictionary, KTPublicKeyStore;

@interface KTContextStore : NSObject

@property (retain) KTPublicKeyStore *keyStore;
@property (retain) TransparencyManagedDataStore *dataStore;
@property (retain) NSMutableDictionary *contexts;

- (void).cxx_destruct;
- (void)forcedConfigure:(BOOL)a0 logClient:(id)a1 completionHandler:(id /* block */)a2;
- (void)storeContext:(id)a0 application:(id)a1 completionHandler:(id /* block */)a2;
- (void)createContextForApplication:(id)a0 dataStore:(id)a1 logClient:(id)a2 completionHandler:(id /* block */)a3;
- (void)createContextForTLT:(id)a0 logClient:(id)a1 completionHandler:(id /* block */)a2;
- (void)configureWithClient:(id)a0 completionHandler:(id /* block */)a1;
- (void)contextForApplication:(id)a0 logClient:(id)a1 fetchState:(BOOL)a2 completionHandler:(id /* block */)a3;
- (void)configureWithClient:(id)a0 force:(BOOL)a1 completionHandler:(id /* block */)a2;
- (BOOL)logSharedMetrics;
- (void)runDutyCycleProcessingStepForActivity:(id)a0 context:(id)a1 logClient:(id)a2;
- (void)verifyTLTConsistencyAndGarbageCollectSTHs:(id)a0;
- (void)runDutyCycleConfigurationStepForActivity:(id)a0 logClient:(id)a1;
- (id)initWithDataStore:(id)a0 keyStore:(id)a1;
- (void)validatePeer:(id)a0 application:(id)a1 logClient:(id)a2 completionHandler:(id /* block */)a3;
- (void)validateSelf:(id)a0 application:(id)a1 logClient:(id)a2 completionHandler:(id /* block */)a3;
- (void)validateEnrollment:(id)a0 application:(id)a1 logClient:(id)a2 completionHandler:(id /* block */)a3;
- (void)updateRequest:(id)a0 serverDatas:(id)a1 syncedDatas:(id)a2 queryRequest:(id)a3 queryResponse:(id)a4 logClient:(id)a5 error:(id *)a6;
- (void)clearApplicationState:(id)a0 logClient:(id)a1 completionBlock:(id /* block */)a2;
- (void)verifyHeadInclusionDownload:(id)a0 application:(id)a1 logClient:(id)a2;
- (void)verifyHeadConsistencyDownload:(id)a0 application:(id)a1 logClient:(id)a2;
- (void)failHeadDownload:(id)a0 application:(id)a1 failure:(id)a2 retry:(BOOL)a3 logClient:(id)a4;
- (void)verifySMTInclusionDownload:(id)a0 application:(id)a1 logClient:(id)a2;
- (void)failSMTInclusionDownload:(id)a0 application:(id)a1 failure:(id)a2 retry:(BOOL)a3 logClient:(id)a4;
- (void)verifyRequestDownload:(id)a0 application:(id)a1 logClient:(id)a2;
- (void)failRequestDownload:(id)a0 application:(id)a1 failure:(id)a2 retry:(BOOL)a3 logClient:(id)a4;
- (BOOL)runDutyCycleForActivity:(id)a0 logClient:(id)a1;
- (id)serializeTranscripts;

@end
