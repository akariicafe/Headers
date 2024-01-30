@interface CSAudioPlayingAppMonitor : NSObject

+ (id)sharedMonitor;

- (id)init;
- (id)playingApps;

@end
