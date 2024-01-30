@class NSString, NSMutableArray, NSXPCConnection;

@interface ICPrefManager : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _authConnectionLock;
    NSMutableArray *_authConnectionSemaphores;
    NSString *_controlAuthStatus;
    NSString *_contentsAuthStatus;
}

@property (retain, nonatomic) NSXPCConnection *authConnection;

+ (id)defaultAuthManager;

- (void)startQuery:(id)a0;
- (id)init;
- (void)dealloc;
- (void)addSelectorToInterface:(id)a0 selectorString:(id)a1 origin:(BOOL)a2;
- (BOOL)openRemoteAuthenticationManager;
- (id)getContentsAuthorizationStatus;
- (id)getControlAuthorizationStatus;
- (BOOL)getGoodNewsStatus;
- (id)authManagerConnection;
- (void)invalidateQueries;
- (void)requestContentsAuthorizationShouldPrompt:(BOOL)a0 completion:(id /* block */)a1;
- (void)endQuery:(id)a0;
- (id)remoteAuthManager;
- (void)requestControlAuthorizationShouldPrompt:(BOOL)a0 completion:(id /* block */)a1;

@end
