@class RTDarwinNotificationHelper;

@interface RTCameraManager_Embedded : RTCameraManager

@property (readonly, nonatomic) RTDarwinNotificationHelper *notificationHelper;

- (void)_shutdown;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)internalAddObserver:(id)a0 name:(id)a1;
- (void)internalRemoveObserver:(id)a0 name:(id)a1;
- (void)_handleCameraPowerNotification:(id)a0;
- (void)handleCameraPowerNotification:(id)a0;

@end
