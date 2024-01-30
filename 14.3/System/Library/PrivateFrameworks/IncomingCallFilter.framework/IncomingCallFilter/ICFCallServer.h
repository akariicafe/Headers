@class NSMutableArray, NSObject;
@protocol OS_xpc_object;

@interface ICFCallServer : NSObject {
    NSObject<OS_xpc_object> *_connection;
    NSMutableArray *_clients;
    BOOL _hasRegistered;
}

+ (id)sharedInstance;

- (id)init;
- (void)_cleanup;
- (void)_clientConnected;
- (void)dealloc;
- (void)_configureWithClient:(id)a0;
- (void)_cleanupClient:(id)a0;
- (void)shouldAllowIncomingCallForNumber:(id)a0 forProviderIdentifier:(id)a1 response:(id /* block */)a2;
- (void)_requestCallGrantForIdentifier:(id)a0 forProviderIdentifier:(id)a1 waitForResponse:(BOOL)a2 completionBlock:(id /* block */)a3;

@end
