@class HMCameraView, NSUUID, _HMContext, NSString, HMFUnfairLock, NSNumber, NSObject;
@protocol OS_dispatch_queue;

@interface _HMCameraSource : NSObject <HMFLogging, HMFMessageReceiver> {
    HMFUnfairLock *_lock;
}

@property (retain, nonatomic) _HMContext *context;
@property (readonly, copy, nonatomic) NSNumber *aspectRatio;
@property (readonly, copy, nonatomic) NSUUID *profileUniqueIdentifier;
@property (readonly, copy, nonatomic) NSNumber *slotIdentifier;
@property (readonly, copy, nonatomic) NSString *sessionID;
@property (weak, nonatomic) HMCameraView *cameraView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;

+ (id)logCategory;

@end
