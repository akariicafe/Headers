@class NSString, NSData;

@interface MPCAssistantCustomDataPlaybackQueue : MPCAssistantPlaybackQueue

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSData *customData;

+ (id)customDataQueueWithContextID:(id)a0 identifier:(id)a1 customData:(id)a2;

- (id)description;
- (void).cxx_destruct;
- (void)getPlaybackQueueWithDestination:(id)a0 completion:(id /* block */)a1;
- (id)initWithContextID:(id)a0 identifier:(id)a1 customData:(id)a2;

@end
