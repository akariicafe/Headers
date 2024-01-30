@class NSString, BSServiceConnection;
@protocol _PGBackgroundPIPServiceConnectionTargetDelegate;

@interface _PGBackgroundPIPServiceConnectionTarget : NSObject <PGBackgroundPIPClientToServerInterface> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSString *_lock_activitySessionIdentifier;
    NSString *_lock_bundleIdentifier;
    long long _lock_state;
    BSServiceConnection *_connection;
}

@property (weak, nonatomic) id<_PGBackgroundPIPServiceConnectionTargetDelegate> delegate;
@property (readonly, copy) NSString *bundleIdentifier;
@property (readonly, copy) NSString *activitySessionIdentifier;
@property (readonly, nonatomic) long long state;
@property (readonly, nonatomic, getter=isConnectionActive) BOOL connectionActive;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithConnection:(id)a0 delegate:(id)a1;
- (void)invalidate;
- (void).cxx_destruct;
- (oneway void)grantAuthorizationForActivitySessionWithIdentifier:(id)a0 bundleIdentifier:(id)a1;
- (oneway void)revokeAuthorization;
- (void)transitionToStateIfPossible:(long long)a0;

@end
