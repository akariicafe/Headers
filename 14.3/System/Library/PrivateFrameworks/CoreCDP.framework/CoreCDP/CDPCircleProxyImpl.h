@class NSString, OTClique, CDPContext;

@interface CDPCircleProxyImpl : NSObject <CDPDCircleProxy> {
    OTClique *_clique;
}

@property (readonly, nonatomic) CDPContext *cdpContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithContext:(id)a0;
- (int)_sos_authenticatedCircleStatus:(id *)a0;
- (BOOL)requestToResetCircle:(id *)a0;
- (BOOL)requestToJoinCircle:(id *)a0;
- (void)reportSuccess;
- (BOOL)_registerCredentialsOnlyIfNeeded:(BOOL)a0;
- (void).cxx_destruct;
- (BOOL)removeNonViewAwarePeers:(id *)a0;
- (int)cachedCircleStatus:(id *)a0;
- (BOOL)removeThisDeviceFromCircle:(id *)a0;
- (BOOL)viewMemberForAutofillPasswords:(id *)a0;
- (BOOL)setViewsWithEnableSet:(id)a0 disableSet:(id)a1;
- (id)requestToResetProtectedData:(id *)a0;
- (BOOL)waitForInitialSync:(id *)a0;
- (BOOL)requestToJoinCircleAfterRestore:(id *)a0;
- (unsigned long long)cdpStatusFromSOS:(int)a0;
- (id)generateVerifierWithRecoveryKey:(id)a0 error:(id *)a1;
- (long long)_authenticatedCircleStatus:(id *)a0;
- (BOOL)anyPeerHasEnabledViewsInSet:(id)a0 error:(id *)a1;
- (BOOL)tryRegisteringCredentials;
- (void)waitForUpdate;
- (BOOL)requestToResetCloudKitDataForReason:(id)a0 error:(id *)a1;
- (unsigned long long)cachedCliqueStatus:(id *)a0;
- (BOOL)registerCredentials;
- (id)contextType;
- (BOOL)synchronizeCircleViews;
- (id)peerDeviceNamesByPeerID;
- (void)reportFailure:(id)a0;
- (id)generateRecoveryKeyWithInfo:(id)a0 error:(id *)a1;
- (id)peerId;
- (BOOL)isLastBackupMakingPeer:(id *)a0;
- (unsigned long long)circleStatus:(id *)a0;
- (BOOL)hasNonViewAwarePeers;
- (id)_pairingChannelContext;
- (BOOL)registerCredentialsIfMissing;
- (int)sos_circleStatus:(id *)a0;
- (void)didJoinCircleAfterRecovery:(id)a0;
- (id)pairingChannelInitiator:(id *)a0;
- (unsigned long long)cdpStatusFromOT:(long long)a0;
- (long long)_circleStatus:(id *)a0;
- (id)pairingChannelAcceptor:(id *)a0;
- (BOOL)canAuthenticate;
- (int)_sos_circleStatus:(id *)a0;

@end
