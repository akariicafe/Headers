@interface IMAVEmbeddedInterface : IMAVConferenceInterface

+ (void)updateCriticalState;

- (long long)_runPingTestForChat:(id)a0;
- (void)chatStateUpdated;
- (void)_conferenceEnded:(id)a0;
- (void)_conferenceWillStart:(id)a0;
- (long long)_checkNetworkForChat:(id)a0 requiresWifi:(BOOL)a1;

@end
