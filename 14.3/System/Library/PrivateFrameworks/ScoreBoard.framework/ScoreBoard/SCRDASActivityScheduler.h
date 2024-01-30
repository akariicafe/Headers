@class NSObject, NSMutableDictionary, _DASScheduler;
@protocol OS_dispatch_queue;

@interface SCRDASActivityScheduler : SCRActivityScheduler {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    _DASScheduler *_scheduler;
    NSObject<OS_dispatch_queue> *_targetQueue;
    NSMutableDictionary *_lock_activityData;
}

- (id)initWithTargetQueue:(id)a0;
- (id)_popActivityWithIdentifier:(id)a0;
- (void).cxx_destruct;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)dealloc;
- (void)completeActivityWithIdentifier:(id)a0;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void)submitActivity:(id)a0;
- (id)description;
- (id)succinctDescriptionBuilder;
- (id)_dasActivityForActivity:(id)a0;
- (void)_activityWithIdentifierDidBegin:(id)a0;
- (void)cancelActivityWithIdentifier:(id)a0;
- (void)_enqueueActivityWithMetadata:(id)a0;

@end
