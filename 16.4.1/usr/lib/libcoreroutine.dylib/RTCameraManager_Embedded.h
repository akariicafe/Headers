@class RTDarwinNotificationHelper;

@interface RTCameraManager_Embedded : RTCameraManager

@property (readonly, nonatomic) RTDarwinNotificationHelper *notificationHelper;

- (void)internalRemoveObserver:(id)a0 name:(id)a1;
- (void)handleCameraPowerNotification:(id)a0;
- (void)internalAddObserver:(id)a0 name:(id)a1;
- (void)dealloc;
- (void)_handleCameraPowerNotification:(id)a0;
- (id)init;
- (void)_shutdownWithHandler:(id /* block */)a0;
- (void).cxx_destruct;

@end
