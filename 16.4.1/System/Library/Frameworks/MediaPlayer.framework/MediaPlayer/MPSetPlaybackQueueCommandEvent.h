@class NSString, MPRemotePlaybackQueue;

@interface MPSetPlaybackQueueCommandEvent : MPRemoteCommandEvent

@property (readonly, nonatomic) MPRemotePlaybackQueue *playbackQueue;
@property (readonly, nonatomic) NSString *sessionIdentifierOverride;

- (void).cxx_destruct;
- (id)initWithCommand:(id)a0 mediaRemoteType:(unsigned int)a1 options:(id)a2;
- (id)initWithCommand:(id)a0 playbackQueue:(id)a1;

@end
