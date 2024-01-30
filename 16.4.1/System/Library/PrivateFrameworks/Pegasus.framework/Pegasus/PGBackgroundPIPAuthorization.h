@class NSString, BSServiceConnection;

@interface PGBackgroundPIPAuthorization : NSObject <PGBackgroundPIPServerToClientInterface> {
    BSServiceConnection *_connection;
    long long _lock_state;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, copy) id /* block */ stateTransitionHandler;
@property (readonly, nonatomic) long long state;
@property (readonly, copy, nonatomic) NSString *activitySessionIdentifier;
@property (readonly, copy, nonatomic) NSString *appBundleIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (oneway void)transitionToState:(id)a0;
- (void)_transitionToState:(long long)a0;
- (void)dealloc;
- (void).cxx_destruct;
- (void)revoke;
- (id)initWithActivitySessionIdentifier:(id)a0 appBundleIdentifier:(id)a1 stateTransitionHandler:(id /* block */)a2;

@end
