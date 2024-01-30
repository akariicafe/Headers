@interface MPChangePlaybackPositionCommand : MPRemoteCommand

@property (nonatomic) BOOL canBeControlledByScrubbing;

- (id)_mediaRemoteCommandInfoOptions;
- (id)newCommandEventWithPositionTime:(double)a0;
- (id)initWithMediaRemoteCommandType:(unsigned int)a0;

@end
