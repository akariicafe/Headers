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
- (id)initWithDelegate:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)setServerConnection:(id)a0;
- (void)dealloc;
- (void)getRemoteDeviceState:(id /* block */)a0;
- (const char *)queueNameWithSuffix:(id)a0;
- (void)pairForUnlockWithPasscode:(id)a0;
- (void)unpairForUnlock;
- (void)enableOnlyRemoteUnlockWithPasscode:(id)a0;
- (void)disableOnlyRemoteUnlock;
- (void)requestRemoteDeviceRemoteAction:(long long)a0 type:(long long)a1;
- (void)requestRemoteDeviceUnlockNotification;
- (void)queryRemoteDeviceState:(id /* block */)a0;
- (void)requestDeviceSetWristDetectionDisabled:(BOOL)a0 completion:(id /* block */)a1;
- (void)didPairForUnlock:(BOOL)a0 error:(id)a1;
- (void)didUnpairForUnlock:(BOOL)a0 error:(id)a1;
- (void)didEnableOnlyRemoteUnlock:(BOOL)a0 error:(id)a1;
- (void)didDisableOnlyRemoteUnlock:(BOOL)a0 error:(id)a1;
- (void)remoteDeviceDidCompleteRemoteAction:(BOOL)a0 remoteDeviceState:(id)a1 error:(id)a2;
- (void)remoteDeviceDidUnlock;
- (void)remoteDeviceDidRemoveLockout:(BOOL)a0 error:(id)a1;
- (void)didGetRemoteDeviceState:(id)a0 error:(id)a1;
- (id)delegateIfRespondsToSelector:(SEL)a0;
- (void)requestRemoteDeviceRemoveLockout:(id /* block */)a0;

@end
