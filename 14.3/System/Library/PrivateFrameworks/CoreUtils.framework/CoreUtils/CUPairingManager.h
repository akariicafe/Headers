@class NSXPCListenerEndpoint, NSXPCConnection, NSObject;
@protocol OS_dispatch_queue;

@interface CUPairingManager : NSObject <CUPairingManagerXPCInterface> {
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    BOOL _monitoring;
    unsigned long long _monitorOptions;
    NSXPCConnection *_xpcCnx;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) id /* block */ identityCreatedHandler;
@property (copy, nonatomic) id /* block */ identityDeletedHandler;
@property (copy, nonatomic) id /* block */ interruptionHandler;
@property (copy, nonatomic) id /* block */ invalidationHandler;
@property (copy, nonatomic) id /* block */ pairedPeerAddedHandler;
@property (copy, nonatomic) id /* block */ pairedPeerRemovedHandler;
@property (copy, nonatomic) id /* block */ pairedPeerChangedHandler;
@property (nonatomic) BOOL targetUserSession;
@property (retain, nonatomic) NSXPCListenerEndpoint *testListenerEndpoint;

- (void)_showWithCompletion:(id /* block */)a0;
- (int)_ensureXPCStarted;
- (id)init;
- (void).cxx_destruct;
- (void)startMonitoringWithOptions:(unsigned long long)a0;
- (void)dealloc;
- (void)showWithCompletion:(id /* block */)a0;
- (void)_savePairedPeer:(id)a0 options:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)pairingIdentityDeletedWithOptions:(unsigned long long)a0;
- (void)_findPairedPeer:(id)a0 options:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)_getPairingIdentityWithOptions:(unsigned long long)a0 tryCount:(unsigned int)a1 completion:(id /* block */)a2;
- (void)_invalidated;
- (void)getPairedPeersWithOptions:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)_getPairedPeersWithOptions:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)pairingIdentityCreated:(id)a0 options:(unsigned long long)a1;
- (void)_startMonitoringWithOptions:(unsigned long long)a0;
- (void)findPairedPeer:(id)a0 options:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)pairedPeerAdded:(id)a0 options:(unsigned long long)a1;
- (void)deletePairingIdentityWithOptions:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)_invalidate;
- (void)pairedPeerRemoved:(id)a0 options:(unsigned long long)a1;
- (void)removePairedPeer:(id)a0 options:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)getPairingIdentityWithOptions:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)_deletePairingIdentityWithOptions:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)_removePairedPeer:(id)a0 options:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)pairedPeerChanged:(id)a0 options:(unsigned long long)a1;
- (void)_interrupted;
- (void)savePairedPeer:(id)a0 options:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)invalidate;

@end
