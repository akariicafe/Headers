@class RBSAssertion, NSString, NSMutableSet, NSMutableArray, FBSystemShellInitializationContext;

@interface FBSystemShell : NSObject <BSDescriptionProviding, BKSSystemApplicationDelegate> {
    id _observerToken;
    RBSAssertion *_runningAssertion;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    RBSAssertion *_lock_preventSleepAssertion;
    NSMutableSet *_lock_preventIdleSleepReasons;
    NSMutableArray *_lock_blocksToRunWhenReady;
}

@property (readonly, nonatomic) unsigned long long _state;
@property (readonly, nonatomic) FBSystemShellInitializationContext *initializationContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)_createSingletonWithOptions:(id)a0;
+ (BOOL)systemApplicationIsAliveForWatchdog:(id)a0;

- (id)_initWithOptions:(id)a0;
- (void)_setState:(unsigned long long)a0;
- (void)_setSystemIdleSleepDisabled:(BOOL)a0 forReason:(id)a1;
- (void).cxx_destruct;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescription;
- (void)_addBlockToExecuteWhenReady:(id /* block */)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void)sendActionsToBackBoard:(id)a0;
- (id)succinctDescriptionBuilder;
- (id)_bksSystemApplication;
- (void)readyForInteraction;
- (void)_initializationComplete;

@end
