@interface IMAVEmbeddedInterface : IMAVConferenceInterface

+ (void)updateCriticalState;

- (void)_conferenceEnded:(id)a0;
- (long long)_checkNetworkForChat:(id)a0 requiresWifi:(BOOL)a1;
- (void)chatStateUpdated;
- (long long)_runPingTestForChat:(id)a0;
- (void)_conferenceWillStart:(id)a0;

@end
