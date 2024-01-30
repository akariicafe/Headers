@class KTLogClient, NSString, KTApplicationPublicKeyStore, TransparencyManagedDataStore;

@interface KTContextVerifier : NSObject

@property (retain) KTApplicationPublicKeyStore *applicationKeyStore;
@property (retain) TransparencyManagedDataStore *dataStore;
@property (retain) NSString *applicationID;
@property (retain) KTLogClient *logClient;

+ (BOOL)verifyServerLoggableDatas:(id)a0 againstSyncedLoggableDatas:(id)a1 error:(id *)a2;
+ (void)addDeviceIdVRFOutput:(id)a0 toLoggableDatas:(id)a1 forDeviceId:(id)a2;
+ (void)addClientDataVRFOutput:(id)a0 toLoggableDatas:(id)a1 forClientData:(id)a2;
+ (long long)verifyMutation:(id)a0 record:(id)a1;
+ (BOOL)verifyReceivedWitnessesForLoggableDatas:(id)a0 error:(id *)a1;

- (void).cxx_destruct;
- (BOOL)verifyRevisionLogInclusionProofResponse:(id)a0 error:(id *)a1;
- (unsigned long long)verifyConsistencyProofResponse:(id)a0 startRevision:(long long)a1 error:(id *)a2;
- (void)verifySTHs:(id)a0;
- (void)checkHeadEpoch:(id)a0 isMapHead:(BOOL)a1;
- (unsigned long long)verifyUriWitness:(id)a0 uri:(id)a1 error:(id *)a2;
- (BOOL)verifyResponseAccountId:(id)a0 requestAccountId:(id)a1 error:(id *)a2;
- (unsigned long long)verifyDeviceWitnesses:(id)a0 requestDevices:(id)a1 loggableDatas:(id)a2 uriVRFOutput:(id)a3 error:(id *)a4;
- (unsigned long long)verifyInclusionProof:(id)a0 mapLeaf:(id *)a1 error:(id *)a2;
- (void)verifyKTSMTsMerged:(id)a0 queryResponse:(id)a1 uri:(id)a2 accountId:(id)a3;
- (unsigned long long)verifySMTs:(id)a0 request:(id)a1 error:(id *)a2;
- (unsigned long long)verifyDeviceWitness:(id)a0 deviceId:(id)a1 uriVRFOutput:(id)a2 error:(id *)a3;
- (unsigned long long)verifyClientDataWitness:(id)a0 clientData:(id)a1 uriVRFOutput:(id)a2 error:(id *)a3;
- (void)failSMTsIfOverMMD:(id)a0 proof:(id)a1 underlyingError:(id)a2 errorCode:(long long)a3 serverHint:(id)a4;
- (void)failSMTsIfOverMMD:(id)a0 proof:(id)a1 underlyingError:(id)a2 errorCode:(long long)a3 savePendingError:(BOOL)a4 serverHint:(id)a5;
- (void)verifyKTSMTs:(id)a0;
- (id)initWithApplicationKeyStore:(id)a0 dataStore:(id)a1 applicationID:(id)a2;
- (id)createErrorFromSMTFailure:(id)a0 underlyingError:(id)a1;
- (id)createChainOfErrorsFromSMTFailures:(id)a0;
- (void)reportVerifySMTFailure:(id)a0 serverHint:(id)a1 error:(id)a2;
- (void)deleteSMT:(id)a0 error:(id)a1;
- (unsigned long long)verifyClientDataWitnesses:(id)a0 clientDatas:(id)a1 loggableDatas:(id)a2 uriVRFOutput:(id)a3 error:(id *)a4;
- (BOOL)setInclusionVerifiedState:(unsigned long long)a0 perApplicationTreeLogEntry:(id)a1 failure:(id)a2 error:(id *)a3;
- (BOOL)setInclusionVerifiedState:(unsigned long long)a0 topLevelTreeLogEntry:(id)a1 failure:(id)a2 error:(id *)a3;
- (BOOL)setInclusionVerifiedState:(unsigned long long)a0 logEntry:(id)a1 failure:(id)a2 error:(id *)a3;
- (unsigned long long)verifyRevisionLogProofLogEntry:(id)a0 patSTH:(id *)a1 error:(id *)a2;
- (unsigned long long)verifyRevisionLogTopLevelProof:(id)a0 patSTH:(id)a1 error:(id *)a2;
- (BOOL)areSMTsOverMMD:(id)a0;

@end
