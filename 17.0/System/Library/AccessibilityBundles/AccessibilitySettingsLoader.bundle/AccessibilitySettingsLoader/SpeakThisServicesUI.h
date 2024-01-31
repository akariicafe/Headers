@interface SpeakThisServicesUI : NSObject

+ (void)disableSpeakThisServices;
+ (void)enableSpeakThisServices;

- (id)init;
- (void)_registerForKBFrameNotifications;
- (void)_handleSpeakThisEnabledStatusDidChangeNotification:(id)a0;
- (void)_kbFrameWillChange:(id)a0;
- (void)_unregisterForKBFrameNotifications;

@end
