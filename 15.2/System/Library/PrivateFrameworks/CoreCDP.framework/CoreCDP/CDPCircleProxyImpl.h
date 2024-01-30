@class NSString, OTClique, CDPContext;

@interface CDPCircleProxyImpl : NSObject <CDPDCircleProxy> {
    OTClique *_clique;
}

@property (readonly, nonatomic) CDPContext *cdpContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)_cliqueStatus:(id *)a0;
- (BOOL)registerCredentials;
- (BOOL)requestToJoinCircle:(id *)a0;
- (id)pairingChannelInitiator;
- (BOOL)requestToJoinCircleAfterRestore:(id *)a0;
- (id)peerDeviceNamesByPeerID;
- (BOOL)removeNonViewAwarePeers:(id *)a0;
- (id)initWithContext:(id)a0;
- (BOOL)isLastBackupMakingPeer:(id *)a0;
- (long long)_authenticatedCliqueStatus:(id *)a0;
- (int)_sos_circleStatus:(id *)a0;
- (BOOL)_registerCredentialsOnlyIfNeeded:(BOOL)a0;
- (void)reportFailure:(id)a0;
- (void)waitForUpdate;
- (BOOL)registerCredentialsIfMissing;
- (unsigned long long)combinedCachedCircleStatus:(id *)a0;
- (BOOL)anyPeerHasEnabledViewsInSet:(id)a0 error:(id *)a1;
- (unsigned long long)cachedCliqueStatus:(id *)a0;
- (unsigned long long)combinedCircleStatus:(id *)a0;
- (BOOL)fetchUserControllableViewsSyncingEnabled:(id *)a0;
- (int)cachedSOSCircleStatus:(id *)a0;
- (id)_pairingChannelContext;
- (void).cxx_destruct;
- (BOOL)setUserControllableViewsSyncStatus:(BOOL)a0 error:(id *)a1;
- (BOOL)canAuthenticate;
- (BOOL)removeThisDeviceFromCircle:(id *)a0;
- (void)didJoinCircleAfterRecovery:(id)a0;
- (void)reportSuccess;
- (unsigned long long)cdpStatusFromOT:(long long)a0;
- (id)peerId;
- (void)recoverOctagonUsingCustodianInfo:(id)a0 completion:(id /* block */)a1;
- (int)sos_circleStatus:(id *)a0;
- (BOOL)hasNonViewAwarePeers;
- (BOOL)tryRegisteringCredentials;
- (id)generateVerifierWithRecoveryKey:(id)a0 error:(id *)a1;
- (id)contextType;
- (int)_sos_authenticatedCircleStatus:(id *)a0;
- (unsigned long long)cdpStatusFromSOS:(int)a0;
- (BOOL)waitForInitialSync:(id *)a0;
- (id)requestToResetProtectedData:(id *)a0;
- (id)pairingChannelAcceptor;
- (id)generateRecoveryKeyWithInfo:(id)a0 error:(id *)a1;
- (BOOL)synchronizeCircleViews;
- (int)nonCachedSOSCircleStatus:(id *)a0;

@end
