@class HMCameraView, NSUUID, _HMContext, NSString, HMFUnfairLock, NSNumber, NSObject;
@protocol OS_dispatch_queue;

@interface _HMCameraSource : NSObject <HMFMessageReceiver> {
    HMFUnfairLock *_lock;
}

@property (readonly, nonatomic) _HMContext *context;
@property (readonly, copy, nonatomic) NSNumber *aspectRatio;
@property (readonly, copy, nonatomic) NSUUID *profileUniqueIdentifier;
@property (readonly, copy, nonatomic) NSNumber *slotIdentifier;
@property (readonly, copy, nonatomic) NSString *sessionID;
@property (weak, nonatomic) HMCameraView *cameraView;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithSessionID:(id)a0 slotIdentifier:(id)a1 context:(id)a2 profileUniqueIdentifier:(id)a3 aspectRatio:(id)a4;

@end
