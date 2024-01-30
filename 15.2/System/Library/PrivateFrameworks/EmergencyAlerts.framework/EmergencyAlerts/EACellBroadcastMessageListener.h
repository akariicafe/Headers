@class EAEmergencyAlertCenter;

@interface EACellBroadcastMessageListener : NSObject {
    EAEmergencyAlertCenter *_emergencyAlertCenter;
}

+ (id)sharedInstance;

- (void)start;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)_cellBroadcastMessageReceived:(id)a0;

@end
