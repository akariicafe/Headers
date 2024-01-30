@class MPMediaQuery, MPMediaItem;

@interface MPCAssistantQueryPlaybackQueue : MPCAssistantPlaybackQueue

@property (readonly, nonatomic) MPMediaQuery *query;
@property (retain, nonatomic) MPMediaItem *firstItem;
@property (nonatomic) long long shuffleType;

+ (id)queryQueueWithContextID:(id)a0 query:(id)a1;

- (void).cxx_destruct;
- (id)description;
- (struct _MRSystemAppPlaybackQueue { } *)createRemotePlaybackQueue;
- (id)initWithContextID:(id)a0 query:(id)a1;

@end
