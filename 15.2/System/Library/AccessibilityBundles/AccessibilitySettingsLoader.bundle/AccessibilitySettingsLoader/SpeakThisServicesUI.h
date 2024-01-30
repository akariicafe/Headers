@interface SpeakThisServicesUI : NSObject

+ (void)enableSpeakThisServices;
+ (void)disableSpeakThisServices;

- (void)_registerForKBFrameNotifications;
- (void)_handleSpeakThisEnabledStatusDidChangeNotification:(id)a0;
- (void)_kbFrameWillChange:(id)a0;
- (id)init;
- (void)_unregisterForKBFrameNotifications;

@end
