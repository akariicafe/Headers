@class NSURL;

@interface MPCAssistantGeniusPlaybackQueue : MPCAssistantPlaybackQueue

@property (readonly, nonatomic) NSURL *seedTrack;

+ (id)geniusQueueWithContextID:(id)a0 seedTrack:(id)a1;

- (id)description;
- (void).cxx_destruct;
- (struct _MRSystemAppPlaybackQueue { } *)createRemotePlaybackQueue;
- (id)initWithContextID:(id)a0 seedTrack:(id)a1;

@end
