@class NSXPCListener, NSString, NSXPCConnection, NSMutableDictionary, NSObject, PSYServiceSyncSession;
@protocol OS_dispatch_queue, PSYSyncCoordinatorDelegate;

@interface PSYSyncCoordinator : NSObject <NSXPCListenerDelegate, PSYActivity, PSYServiceSyncSessionDelegate> {
    NSXPCListener *_listener;
    id /* block */ _pendingCompletion;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _delegateLock;
    id<PSYSyncCoordinatorDelegate> _delegate;
    PSYServiceSyncSession *_activeSyncSession;
    int _syncSwitchIDToken;
    unsigned long long _syncRestriction;
    unsigned long long _syncIDOfStartedSync;
    BOOL _hasStartedListening;
    NSMutableDictionary *_nrDevices;
}

@property (retain, nonatomic) NSXPCConnection *connection;
@property (readonly, copy, nonatomic) NSString *serviceName;
@property (readonly, nonatomic) PSYServiceSyncSession *activeSyncSession;
@property (weak, nonatomic) id<PSYSyncCoordinatorDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (id)filteredErrorWithError:(id)a0;
+ (id)syncCoordinatorWithServiceName:(id)a0;

- (id)progressHandler;
- (void)deviceChanged:(id)a0;
- (void)_cleanup;
- (int)registerNotifyTokenWithName:(id)a0 withBlock:(id /* block */)a1;
- (int)registerNotifyTokenWithName:(id)a0 withQueue:(id)a1 withBlock:(id /* block */)a2;
- (void)setDelegate:(id)a0 queue:(id)a1;
- (void)syncDidComplete;
- (void)syncDidFailWithError:(id)a0;
- (oneway void)abortSyncWithCompletion:(id /* block */)a0;
- (void)registerForDeviceChangeNotifications;
- (void)unregisterForDeviceChangeNotifications;
- (unsigned long long)readNotifyToken:(int)a0;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)performDelegateBlock:(id /* block */)a0;
- (unsigned long long)_syncRestriction;
- (id)syncSessionForOptions:(id)a0 supportsMigrationSync:(BOOL)a1;
- (oneway void)beginSyncWithOptions:(id)a0 completion:(id /* block */)a1;
- (void)exitForTestInput:(id)a0;
- (id)initWithServiceName:(id)a0;
- (void)_unregisterNRDeviceMonitors;
- (void).cxx_destruct;
- (void)reportProgress:(double)a0;
- (void)_registerMonitorNRDevice:(id)a0 forMigrationChanges:(id /* block */)a1;
- (void)_syncRestrictionDidUpdate:(id)a0 forServiceName:(id)a1;
- (void)syncSession:(id)a0 reportProgress:(double)a1;
- (BOOL)_pairedSyncFinishedReunionSync;
- (BOOL)_pairedSyncFinishedMigrationSyncWithPairingID:(id)a0;
- (void)dealloc;
- (id)initWithServiceName:(id)a0 serviceLookupPath:(id)a1;
- (void)invalidateActiveSyncSession;
- (void)beginDryRunSyncWithOptions:(id)a0 completion:(id /* block */)a1;
- (unsigned long long)syncRestriction;
- (void)_registerMonitorAllNRDevicesForMigrationChanges:(id /* block */)a0;
- (void)syncSession:(id)a0 didFailWithError:(id)a1;
- (void)syncDidCompleteSending;
- (void)syncSessionDidCompleteSending:(id)a0;
- (void)syncSessionDidComplete:(id)a0;

@end
