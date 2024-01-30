@class EAEmergencyAlertCenter;

@interface EACellBroadcastMessageListener : NSObject {
    EAEmergencyAlertCenter *_emergencyAlertCenter;
}

+ (id)sharedInstance;

- (void)dealloc;
- (id)init;
- (void)start;
- (void)_cellBroadcastMessageReceived:(id)a0;
- (void).cxx_destruct;

@end
