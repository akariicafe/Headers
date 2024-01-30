@class NSString;

@interface MPReorderQueueCommandEvent : MPRemoteCommandEvent

@property (readonly, nonatomic) NSString *insertBeforeContextItemID;
@property (readonly, nonatomic) NSString *insertAfterContextItemID;
@property (readonly, nonatomic) long long destinationOffset;

- (id)initWithCommand:(id)a0 mediaRemoteType:(unsigned int)a1 options:(id)a2;
- (void).cxx_destruct;

@end
