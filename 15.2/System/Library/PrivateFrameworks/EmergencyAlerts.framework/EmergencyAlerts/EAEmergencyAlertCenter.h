@class UNUserNotificationCenter;

@interface EAEmergencyAlertCenter : NSObject {
    UNUserNotificationCenter *_userNotificationCenter;
}

- (unsigned long long)currentAudioAndVideoCallCount;
- (id)initWithUserNotificationCenter:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)addNotificationRequest:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)addAlertRequestForCellBroadcastMessage:(id)a0 withCompletionHandler:(id /* block */)a1;

@end
