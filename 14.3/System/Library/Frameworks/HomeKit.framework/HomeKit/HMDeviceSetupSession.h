@class HMFActivity, NSUUID, _HMContext, NSDictionary, NSString, NSObject, HMFUnfairLock;
@protocol HMDeviceSetupSessionDelegate, OS_dispatch_queue;

@interface HMDeviceSetupSession : NSObject <HMFLogging, HMFMessageReceiver> {
    HMFUnfairLock *_lock;
    HMFActivity *_activity;
}

@property (readonly, nonatomic) _HMContext *context;
@property (nonatomic, getter=isOpen) BOOL open;
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
+ (id)homeManagerDestination;

- (id)init;
- (void)close;
- (void).cxx_destruct;
- (void)setUserInfo:(id)a0;
- (void)dealloc;
- (void)_handleDisconnection:(id)a0;
- (void)__handleReceivedExchangeData:(id)a0;
- (void)__handleClose:(id)a0;
- (void)_handleOpenedSession;
- (void)_closeWithError:(id)a0;
- (void)__closeWithError:(id)a0;
- (void)_reallySendExchangeData:(id)a0 qualityOfService:(long long)a1 completionHandler:(id /* block */)a2;
- (id)initWithRole:(long long)a0 delegate:(id)a1;
- (void)sendExchangeData:(id)a0 qualityOfService:(long long)a1 completionHandler:(id /* block */)a2;
- (void)open;
- (id)messageDestination;
- (id)logIdentifier;
- (void)__registerForMessages;

@end
