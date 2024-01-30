@class NSString, _AWDLServiceDiscoveryManagerExportedObject, NSXPCConnection, NSLock, NSMutableArray;

@interface AWDLServiceDiscoveryManager : NSObject <AWDLServiceDiscoveryManagerXPCDelegate> {
    NSLock *_lock;
    _AWDLServiceDiscoveryManagerExportedObject *_exportedObject;
    NSXPCConnection *_xpcConnection;
    int _notifyToken;
    BOOL _attemptedReconnect;
    NSMutableArray *_activeTrafficRegistrations;
    long long _suspendCount;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)connectionInvalidated;
- (BOOL)resumeAWDLWithError:(id *)a0;
- (void)invalidatedActiveTrafficRegistration:(id)a0;
- (BOOL)clearTrafficRegistration:(id)a0 error:(id *)a1;
- (BOOL)_requiresConnection;
- (void)dealloc;
- (void)_destroyConnection;
- (void)_removeFirstTrafficRegistrationMatching:(id)a0;
- (BOOL)_usingAWDLDiscoveryManagerProxy:(id /* block */)a0 onSuccess:(id /* block */)a1 error:(id *)a2;
- (BOOL)setTrafficRegistration:(id)a0 error:(id *)a1;
- (BOOL)suspendAWDLWithError:(id *)a0;
- (void)_retryConnection;
- (id)init;
- (BOOL)queryAirPlayConnectivityWithConfiguration:(id)a0 error:(id *)a1;
- (void).cxx_destruct;

@end
