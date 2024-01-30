@class NSXPCListener, NSString, HDSPEnvironment, SBSLockScreenRemoteContentAssertion, NSXPCConnection;
@protocol HDSPSleepLockScreenAssertionManagerDelegate;

@interface HDSPSleepLockScreenAssertionManager : NSObject <HKSPSleepLockScreenServer, NSXPCListenerDelegate, HDSPEnvironmentAware> {
    NSXPCListener *_listener;
    NSXPCConnection *_connection;
}

@property (readonly, nonatomic) SBSLockScreenRemoteContentAssertion *lockScreenAssertion;
@property (weak, nonatomic) id<HDSPSleepLockScreenAssertionManagerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) HDSPEnvironment *environment;

- (void)connect;
- (void).cxx_destruct;
- (id)initWithEnvironment:(id)a0;
- (void)didDismissWithReason:(long long)a0;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)invalidateAssertion;
- (void)takeAssertionIfNeeded;
- (void)sendLockScreenState:(long long)a0 userInfo:(id)a1;

@end
