@class NSString, UVObjCSingleFireEvent, BSServiceConnection;

@interface UVBSConnection : NSObject <UVBSClientConnection, UVBSServerConnection> {
    BSServiceConnection *_serviceConnection;
    UVObjCSingleFireEvent *_invalidationEvent;
    UVObjCSingleFireEvent *_activationEvent;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) int clientPid;

+ (id)createWithEndpoint:(id)a0 clientContextBuilder:(id /* block */)a1 error:(id *)a2;
+ (id)_machLookupError:(id)a0;
+ (id)_connectionError:(id)a0;
+ (id)createWithMachName:(id)a0 service:(id)a1 instance:(id)a2 clientContextBuilder:(id /* block */)a3 error:(id *)a4;

- (void)_didActivate;
- (void).cxx_destruct;
- (id)remoteTarget;
- (void)_didInvalidate;
- (void)invalidate;
- (void)dealloc;
- (void)activateWithInterface:(id)a0 targetQueue:(id)a1 serviceQuality:(id)a2 interfaceTarget:(id)a3;
- (id)initWithServiceConnection:(id)a0;
- (id)remoteTarget:(id *)a0;
- (id)initWithServiceConnection:(id)a0 context:(id)a1;
- (void)initializeWithClientContext:(id)a0;
- (void)onActivation:(id /* block */)a0;
- (void)onInvalidation:(id /* block */)a0;

@end
