@class AWAttentionAwarenessConfiguration, AWAttentionAwarenessClient;
@protocol LKAttentionAwareIdleTimerDelegate;

@interface LKAttentionAwareIdleTimerClient : NSObject

@property (weak, nonatomic) id<LKAttentionAwareIdleTimerDelegate> clientDelegate;
@property (nonatomic) double timeout;
@property (retain, nonatomic) AWAttentionAwarenessConfiguration *config;
@property (retain, nonatomic) AWAttentionAwarenessClient *AWClient;
@property (copy, nonatomic) id /* block */ actionBlock;

- (void).cxx_destruct;
- (void)pause;
- (void)resume;
- (void)dealloc;
- (id)initWithClientDelegate:(id)a0 timeout:(double)a1 queue:(id)a2;

@end
