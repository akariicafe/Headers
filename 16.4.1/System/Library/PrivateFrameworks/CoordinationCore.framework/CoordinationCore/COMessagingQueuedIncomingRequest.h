@class COMessagingRequest;

@interface COMessagingQueuedIncomingRequest : NSObject

@property (readonly, nonatomic) COMessagingRequest *request;
@property (readonly, nonatomic) id /* block */ callback;
@property (readonly, nonatomic) unsigned long long enqueueTimestamp;

- (void).cxx_destruct;
- (id)initWithRequest:(id)a0 callback:(id /* block */)a1;
- (long long)remainingTimeUsingCurrentTime:(unsigned long long)a0;
- (id)senderNode;

@end
