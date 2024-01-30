@class CXCallObserver, NSObject;
@protocol ENOnboardingManagerDelegate;

@interface ENOnboardingManager : NSObject {
    int _screenLockNotifyToken;
    int _cameraIrisFrontNotifyToken;
    int _cameraIrisBackNotifyToken;
    int _cameraIrisBackTeleNotifyToken;
}

@property (retain, nonatomic) CXCallObserver *callObserver;
@property (nonatomic) BOOL isCaptureSessionRunning;
@property (weak, nonatomic) NSObject<ENOnboardingManagerDelegate> *delegate;
@property (readonly, nonatomic, getter=isIdealTimeForBuddy) BOOL idealTimeForBuddy;
@property (readonly, nonatomic, getter=isDeviceUnlocked) BOOL deviceUnlocked;
@property (nonatomic) BOOL pendingBuddyOnboarding;

- (void)_observeCameraIrisNotifications;
- (void)_deviceLockStateChangedWithToken:(int)a0;
- (void)_cameraIrisStateChangedWithToken:(int)a0;
- (void).cxx_destruct;
- (id)init;
- (void)setShouldObserveDeviceUnlocks:(BOOL)a0;
- (void)dealloc;
- (BOOL)_isInLostMode;

@end
