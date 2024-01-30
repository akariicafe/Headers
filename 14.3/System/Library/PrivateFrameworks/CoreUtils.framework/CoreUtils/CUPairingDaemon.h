@class NSXPCListenerEndpoint, NSString, NSXPCListener, NSData, NSMutableSet, NSObject, CUHomeKitManager;
@protocol OS_dispatch_queue;

@interface CUPairingDaemon : NSObject <NSXPCListenerDelegate> {
    CUHomeKitManager *_homeKitManager;
    int _rpIdentityNotifier;
    NSData *_rpSelfIRK;
    unsigned long long _stateHandle;
    NSMutableSet *_xpcConnections;
    NSXPCListener *_xpcListener;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (readonly, nonatomic) NSXPCListenerEndpoint *testListenerEndpoint;
@property (nonatomic) BOOL testMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedPairingDaemon;

- (id)detailedDescription;
- (id)_copyPairedPeersWithOptions:(unsigned long long)a0 error:(int *)a1;
- (id)init;
- (id)_copyHomeKitWithOptions:(unsigned long long)a0 error:(int *)a1;
- (void).cxx_destruct;
- (id)findPairedPeer:(id)a0 options:(unsigned long long)a1 error:(int *)a2;
- (int)savePairedPeer:(id)a0 options:(unsigned long long)a1 removeAdminAllowed:(BOOL)a2;
- (id)_copyIdentityWithOptions:(unsigned long long)a0 error:(int *)a1;
- (void)reset;
- (id)_findHomeKitPairedPeer:(id)a0 options:(unsigned long long)a1 error:(int *)a2;
- (void)dealloc;
- (void)_removeDups:(id)a0;
- (void)_rpIdentityUpdate;
- (int)removePairedPeer:(id)a0 options:(unsigned long long)a1 removeAdminAllowed:(BOOL)a2;
- (int)_removePairedPeer:(id)a0 options:(unsigned long long)a1 removeAdminAllowed:(BOOL)a2;
- (int)removePairedPeer:(id)a0 options:(unsigned long long)a1;
- (id)_copyHomeKitWithOptionsHAP:(unsigned long long)a0 error:(int *)a1;
- (void)_activate;
- (id)_copyOrCreateWithOptions:(unsigned long long)a0 error:(int *)a1;
- (id)_findPairedPeer:(id)a0 options:(unsigned long long)a1 error:(int *)a2;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)activate;
- (id)copyPairedPeersWithOptions:(unsigned long long)a0 error:(int *)a1;
- (id)_copyHomeKitWithOptionsKeychain:(unsigned long long)a0 error:(int *)a1;
- (void)_invalidate;
- (int)_savePairedPeer:(id)a0 options:(unsigned long long)a1 removeAdminAllowed:(BOOL)a2;
- (int)_saveIdentity:(id)a0 options:(unsigned long long)a1;
- (void)_connectionInvalidated:(id)a0;
- (int)_deleteIdentityWithOptions:(unsigned long long)a0;
- (id)_findHomeKitExPairedPeer:(id)a0 options:(unsigned long long)a1 error:(int *)a2;
- (id)copyIdentityWithOptions:(unsigned long long)a0 error:(int *)a1;
- (int)savePairedPeer:(id)a0 options:(unsigned long long)a1;
- (id)_copyHomeKitExWithOptions:(unsigned long long)a0 error:(int *)a1;
- (void)invalidate;
- (int)deleteIdentityWithOptions:(unsigned long long)a0;

@end
