@class RBEventQueue, NSDictionary, NSMutableSet, NSObject;
@protocol RBTimeProviding, OS_dispatch_queue, RBProcessManaging;

@interface RBPrewarmManager : NSObject {
    id<RBProcessManaging> _delegate;
    id<RBTimeProviding> _timeProvider;
    NSObject<OS_dispatch_queue> *_prewarmingQueue;
    NSMutableSet *_pendingPrewarms;
    RBEventQueue *_prewarmingEventQueue;
    NSDictionary *_lastAppliedConfiguration;
    NSDictionary *_currentConfiguration;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _dataLock;
}

- (void)_queue_schedulePrewarmForIdentity:(id)a0 withInterval:(id)a1;
- (void)identityDidTerminate:(id)a0;
- (id)_prewarmingQueue;
- (void)_queue_runPrewarm;
- (id)initWithDelegate:(id)a0 timeProvider:(id)a1;
- (void)_queue_checkForNewPrewarms;
- (void)_queue_addPrewarmForIdentity:(id)a0;
- (void)prewarmingConfigurationDidChange:(id)a0;
- (void).cxx_destruct;

@end
