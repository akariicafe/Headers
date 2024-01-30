@class NSObject, NSXPCConnection, CUPairingDaemon;
@protocol OS_dispatch_queue;

@interface CUPairingXPCConnection : NSObject <CUPairingDaemonXPCInterface> {
    CUPairingDaemon *_daemon;
    BOOL _pmEntitledDeleteIdentity;
    BOOL _pmEntitledHomeKit;
    BOOL _pmEntitledRead;
    BOOL _pmEntitledRemoveAdmin;
    BOOL _pmEntitledRemovePeer;
    BOOL _pmEntitledWrite;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    BOOL _monitoring;
    NSXPCConnection *_xpcCnx;
}

- (void)connectionInvalidated;
- (int)_entitled:(id)a0 state:(BOOL *)a1 label:(id)a2;
- (void).cxx_destruct;
- (void)startMonitoringWithOptions:(unsigned long long)a0;
- (void)showWithCompletion:(id /* block */)a0;
- (void)getPairedPeersWithOptions:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)findPairedPeer:(id)a0 options:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)deletePairingIdentityWithOptions:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)removePairedPeer:(id)a0 options:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)getPairingIdentityWithOptions:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)savePairedPeer:(id)a0 options:(unsigned long long)a1 completion:(id /* block */)a2;

@end
