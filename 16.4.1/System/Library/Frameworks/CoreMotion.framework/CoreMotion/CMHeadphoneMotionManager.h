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
- (void)stopDeviceMotionUpdatesPrivate;
- (void)startDeviceMotionUpdatesToQueue:(id)a0 withHandler:(id /* block */)a1;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)applyInitialReferencePrivate:(id)a0;
- (id)delegateQueuePrivate;
- (void)notifyDeviceConnectedEventToClientPrivate;
- (void)notifyDeviceDisconnectedEventToClientPrivate;
- (void)onDeviceMotionEventPrivate:(id)a0;
- (void)onDeviceMotionPrivate:(id)a0;
- (void)pauseDeviceMotionStreamingPrivate;
- (void)resumeDeviceMotionStreamingPrivate;
- (void)startDeviceMotionUpdatesPrivateToQueue:(id)a0 withHandler:(id /* block */)a1;

@end
