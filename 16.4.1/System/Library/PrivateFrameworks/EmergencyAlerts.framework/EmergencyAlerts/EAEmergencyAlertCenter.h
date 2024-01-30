@class UNUserNotificationCenter;

@interface EAEmergencyAlertCenter : NSObject {
    UNUserNotificationCenter *_userNotificationCenter;
}

- (unsigned long long)currentAudioAndVideoCallCount;
- (id)handleCellBroadcastMessage:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)handleAppleSafetyAlertMessage:(id)a0;
- (id)getUpdatedNotificationForAppleSafetyAlert:(id)a0 withMessageDictionary:(id)a1;
- (void)handleRawCellBroadcastMessage:(id)a0 withCompletionHandler:(id /* block */)a1;
- (id)initWithUserNotificationCenter:(id)a0;
- (void)replaceContentForRequestWithRequestID:(id)a0 replacementContent:(id)a1 completionHandler:(id /* block */)a2;
- (id)init;
- (void)addNotificationRequest:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void).cxx_destruct;

@end
