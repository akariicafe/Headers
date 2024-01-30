@class NSArray, MPRemotePlaybackQueue, NSString;

@interface MPInsertIntoPlaybackQueueCommandEvent : MPRemoteCommandEvent

@property (readonly, copy, nonatomic) NSArray *supportedInsertionPositions;
@property (readonly, nonatomic) long long insertionPosition;
@property (readonly, nonatomic) MPRemotePlaybackQueue *playbackQueue;
@property (readonly, nonatomic) NSString *insertAfterContentItemID;
@property (readonly, nonatomic) long long destinationOffset;

- (void).cxx_destruct;
- (id)initWithCommand:(id)a0 mediaRemoteType:(unsigned int)a1 options:(id)a2;
- (id)initWithCommand:(id)a0 playbackQueue:(id)a1 options:(id)a2;

@end
