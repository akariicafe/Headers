@class NSUUID, NSString, HMHome, NSObject, _HMContext, _HMCameraProfile, HMService, HMFUnfairLock;
@protocol OS_dispatch_queue;

@interface _HMCameraControl : NSObject <HMFMessageReceiver> {
    HMFUnfairLock *_lock;
}

@property (retain, nonatomic) _HMContext *context;
@property (weak, nonatomic) HMHome *home;
@property (readonly, weak, nonatomic) _HMCameraProfile *cameraProfile;
@property (readonly, nonatomic) HMService *service;
@property (readonly, copy, nonatomic) NSUUID *profileUniqueIdentifier;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
