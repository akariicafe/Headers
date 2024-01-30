@class AWAttentionAwarenessClient, AWAttentionAwarenessConfiguration;
@protocol ITAttentionAwarenessClientDelegate;

@interface ITAttentionAwarenessClient : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _accessLock;
}

@property (retain, nonatomic) AWAttentionAwarenessClient *_access_attentionAwarenessClient;
@property (weak, nonatomic) id<ITAttentionAwarenessClientDelegate> delegate;
@property (retain, nonatomic) AWAttentionAwarenessConfiguration *configuration;
@property (nonatomic, getter=isEnabled) BOOL enabled;

- (id)init;
- (void)setConfiguration:(id)a0 shouldReset:(BOOL)a1;
- (void).cxx_destruct;
- (id)initWithCalloutQueue:(id)a0;
- (void)_handleAttentionAwarenessEvent:(id)a0;
- (id)_initWithCalloutQueue:(id)a0 attentionAwarenessClient:(id)a1;
- (void)_access_resume;
- (void)_access_suspend;

@end
