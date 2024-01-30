@class NSMutableArray, NSString, HMDAccessory, HMFUnfairLock, HMDDevice, HMDHomeKitVersion, HMDMessageDispatcher;

@interface HMDCameraResidentMessageHandler : HMFObject <HMFLogging>

@property (readonly) HMDMessageDispatcher *messageDispatcher;
@property (readonly, copy) NSString *logIdentifier;
@property (readonly, copy) HMDHomeKitVersion *minimumSupportedResidentHomeKitVersion;
@property (readonly) NSMutableArray *queuedMessages;
@property (readonly) HMFUnfairLock *lock;
@property (readonly, weak) HMDAccessory *accessory;
@property (readonly) HMDDevice *remoteAccessDevice;
@property (readonly, getter=isUsingCompanionForRemoteAccessDevice) BOOL usingCompanionForRemoteAccessDevice;
@property (readonly, getter=isRemoteAccessDeviceReachable) BOOL remoteAccessDeviceReachable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (id)initWithAccessory:(id)a0;
- (void).cxx_destruct;
- (void)enqueueMessage:(id)a0;
- (id)nextMessage;
- (void)sendMessageWithName:(id)a0 cameraSessionID:(id)a1 payload:(id)a2 target:(id)a3 responseQueue:(id)a4 responseHandler:(id /* block */)a5;
- (id)initWithAccessory:(id)a0 messageDispatcher:(id)a1 minimumSupportedResidentHomeKitVersion:(id)a2;
- (void)sendMessageWithName:(id)a0 cameraSessionID:(id)a1 payload:(id)a2 target:(id)a3 device:(id)a4 responseQueue:(id)a5 responseHandler:(id /* block */)a6;
- (id)dequeueMessage;
- (void)sendNextMessage;

@end
