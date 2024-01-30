@class NSMutableArray, NSXPCConnection;

@interface ICPrefManager : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _authConnectionLock;
    NSMutableArray *_authConnectionSemaphores;
}

@property (retain, nonatomic) NSXPCConnection *authConnection;

+ (id)defaultAuthManager;

- (void)resetContentsAuthorizationWithCompletion:(id /* block */)a0;
- (void)requestControlAuthorizationShouldPrompt:(BOOL)a0 completion:(id /* block */)a1;
- (void)endQuery:(id)a0;
- (id)getContentsAuthorizationStatus;
- (BOOL)openRemoteAuthenticationManager;
- (id)getControlAuthorizationStatus;
- (void)requestContentsAuthorizationShouldPrompt:(BOOL)a0 completion:(id /* block */)a1;
- (id)remoteAuthManager;
- (id)init;
- (BOOL)getGoodNewsStatus;
- (void)invalidateQueries;
- (void)startQuery:(id)a0;
- (void)dealloc;
- (void)addSelectorToInterface:(id)a0 selectorString:(id)a1 origin:(BOOL)a2;
- (void)resetControlAuthorizationWithCompletion:(id /* block */)a0;
- (id)authManagerConnection;

@end
