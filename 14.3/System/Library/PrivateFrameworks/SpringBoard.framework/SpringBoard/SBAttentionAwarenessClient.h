@class AWAttentionAwarenessConfiguration, AWAttentionAwarenessClient, NSObject;
@protocol OS_dispatch_queue, SBAttentionAwarenessClientDelegate;

@interface SBAttentionAwarenessClient : NSObject {
    AWAttentionAwarenessConfiguration *_queue_configuration;
    AWAttentionAwarenessClient *_attentionAwarenessClient;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (weak, nonatomic) id<SBAttentionAwarenessClientDelegate> delegate;
@property (retain, nonatomic) AWAttentionAwarenessConfiguration *configuration;
@property (nonatomic, getter=isEnabled) BOOL enabled;

- (void)_suspend;
- (id)init;
- (void)setConfiguration:(id)a0 shouldReset:(BOOL)a1;
- (void).cxx_destruct;
- (void)resetAttentionLostTimeout;
- (void)_handleAttentionAwarenessEvent:(id)a0;
- (void)_resume;
- (void)_resetAttentionLostTimeout;

@end
