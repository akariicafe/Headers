@class NSXPCListener, NSString, NSXPCConnection, SBSLockScreenRemoteContentAssertion, HDSPEnvironment;
@protocol HDSPSleepLockScreenAssertionManagerDelegate;

@interface HDSPSleepLockScreenAssertionManager : NSObject <HKSPSleepLockScreenServer, NSXPCListenerDelegate, HDSPEnvironmentAware, HDSPSleepLockScreenAssertionManager> {
    NSXPCListener *_listener;
    NSXPCConnection *_connection;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _connectionLock;
}

@property (readonly, nonatomic) SBSLockScreenRemoteContentAssertion *lockScreenAssertion;
@property (retain, nonatomic) NSXPCConnection *connection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) HDSPEnvironment *environment;
@property (readonly, nonatomic) BOOL hasLockScreenConnection;
@property (weak, nonatomic) id<HDSPSleepLockScreenAssertionManagerDelegate> delegate;

- (void)connect;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)sendLockScreenState:(long long)a0 userInfo:(id)a1;
- (void).cxx_destruct;
- (void)takeAssertionIfNeeded;
- (id)initWithEnvironment:(id)a0;
- (void)didDismissWithReason:(long long)a0;
- (void)_withLock:(id /* block */)a0;
- (void)invalidateAssertion;

@end
