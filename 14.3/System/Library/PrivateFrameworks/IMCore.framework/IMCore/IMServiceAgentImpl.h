@interface IMServiceAgentImpl : IMServiceAgent

+ (void)initialize;
+ (id)notificationCenter;
+ (void)forgetStatusImageAppearance;
+ (id)imageNameForStatus:(unsigned long long)a0;
+ (id)imageURLForStatus:(unsigned long long)a0;
+ (void)_determineStatusImageAppearance;
+ (id)sharedAgent;
+ (void)_statusImageAppearanceChanged:(id)a0;

- (void)setupComplete;
- (void)setMyStatus:(unsigned long long)a0 message:(id)a1;
- (id)notificationCenter;
- (id)init;
- (void)dealloc;
- (void)vcCapabilitiesChanged:(unsigned long long)a0;
- (unsigned long long)vcCapabilities;
- (id)serviceWithName:(id)a0;
- (void)_statusImageAppearanceChanged:(id)a0;
- (void)_daemonConnected:(id)a0;
- (void)_daemonDisconnected:(id)a0;
- (void)launchIfNecessary;
- (void)_customMessagesChanged:(id)a0;
- (id)myAvailableMessages;
- (id)myAwayMessages;
- (void)setMyAvailableMessages:(id)a0;
- (void)setMyAwayMessages:(id)a0;

@end
