@class KTPublicKeyStore, NSMutableDictionary, NSDictionary, TransparencyManagedDataStore;

@interface KTContextStore : NSObject

@property (retain) KTPublicKeyStore *keyStore;
@property (retain) TransparencyManagedDataStore *dataStore;
@property (retain) NSMutableDictionary *_contexts;
@property (readonly) NSDictionary *contexts;

- (void)contextForApplication:(id)a0 logClient:(id)a1 fetchState:(BOOL)a2 completionHandler:(id /* block */)a3;
- (void)forcedConfigure:(BOOL)a0 logClient:(id)a1 applicationHandler:(id /* block */)a2 completionHandler:(id /* block */)a3;
- (void)validatePeer:(id)a0 application:(id)a1 logClient:(id)a2 revalidate:(BOOL)a3 completionHandler:(id /* block */)a4;
- (void)runDutyCycleConfigurationStepForActivity:(id)a0 logClient:(id)a1;
- (void)validateSelf:(id)a0 application:(id)a1 logClient:(id)a2 completionHandler:(id /* block */)a3;
- (void)failRequestDownload:(id)a0 application:(id)a1 failure:(id)a2 retry:(BOOL)a3 logClient:(id)a4;
- (void)configureWithClient:(id)a0 force:(BOOL)a1 applicationHandler:(id /* block */)a2 completionHandler:(id /* block */)a3;
- (void)retrieveTLTSTH:(id)a0 block:(id /* block */)a1;
- (void)verifyHeadInclusionDownload:(id)a0 application:(id)a1 logClient:(id)a2;
- (void)verifyTLTConsistencyAndGarbageCollectSTHs:(id)a0;
- (void)verifyHeadConsistencyDownload:(id)a0 application:(id)a1 logClient:(id)a2;
- (BOOL)runDutyCycleForActivity:(id)a0 logClient:(id)a1;
- (BOOL)logSharedMetrics;
- (void)configureWithClient:(id)a0 applicationHandler:(id /* block */)a1 completionHandler:(id /* block */)a2;
- (void)verifyRequestDownload:(id)a0 application:(id)a1 logClient:(id)a2;
- (void)receivedSTHsFromPeers:(id)a0 logClient:(id)a1 block:(id /* block */)a2;
- (void)clearApplicationState:(id)a0 logClient:(id)a1 completionBlock:(id /* block */)a2;
- (void)signData:(id)a0 application:(id)a1 logClient:(id)a2 completionBlock:(id /* block */)a3;
- (void).cxx_destruct;
- (id)createContextForApplication:(id)a0 dataStore:(id)a1 logClient:(id)a2;
- (void)validateEnrollment:(id)a0 application:(id)a1 logClient:(id)a2 completionHandler:(id /* block */)a3;
- (id)initWithDataStore:(id)a0 keyStore:(id)a1;
- (void)failSMTInclusionDownload:(id)a0 application:(id)a1 failure:(id)a2 retry:(BOOL)a3 logClient:(id)a4;
- (void)verifySMTInclusionDownload:(id)a0 application:(id)a1 logClient:(id)a2;
- (void)failHeadDownload:(id)a0 application:(id)a1 failure:(id)a2 retry:(BOOL)a3 logClient:(id)a4;
- (id)serializeTranscripts;
- (void)validatePeer:(id)a0 application:(id)a1 logClient:(id)a2 completionHandler:(id /* block */)a3;
- (void)updateRequest:(id)a0 serverDatas:(id)a1 syncedDatas:(id)a2 accountKey:(id)a3 queryRequest:(id)a4 queryResponse:(id)a5 logClient:(id)a6 error:(id *)a7;
- (void)runDutyCycleProcessingStepForActivity:(id)a0 context:(id)a1 logClient:(id)a2;
- (id)createContextForTLT:(id)a0 logClient:(id)a1;
- (void)storeContext:(id)a0 application:(id)a1;
- (void)rollKeyForApplication:(id)a0 logClient:(id)a1 completionBlock:(id /* block */)a2;

@end
