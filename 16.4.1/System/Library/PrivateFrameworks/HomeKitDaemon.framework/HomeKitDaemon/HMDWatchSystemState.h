@class NSHashTable;

@interface HMDWatchSystemState : HMFObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, nonatomic) NSHashTable *watchSystemStateDelegates;
@property (nonatomic, getter=isCompanionReachable) BOOL companionReachable;

+ (id)sharedState;

- (void)registerDelegate:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)_callDidUpdateReachabilityChangeForCompanion:(BOOL)a0 forDelegate:(id)a1;

@end
