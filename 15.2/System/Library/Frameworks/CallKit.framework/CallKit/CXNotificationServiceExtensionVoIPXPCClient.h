@class NSXPCConnection;

@interface CXNotificationServiceExtensionVoIPXPCClient : NSObject

@property (readonly, nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } accessorLock;
@property (retain, nonatomic) NSXPCConnection *connection;

- (void).cxx_destruct;
- (id)init;
- (void)invalidate;
- (void)dealloc;
- (BOOL)taskHasEntitlement:(id)a0;
- (BOOL)requestDidArriveFromExtensionPoint;
- (void)requestApplicationLaunchForIncomingCall:(id)a0 completion:(id /* block */)a1;

@end
