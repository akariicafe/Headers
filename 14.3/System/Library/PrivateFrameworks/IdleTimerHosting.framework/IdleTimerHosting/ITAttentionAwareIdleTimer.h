@class NSString, ITAttentionAwarenessClient, ITIdleTimerDescriptor, ITAttentionAwarenessContext;
@protocol ITIdleTimerDelegate;

@interface ITAttentionAwareIdleTimer : NSObject <ITAttentionAwarenessClientDelegate> {
    struct os_unfair_recursive_lock_s { struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } ourl_lock; unsigned int ourl_count; } _accessLock;
    NSString *_configurationIdentifier;
    ITAttentionAwarenessClient *_access_client;
    ITIdleTimerDescriptor *_access_descriptor;
    ITAttentionAwarenessContext *_access_context;
}

@property (readonly, weak, nonatomic) id<ITIdleTimerDelegate> delegate;
@property (readonly, nonatomic) ITAttentionAwarenessContext *_context;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (readonly, copy, nonatomic) ITIdleTimerDescriptor *descriptor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_timeoutDictionaryForTimeouts:(id)a0;
+ (id)_configurationWithIdentifier:(id)a0 descriptor:(id)a1 context:(id)a2;

- (id)init;
- (void).cxx_destruct;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)reset;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)succinctDescriptionBuilder;
- (id)initWithConfigurationIdentifier:(id)a0 delegate:(id)a1 calloutQueue:(id)a2;
- (void)setDescriptor:(id)a0 resettingTimer:(BOOL)a1;
- (void)client:(id)a0 attentionLostTimeoutDidExpire:(id)a1 forContext:(id)a2;
- (void)clientDidReset:(id)a0 forUserAttentionEvent:(id)a1 withContext:(id)a2;
- (id)_initWithConfigurationIdentifier:(id)a0 delegate:(id)a1 calloutQueue:(id)a2 client:(id)a3;
- (void)_access_reconfigureAttentionClientAndReset:(BOOL)a0;
- (id)_access_generateConfiguration;
- (id)initWithConfigurationIdentifier:(id)a0 delegate:(id)a1;

@end
