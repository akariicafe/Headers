@interface MPChangeQueueEndActionCommandEvent : MPRemoteCommandEvent

@property (readonly, nonatomic) long long queueEndAction;
@property (readonly, nonatomic) BOOL preservesQueueEndAction;

- (id)initWithCommand:(id)a0 mediaRemoteType:(unsigned int)a1 options:(id)a2;

@end
