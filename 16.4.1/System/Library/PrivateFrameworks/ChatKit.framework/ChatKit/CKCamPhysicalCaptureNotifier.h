@class SBSHardwareButtonService;
@protocol CKCamPhysicalCaptureNotifierDelegate;

@interface CKCamPhysicalCaptureNotifier : NSObject

@property (nonatomic, setter=_setState:) long long state;
@property (nonatomic, setter=_setVolumeUpButtonState:) long long _volumeUpButtonState;
@property (nonatomic, setter=_setVolumeDownButtonState:) long long _volumeDownButtonState;
@property (retain, nonatomic) SBSHardwareButtonService *_cameraButtonRequest;
@property (weak, nonatomic) id<CKCamPhysicalCaptureNotifierDelegate> delegate;
@property (nonatomic, getter=isEnabled) BOOL enabled;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)_handleVolumeDownButtonDownNotification:(id)a0;
- (void)_handleVolumeDownButtonUpNotification:(id)a0;
- (void)_handleVolumeUpButtonDownNotification:(id)a0;
- (void)_handleVolumeUpButtonUpNotification:(id)a0;
- (void)_updateCaptureButtonNotifications;
- (void)_updateStateAndNotifyDelegateIfNeeded;

@end
