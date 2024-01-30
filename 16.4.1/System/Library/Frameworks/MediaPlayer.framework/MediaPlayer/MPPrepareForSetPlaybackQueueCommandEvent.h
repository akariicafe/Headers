@class NSString;

@interface MPPrepareForSetPlaybackQueueCommandEvent : MPRemoteCommandEvent

@property (readonly, nonatomic) BOOL isProactive;
@property (readonly, copy, nonatomic) NSString *proactiveReason;

- (void).cxx_destruct;
- (id)initWithCommand:(id)a0 mediaRemoteType:(unsigned int)a1 options:(id)a2;

@end
