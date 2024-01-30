@class NSXPCConnection;

@interface OTControl : NSObject

@property (retain) NSXPCConnection *connection;
@property BOOL sync;
@property BOOL synchronous;

+ (id)controlObject:(id *)a0;
+ (id)controlObject:(BOOL)a0 error:(id *)a1;

- (void).cxx_destruct;
- (void)reset:(id /* block */)a0;
- (void)dealloc;
- (void)signingKey:(id /* block */)a0;
- (id)getConnection:(id /* block */)a0;
- (id)initWithConnection:(id)a0 sync:(BOOL)a1;
- (void)octagonSigningPublicKey:(id /* block */)a0;
- (void)encryptionKey:(id /* block */)a0;
- (void)restore:(id)a0 dsid:(id)a1 secret:(id)a2 escrowRecordID:(id)a3 reply:(id /* block */)a4;
- (void)octagonEncryptionPublicKey:(id /* block */)a0;
- (void)listOfRecords:(id /* block */)a0;
- (void)listOfEligibleBottledPeerRecords:(id /* block */)a0;
- (void)signIn:(id)a0 container:(id)a1 context:(id)a2 reply:(id /* block */)a3;
- (void)signOut:(id)a0 context:(id)a1 reply:(id /* block */)a2;
- (void)notifyIDMSTrustLevelChangeForContainer:(id)a0 context:(id)a1 reply:(id /* block */)a2;
- (void)rpcEpochWithConfiguration:(id)a0 reply:(id /* block */)a1;
- (void)handleIdentityChangeForSigningKey:(id)a0 ForEncryptionKey:(id)a1 ForPeerID:(id)a2 reply:(id /* block */)a3;
- (void)status:(id)a0 context:(id)a1 reply:(id /* block */)a2;
- (void)rpcPrepareIdentityAsApplicantWithConfiguration:(id)a0 reply:(id /* block */)a1;
- (void)preflightBottledPeer:(id)a0 dsid:(id)a1 reply:(id /* block */)a2;
- (void)rpcVoucherWithConfiguration:(id)a0 peerID:(id)a1 permanentInfo:(id)a2 permanentInfoSig:(id)a3 stableInfo:(id)a4 stableInfoSig:(id)a5 reply:(id /* block */)a6;
- (void)rpcJoinWithConfiguration:(id)a0 vouchData:(id)a1 vouchSig:(id)a2 reply:(id /* block */)a3;
- (void)launchBottledPeer:(id)a0 bottleID:(id)a1 reply:(id /* block */)a2;
- (void)scrubBottledPeer:(id)a0 bottleID:(id)a1 reply:(id /* block */)a2;
- (void)fetchEgoPeerID:(id)a0 context:(id)a1 reply:(id /* block */)a2;
- (void)establish:(id)a0 context:(id)a1 altDSID:(id)a2 reply:(id /* block */)a3;
- (void)fetchCliqueStatus:(id)a0 context:(id)a1 configuration:(id)a2 reply:(id /* block */)a3;
- (void)fetchTrustStatus:(id)a0 context:(id)a1 configuration:(id)a2 reply:(id /* block */)a3;
- (void)startOctagonStateMachine:(id)a0 context:(id)a1 reply:(id /* block */)a2;
- (void)resetAndEstablish:(id)a0 context:(id)a1 altDSID:(id)a2 resetReason:(long long)a3 reply:(id /* block */)a4;
- (void)leaveClique:(id)a0 context:(id)a1 reply:(id /* block */)a2;
- (void)removeFriendsInClique:(id)a0 context:(id)a1 peerIDs:(id)a2 reply:(id /* block */)a3;
- (void)peerDeviceNamesByPeerID:(id)a0 context:(id)a1 reply:(id /* block */)a2;
- (void)fetchAllViableBottles:(id)a0 context:(id)a1 reply:(id /* block */)a2;
- (void)restore:(id)a0 contextID:(id)a1 bottleSalt:(id)a2 entropy:(id)a3 bottleID:(id)a4 reply:(id /* block */)a5;
- (void)fetchEscrowContents:(id)a0 contextID:(id)a1 reply:(id /* block */)a2;
- (void)createRecoveryKey:(id)a0 contextID:(id)a1 recoveryKey:(id)a2 reply:(id /* block */)a3;
- (void)joinWithRecoveryKey:(id)a0 contextID:(id)a1 recoveryKey:(id)a2 reply:(id /* block */)a3;
- (void)healthCheck:(id)a0 context:(id)a1 skipRateLimitingCheck:(BOOL)a2 reply:(id /* block */)a3;
- (void)waitForOctagonUpgrade:(id)a0 context:(id)a1 reply:(id /* block */)a2;
- (void)postCDPFollowupResult:(BOOL)a0 type:(id)a1 error:(id)a2 containerName:(id)a3 contextName:(id)a4 reply:(id /* block */)a5;
- (void)setCDPEnabled:(id)a0 contextID:(id)a1 reply:(id /* block */)a2;
- (void)tapToRadar:(id)a0 description:(id)a1 radar:(id)a2 reply:(id /* block */)a3;
- (void)refetchCKKSPolicy:(id)a0 contextID:(id)a1 reply:(id /* block */)a2;
- (void)getCDPStatus:(id)a0 contextID:(id)a1 reply:(id /* block */)a2;
- (void)fetchEscrowRecords:(id)a0 contextID:(id)a1 forceFetch:(BOOL)a2 reply:(id /* block */)a3;
- (void)setUserControllableViewsSyncStatus:(id)a0 contextID:(id)a1 enabled:(BOOL)a2 reply:(id /* block */)a3;
- (void)invalidateEscrowCache:(id)a0 contextID:(id)a1 reply:(id /* block */)a2;
- (void)fetchUserControllableViewsSyncStatus:(id)a0 contextID:(id)a1 reply:(id /* block */)a2;

@end
