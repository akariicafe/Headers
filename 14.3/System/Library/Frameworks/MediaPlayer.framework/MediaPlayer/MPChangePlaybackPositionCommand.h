@interface MPChangePlaybackPositionCommand : MPRemoteCommand

@property (nonatomic) BOOL canBeControlledByScrubbing;

- (id)newCommandEventWithPositionTime:(double)a0;
- (id)initWithMediaRemoteCommandType:(unsigned int)a0;
- (id)_mediaRemoteCommandInfoOptions;

@end
