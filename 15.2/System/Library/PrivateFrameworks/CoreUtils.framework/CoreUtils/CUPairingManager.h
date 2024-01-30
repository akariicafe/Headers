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
@property (nonatomic) unsigned int targetUserID;
@property (retain, nonatomic) NSXPCListenerEndpoint *testListenerEndpoint;

- (void)_deletePairingIdentityWithOptions:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)_savePairedPeer:(id)a0 options:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)deletePairingIdentityWithOptions:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)pairedPeerAdded:(id)a0 options:(unsigned long long)a1;
- (void)showWithCompletion:(id /* block */)a0;
- (void)savePairedPeer:(id)a0 options:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)_invalidate;
- (void)pairedPeerChanged:(id)a0 options:(unsigned long long)a1;
- (void)findPairedPeer:(id)a0 options:(unsigned long long)a1 completion:(id /* block */)a2;
- (int)_ensureXPCStarted;
- (void)_startMonitoringWithOptions:(unsigned long long)a0;
- (void)startMonitoringWithOptions:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)init;
- (void)pairingIdentityCreated:(id)a0 options:(unsigned long long)a1;
- (void)removePairedPeer:(id)a0 options:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)pairingIdentityDeletedWithOptions:(unsigned long long)a0;
- (void)pairedPeerRemoved:(id)a0 options:(unsigned long long)a1;
- (void)invalidate;
- (void)_getPairingIdentityWithOptions:(unsigned long long)a0 tryCount:(unsigned int)a1 completion:(id /* block */)a2;
- (void)_findPairedPeer:(id)a0 options:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)_interrupted;
- (void)getPairedPeersWithOptions:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)_getPairedPeersWithOptions:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)_invalidated;
- (void)dealloc;
- (void)_showWithCompletion:(id /* block */)a0;
- (void)_removePairedPeer:(id)a0 options:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)getPairingIdentityWithOptions:(unsigned long long)a0 completion:(id /* block */)a1;

@end
