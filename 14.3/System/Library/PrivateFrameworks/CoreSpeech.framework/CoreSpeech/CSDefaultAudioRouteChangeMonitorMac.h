@interface CSDefaultAudioRouteChangeMonitorMac : CSEventMonitor

+ (id)sharedInstance;

- (BOOL)isDefaultInputBuiltInMic;
- (BOOL)isDefaultOutputBultInSpeaker;
- (unsigned int)defaultOutputAudioDeviceID;

@end
