@class NSArray;

@interface MPSetPriorityForPlaybackSessionCommand : MPRemoteCommand

@property (copy, nonatomic) NSArray *preloadedSessions;

- (id)_mediaRemoteCommandInfoOptions;
- (void).cxx_destruct;

@end
