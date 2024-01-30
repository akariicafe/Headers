@class NSMutableArray, NSXPCConnection;

@interface ICPrefManager : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _authConnectionLock;
    NSMutableArray *_authConnectionSemaphores;
}

@property (retain, nonatomic) NSXPCConnection *authConnection;

+ (id)defaultAuthManager;

- (void)startQuery:(id)a0;
- (void)dealloc;
- (id)init;
- (BOOL)openRemoteAuthenticationManager;
- (void)addSelectorToInterface:(id)a0 selectorString:(id)a1 origin:(BOOL)a2;
- (id)authManagerConnection;
- (void)endQuery:(id)a0;
- (id)getContentsAuthorizationStatus;
- (id)getControlAuthorizationStatus;
- (BOOL)getGoodNewsStatus;
- (void)invalidateQueries;
- (id)remoteAuthManager;
- (void)requestContentsAuthorizationShouldPrompt:(BOOL)a0 completion:(id /* block */)a1;
- (void)requestControlAuthorizationShouldPrompt:(BOOL)a0 completion:(id /* block */)a1;
- (void)resetContentsAuthorizationWithCompletion:(id /* block */)a0;
- (void)resetControlAuthorizationWithCompletion:(id /* block */)a0;

@end
