@class NSUUID, _HMContext, NSDictionary, NSString, NSObject, HMFActivity;
@protocol HMDeviceSetupSessionDelegate, OS_dispatch_queue;

@interface HMDeviceSetupSession : NSObject <HMFLogging, HMFMessageReceiver> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    long long _state;
    HMFActivity *_activity;
}

@property (readonly, nonatomic) _HMContext *context;
@property (readonly, weak) id<HMDeviceSetupSessionDelegate> delegate;
@property (readonly) NSUUID *identifier;
@property (readonly) long long role;
@property (readonly, copy) NSDictionary *userInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;

+ (id)logCategory;
+ (id)messageDestinationToHomeManager;

- (void)configure;
- (id)logIdentifier;
- (void)open;
- (void)setUserInfo:(id)a0;
- (void)dealloc;
- (void)close;
- (void)registerForNotifications;
- (void)_closeWithError:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)_handleDeviceSetupSessionReceiveDataMessage:(id)a0;
- (void)_handleOpenedSession;
- (BOOL)_moveToState:(long long)a0;
- (BOOL)_needsClosing;
- (void)cleanUpSession;
- (void)cleanUpSessionWithError:(id)a0;
- (id)closeSetupSessionHMDHomeManagerMessage;
- (void)handleDeviceSetupSessionCloseMessage:(id)a0;
- (void)handleDeviceSetupSessionReceiveDataMessage:(id)a0;
- (void)handleHomeKitDaemonInterruptedNotification:(id)a0;
- (id)initWithRole:(long long)a0 context:(id)a1 delegate:(id)a2;
- (id)initWithRole:(long long)a0 delegate:(id)a1;
- (id)messageDestinationForOpenedSessions;
- (void)registerForMessages;
- (id /* block */)responseHandlerForOpenMessage;
- (id /* block */)responseHandlerForReceiveDataMessageWithCompletionHandler:(id /* block */)a0;
- (void)sendExchangeData:(id)a0 qualityOfService:(long long)a1 completionHandler:(id /* block */)a2;

@end
