@class NSString, AWAttentionAwarenessClient, NSObject;
@protocol OS_dispatch_queue;

@interface AFAttentionAwarenessController : NSObject {
    AWAttentionAwarenessClient *_attentionClient;
    NSObject<OS_dispatch_queue> *_attentionQueue;
}

@property (readonly, copy, nonatomic) NSString *identifier;

- (id)initWithIdentifier:(id)a0;
- (void).cxx_destruct;
- (void)requestAttentionStateWithCompletion:(id /* block */)a0;

@end
