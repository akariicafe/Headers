@interface MPChangePlaybackPositionCommandEvent : MPRemoteCommandEvent

@property (readonly, nonatomic) double positionTime;

- (id)initWithCommand:(id)a0 mediaRemoteType:(unsigned int)a1 options:(id)a2;

@end
