@class NSUUID, NSString, HMHome, NSObject, _HMContext, _HMCameraProfile, HMService, HMFUnfairLock;
@protocol OS_dispatch_queue;

@interface _HMCameraControl : NSObject <HMFLogging, HMFMessageReceiver> {
    HMFUnfairLock *_lock;
}

@property (retain, nonatomic) _HMContext *context;
@property (weak, nonatomic) HMHome *home;
@property (readonly, weak, nonatomic) _HMCameraProfile *cameraProfile;
@property (readonly, nonatomic) HMService *service;
@property (readonly, copy, nonatomic) NSUUID *profileUniqueIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;

+ (id)logCategory;

- (id)logIdentifier;
- (void).cxx_destruct;
- (id)initWithCameraProfile:(id)a0 service:(id)a1 profileUniqueIdentifier:(id)a2;
- (void)__configureWithContext:(id)a0 home:(id)a1;
- (void)_registerNotificationHandlers;

@end
