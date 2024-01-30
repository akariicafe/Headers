@class NSString, NSData;

@interface MPCAssistantCustomDataPlaybackQueue : MPCAssistantPlaybackQueue

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSData *customData;

+ (id)customDataQueueWithContextID:(id)a0 identifier:(id)a1 customData:(id)a2;

- (void).cxx_destruct;
- (id)description;
- (struct _MRSystemAppPlaybackQueue { } *)createRemotePlaybackQueue;
- (id)initWithContextID:(id)a0 identifier:(id)a1 customData:(id)a2;

@end
