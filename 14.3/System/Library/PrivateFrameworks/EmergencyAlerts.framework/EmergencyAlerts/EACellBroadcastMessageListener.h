@class EAEmergencyAlertCenter;

@interface EACellBroadcastMessageListener : NSObject {
    EAEmergencyAlertCenter *_emergencyAlertCenter;
}

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)start;
- (void)_cellBroadcastMessageReceived:(id)a0;

@end
