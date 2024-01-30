@class HMFOperation;

@interface HMIFeedbackTask : HMITask {
    HMFOperation *_operation;
}

- (void).cxx_destruct;
- (void)mainInsideAutoreleasePool;
- (id)initWithTaskID:(int)a0 cameraProfileUUID:(id)a1 clipUUID:(id)a2;

@end
