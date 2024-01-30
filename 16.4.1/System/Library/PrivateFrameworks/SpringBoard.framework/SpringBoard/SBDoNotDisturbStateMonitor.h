@class NSString, DNDState, NSHashTable, DNDStateService;

@interface SBDoNotDisturbStateMonitor : NSObject <DNDStateUpdateListener> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSHashTable *_lock_observers;
    DNDState *_lock_state;
    DNDStateService *_stateService;
}

@property (readonly, copy, nonatomic) DNDState *state;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)stateService:(id)a0 didReceiveDoNotDisturbStateUpdate:(id)a1;
- (void)addObserver:(id)a0;
- (void)removeObserver:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)_noteNewDNDState:(id)a0;

@end
