@class HDSPEnvironment, NSMutableDictionary, NSString;
@protocol HKSPSyncAnchor;

@interface HDSPSleepMessageStore : NSObject <HDSPEnvironmentAware>

@property (readonly, nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } syncLock;
@property (readonly, nonatomic) NSMutableDictionary *recentMessages;
@property (readonly, nonatomic) id<HKSPSyncAnchor> syncAnchor;
@property (readonly, weak, nonatomic) HDSPEnvironment *environment;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithEnvironment:(id)a0;
- (id)addSleepEventDueMessageWithEvent:(id)a0;
- (void)_withLock:(id /* block */)a0;
- (void)_lock_addSleepMessage:(id)a0;
- (id)_locked_updateSyncAnchor;
- (void)_restoreMessages;
- (id)addSleepMessageOfType:(unsigned long long)a0;
- (id)pendingMessagesForSyncAnchor:(id)a0;
- (id)_locked_syncAnchor;

@end
