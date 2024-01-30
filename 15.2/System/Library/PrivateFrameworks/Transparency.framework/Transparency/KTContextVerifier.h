@class KTLogClient, NSString, KTApplicationPublicKeyStore, TransparencyManagedDataStore;

@interface KTContextVerifier : NSObject

@property (retain) KTApplicationPublicKeyStore *applicationKeyStore;
@property (retain) TransparencyManagedDataStore *dataStore;
@property (retain) NSString *applicationID;
@property (retain) KTLogClient *logClient;

+ (long long)verifyMutation:(id)a0 record:(id)a1;
+ (BOOL)verifyLoggableDataSignatures:(id)a0 accountKey:(id)a1 error:(id *)a2;
+ (BOOL)verifyServerLoggableDatas:(id)a0 againstSyncedLoggableDatas:(id)a1 error:(id *)a2;

- (unsigned long long)verifyUriWitness:(id)a0 uri:(id)a1 error:(id *)a2;
- (void)failSMTsIfOverMMD:(id)a0 proof:(id)a1 underlyingError:(id)a2 errorCode:(long long)a3 serverHint:(id)a4;
- (unsigned long long)verifyConsistencyProofResponse:(id)a0 startRevision:(long long)a1 receivedRevisions:(id)a2 error:(id *)a3;
- (unsigned long long)verifyInclusionProof:(id)a0 mapLeaf:(id *)a1 error:(id *)a2;
- (void)failSMTsIfOverMMD:(id)a0 proof:(id)a1 underlyingError:(id)a2 errorCode:(long long)a3 savePendingError:(BOOL)a4 serverHint:(id)a5;
- (void)reportVerifySMTFailure:(id)a0 serverHint:(id)a1 error:(id)a2;
- (BOOL)verifyRevisionLogInclusionProofResponse:(id)a0 receivedRevisions:(id)a1 error:(id *)a2;
- (BOOL)areSMTsOverMMD:(id)a0;
- (unsigned long long)verifyAccountKeyWitness:(id)a0 accountKey:(id)a1 error:(id *)a2;
- (id)createChainOfErrorsFromSMTFailures:(id)a0;
- (id)initWithApplicationKeyStore:(id)a0 dataStore:(id)a1 applicationID:(id)a2;
- (void)verifyKTSMTsMerged:(id)a0 queryResponse:(id)a1 uri:(id)a2;
- (void)processSTHsFromGossipPeers:(id)a0 error:(id *)a1;
- (unsigned long long)verifyRevisionLogTopLevelProof:(id)a0 patSTH:(id)a1 error:(id *)a2;
- (void).cxx_destruct;
- (unsigned long long)verifyLogConsistencyResponse:(id)a0 startRevision:(long long)a1 receivedRevisions:(id)a2 forwards:(BOOL)a3 serverHint:(id)a4 error:(id *)a5;
- (unsigned long long)verifyRevisionLogProofLogEntry:(id)a0 patSTH:(id *)a1 error:(id *)a2;
- (void)checkHeadEpoch:(id)a0;
- (unsigned long long)verifySMTs:(id)a0 request:(id)a1 error:(id *)a2;
- (id)createErrorFromSMTFailure:(id)a0 underlyingError:(id)a1;
- (BOOL)setInclusionVerifiedState:(unsigned long long)a0 logEntry:(id)a1 failure:(id)a2 error:(id *)a3;
- (void)verifySTHs:(id)a0;
- (BOOL)setInclusionVerifiedState:(unsigned long long)a0 perApplicationTreeLogEntry:(id)a1 failure:(id)a2 error:(id *)a3;
- (void)deleteSMT:(id)a0 error:(id)a1;
- (void)reportVerifySMTFailure:(id)a0 serverHint:(id)a1 uri:(id)a2 accountKey:(id)a3 error:(id)a4;
- (BOOL)setInclusionVerifiedState:(unsigned long long)a0 topLevelTreeLogEntry:(id)a1 failure:(id)a2 error:(id *)a3;
- (void)verifyKTSMTs:(id)a0;

@end
