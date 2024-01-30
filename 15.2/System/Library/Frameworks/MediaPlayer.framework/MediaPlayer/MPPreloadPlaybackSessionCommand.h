@class NSArray;

@interface MPPreloadPlaybackSessionCommand : MPRemoteCommand

@property (copy, nonatomic) NSArray *supportedSessionTypes;

- (id)_mediaRemoteCommandInfoOptions;
- (void).cxx_destruct;

@end
