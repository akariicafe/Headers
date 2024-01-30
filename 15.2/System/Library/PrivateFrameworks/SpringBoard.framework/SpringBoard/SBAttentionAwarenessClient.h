@class AWAttentionAwarenessClient, AWAttentionAwarenessConfiguration, NSString, NSObject;
@protocol OS_dispatch_queue, SBAttentionAwarenessClientDelegate;

@interface SBAttentionAwarenessClient : NSObject <BSInvalidatable> {
    AWAttentionAwarenessConfiguration *_queue_configuration;
    AWAttentionAwarenessClient *_attentionAwarenessClient;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (weak, nonatomic) id<SBAttentionAwarenessClientDelegate> delegate;
@property (retain, nonatomic) AWAttentionAwarenessConfiguration *configuration;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_suspend;
- (void)setConfiguration:(id)a0 shouldReset:(BOOL)a1;
- (void)_resume;
- (void)_resetAttentionLostTimeout;
- (void).cxx_destruct;
- (id)init;
- (void)resetAttentionLostTimeout;
- (void)invalidate;
- (void)_handleAttentionAwarenessEvent:(id)a0;

@end
