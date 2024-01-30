@interface CSDefaultAudioRouteChangeMonitorMac : CSEventMonitor

+ (id)sharedInstance;

- (unsigned int)defaultOutputAudioDeviceID;
- (BOOL)isDefaultInputBuiltInMic;
- (BOOL)isDefaultOutputBultInSpeaker;

@end
