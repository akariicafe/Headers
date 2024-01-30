@class NSString, NSArray;

@interface MPSetPlaybackSessionCommand : MPRemoteCommand

@property (copy, nonatomic) NSString *currentPlaybackSessionIdentifier;
@property (copy, nonatomic) NSString *currentPlaybackSessionRevision;
@property (copy, nonatomic) NSArray *exportableSessionTypes;
@property (copy, nonatomic) NSArray *supportedSessionTypes;

- (void).cxx_destruct;
- (id)_mediaRemoteCommandInfoOptions;

@end
