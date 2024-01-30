@class NSString, OTClique, CDPContext;

@interface CDPCircleProxyImpl : NSObject <CDPDCircleProxy> {
    OTClique *_clique;
}

@property (readonly, nonatomic) CDPContext *cdpContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)contextType;
- (void)recoverOctagonUsingCustodianInfo:(id)a0 completion:(id /* block */)a1;
- (BOOL)requestToJoinCircle:(id *)a0;
- (id)initWithContext:(id)a0 clique:(id)a1;
- (int)_sos_circleStatus:(id *)a0;
- (BOOL)fetchUserControllableViewsSyncingEnabled:(id *)a0;
- (unsigned long long)combinedCachedCircleStatus:(id *)a0;
- (long long)_cliqueStatus:(id *)a0;
- (id)pairingChannelInitiator;
- (void)reportSuccess;
- (BOOL)_registerCredentialsOnlyIfNeeded:(BOOL)a0;
- (int)nonCachedSOSCircleStatus:(id *)a0;
- (BOOL)registerCredentialsIfMissing;
- (BOOL)removeNonViewAwarePeers:(id *)a0;
- (void)reportFailure:(id)a0;
- (BOOL)requestToJoinCircleAfterRestore:(id *)a0;
- (BOOL)waitForInitialSync:(id *)a0;
- (BOOL)anyPeerHasEnabledViewsInSet:(id)a0 error:(id *)a1;
- (BOOL)removeThisDeviceFromCircle:(id *)a0;
- (BOOL)registerCredentials;
- (BOOL)isLastBackupMakingPeer:(id *)a0;
- (BOOL)hasNonViewAwarePeers;
- (id)generateVerifierWithRecoveryKey:(id)a0 error:(id *)a1;
- (BOOL)isRecoveryKeySet:(id)a0 error:(id *)a1;
- (id)generateRecoveryKeyWithInfo:(id)a0 error:(id *)a1;
- (id)peerDeviceNamesByPeerID;
- (BOOL)tryRegisteringCredentials;
- (BOOL)synchronizeCircleViews;
- (id)initWithContext:(id)a0;
- (unsigned long long)cdpStatusFromSOS:(int)a0;
- (void)waitForUpdate;
- (id)pairingChannelAcceptor;
- (long long)_authenticatedCliqueStatus:(id *)a0;
- (unsigned long long)cdpStatusFromOT:(long long)a0;
- (int)cachedSOSCircleStatus:(id *)a0;
- (id)requestToResetProtectedData:(id *)a0;
- (int)sos_circleStatus:(id *)a0;
- (BOOL)canAuthenticate;
- (void)didJoinCircleAfterRecovery:(id)a0;
- (int)_sos_authenticatedCircleStatus:(id *)a0;
- (unsigned long long)cachedCliqueStatus:(id *)a0;
- (void).cxx_destruct;
- (BOOL)setUserControllableViewsSyncStatus:(BOOL)a0 error:(id *)a1;
- (id)_pairingChannelContext;
- (id)peerId;
- (unsigned long long)combinedCircleStatus:(id *)a0;

@end
