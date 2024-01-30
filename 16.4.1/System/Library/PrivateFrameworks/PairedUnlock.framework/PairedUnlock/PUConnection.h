@class NSObject, PUConnectionUnlockClient, NSXPCConnection;
@protocol PUConnectionDelegate, OS_dispatch_queue;

@interface PUConnection : NSObject {
    NSXPCConnection *_serverConnection;
    NSObject<OS_dispatch_queue> *_serverConnectionQueue;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    PUConnectionUnlockClient *_unlockClient;
}

@property (copy, nonatomic) id /* block */ remoteDeviceRemoveLockoutHandler;
@property (weak) id<PUConnectionDelegate> delegate;

+ (id)serverInterface;
+ (id)clientInterface;
+ (void)syncPasscodeState;

- (id)serverConnection;
- (void)dealloc;
- (void)setServerConnection:(id)a0;
- (id)initWithDelegate:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)getRemoteDeviceState:(id /* block */)a0;
- (void)unpairForUnlock;
- (id)delegateIfRespondsToSelector:(SEL)a0;
- (void)didDisableOnlyRemoteUnlock:(BOOL)a0 error:(id)a1;
- (void)didEnableOnlyRemoteUnlock:(BOOL)a0 error:(id)a1;
- (void)didGetRemoteDeviceState:(id)a0 error:(id)a1;
- (void)didPairForUnlock:(BOOL)a0 error:(id)a1;
- (void)didUnpairForUnlock:(BOOL)a0 error:(id)a1;
- (void)disableOnlyRemoteUnlock;
- (void)enableOnlyRemoteUnlockWithPasscode:(id)a0;
- (void)pairForUnlockWithPasscode:(id)a0;
- (void)queryRemoteDeviceState:(id /* block */)a0;
- (const char *)queueNameWithSuffix:(id)a0;
- (void)remoteDeviceDidCompleteRemoteAction:(BOOL)a0 remoteDeviceState:(id)a1 error:(id)a2;
- (void)remoteDeviceDidRemoveLockout:(BOOL)a0 error:(id)a1;
- (void)remoteDeviceDidUnlock;
- (void)requestDeviceSetWristDetectionDisabled:(BOOL)a0 completion:(id /* block */)a1;
- (void)requestRemoteDeviceRemoteAction:(long long)a0 type:(long long)a1;
- (void)requestRemoteDeviceRemoveLockout:(id /* block */)a0;
- (void)requestRemoteDeviceUnlockNotification;

@end
