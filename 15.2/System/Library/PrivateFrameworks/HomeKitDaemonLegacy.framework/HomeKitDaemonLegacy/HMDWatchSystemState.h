@class NSHashTable;
@protocol HMFLocking;

@interface HMDWatchSystemState : HMFObject {
    id<HMFLocking> _lock;
}

@property (readonly, nonatomic) NSHashTable *watchSystemStateDelegates;
@property (nonatomic, getter=isCompanionReachable) BOOL companionReachable;

+ (id)sharedState;

- (void)registerDelegate:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)_callDidUpdateReachabilityChangeForCompanion:(BOOL)a0 forDelegate:(id)a1;

@end
