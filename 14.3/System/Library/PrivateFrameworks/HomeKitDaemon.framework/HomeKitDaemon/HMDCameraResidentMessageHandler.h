@class HMDDevice, NSString, HMDAccessory, HMFUnfairLock, NSMutableArray, HMDMessageDispatcher;

@interface HMDCameraResidentMessageHandler : HMFObject <HMFLogging>

@property (readonly) HMDMessageDispatcher *messageDispatcher;
@property (readonly, copy) NSString *logIdentifier;
@property (readonly) NSMutableArray *queuedMessages;
@property (readonly) HMFUnfairLock *lock;
@property (readonly, weak) HMDAccessory *accessory;
@property (readonly) BOOL companionIsResident;
@property (readonly) HMDDevice *residentDeviceForCamera;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)enqueueMessage:(id)a0;
- (id)initWithAccessory:(id)a0;
- (id)nextMessage;
- (void)sendMessageWithName:(id)a0 cameraSessionID:(id)a1 payload:(id)a2 target:(id)a3 responseQueue:(id)a4 responseHandler:(id /* block */)a5;
- (id)dequeueMessage;
- (void)sendNextMessage;
- (void)sendMessageWithName:(id)a0 cameraSessionID:(id)a1 payload:(id)a2 target:(id)a3 device:(id)a4 responseQueue:(id)a5 responseHandler:(id /* block */)a6;

@end
