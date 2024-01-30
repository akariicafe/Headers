@class CMHeadphoneMotionManagerInternal, CMDeviceMotion;
@protocol CMHeadphoneMotionManagerDelegate;

@interface CMHeadphoneMotionManager : NSObject {
    CMHeadphoneMotionManagerInternal *_internal;
}

@property (weak, nonatomic) id<CMHeadphoneMotionManagerDelegate> delegate;
@property (readonly, nonatomic, getter=isDeviceMotionAvailable) BOOL deviceMotionAvailable;
@property (readonly, nonatomic, getter=isDeviceMotionActive) BOOL deviceMotionActive;
@property (readonly) CMDeviceMotion *deviceMotion;

+ (long long)authorizationStatus;

- (void)stopDeviceMotionUpdates;
- (void)startDeviceMotionUpdates;
- (void)startDeviceMotionUpdatesToQueue:(id)a0 withHandler:(id /* block */)a1;
- (void)stopDeviceMotionUpdatesPrivate;
- (void).cxx_destruct;
- (void)pauseDeviceMotionStreamingPrivate;
- (void)onDeviceMotionPrivate:(id)a0;
- (void)startDeviceMotionUpdatesPrivateToQueue:(id)a0 withHandler:(id /* block */)a1;
- (void)resumeDeviceMotionStreamingPrivate;
- (void)onDeviceMotionEventPrivate:(id)a0;
- (void)applyInitialReferencePrivate:(id)a0;
- (id)delegateQueuePrivate;
- (void)notifyDeviceConnectedEventToClientPrivate;
- (void)notifyDeviceDisconnectedEventToClientPrivate;
- (id)init;
- (void)dealloc;

@end
