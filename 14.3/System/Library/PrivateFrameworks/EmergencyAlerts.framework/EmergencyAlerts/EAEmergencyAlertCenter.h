@class UNUserNotificationCenter;

@interface EAEmergencyAlertCenter : NSObject {
    UNUserNotificationCenter *_userNotificationCenter;
}

- (unsigned long long)currentAudioAndVideoCallCount;
- (id)init;
- (void).cxx_destruct;
- (id)initWithUserNotificationCenter:(id)a0;
- (void)addNotificationRequest:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)addAlertRequestForCellBroadcastMessage:(id)a0 withCompletionHandler:(id /* block */)a1;

@end
