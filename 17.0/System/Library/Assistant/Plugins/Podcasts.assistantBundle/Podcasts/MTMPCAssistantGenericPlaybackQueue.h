@interface MTMPCAssistantGenericPlaybackQueue : MPCAssistantPlaybackQueue

@property (nonatomic) struct _MRSystemAppPlaybackQueue { } *playbackQueueRef;

- (struct _MRSystemAppPlaybackQueue { } *)createRemotePlaybackQueue;
- (id)initWithContextID:(id)a0 playbackQueueRef:(struct _MRSystemAppPlaybackQueue { } *)a1;
- (id)initWithPlaybackQueueRef:(struct _MRSystemAppPlaybackQueue { } *)a0;

@end
