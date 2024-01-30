@interface SpeakThisServicesUI : NSObject

+ (void)disableSpeakThisServices;
+ (void)enableSpeakThisServices;

- (void)_registerForKBFrameNotifications;
- (id)init;
- (void)_unregisterForKBFrameNotifications;
- (void)_handleSpeakThisEnabledStatusDidChangeNotification:(id)a0;
- (void)_kbFrameWillChange:(id)a0;

@end
