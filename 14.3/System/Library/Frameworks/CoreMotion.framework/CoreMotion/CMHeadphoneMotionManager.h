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

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)stopDeviceMotionUpdates;
- (void)startDeviceMotionUpdatesToQueue:(id)a0 withHandler:(id /* block */)a1;
- (void)pauseDeviceMotionStreamingPrivate;
- (void)startDeviceMotionUpdatesPrivateToQueue:(id)a0 withHandler:(id /* block */)a1;
- (void)resumeDeviceMotionStreamingPrivate;
- (void)onDeviceMotionPrivate:(id)a0;
- (void)onDeviceMotionEventPrivate:(id)a0;
- (id)delegateQueuePrivate;
- (void)applyInitialReferencePrivate:(id)a0;
- (void)notifyDeviceConnectedEventToClientPrivate;
- (void)stopDeviceMotionUpdatesPrivate;
- (void)notifyDeviceDisconnectedEventToClientPrivate;
- (void)startDeviceMotionUpdates;

@end
