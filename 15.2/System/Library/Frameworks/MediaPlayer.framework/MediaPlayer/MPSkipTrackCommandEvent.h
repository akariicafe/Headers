@interface MPSkipTrackCommandEvent : MPRemoteCommandEvent

@property (readonly, nonatomic, getter=isRequestingDefermentToPlaybackQueuePosition) BOOL requestingDefermentToPlaybackQueuePosition;

- (id)initWithCommand:(id)a0 mediaRemoteType:(unsigned int)a1 options:(id)a2;

@end
