@class NSMutableDictionary, SBWakeDestination, NSHashTable, SBLayoutStateTransitionCoordinator, NSMutableArray, NSString;

@interface SBSecureAppManager : NSObject <SBLayoutStateTransitionObserver>

@property (retain, nonatomic) NSMutableDictionary *secureAppActions;
@property (retain, nonatomic) NSMutableArray *remoteAlertActions;
@property (retain, nonatomic) NSHashTable *observers;
@property (readonly, nonatomic) BOOL hasSecureApp;
@property (readonly, nonatomic) BOOL hasWakeDestination;
@property (readonly, nonatomic) SBWakeDestination *wakeDestination;
@property (retain, nonatomic) SBLayoutStateTransitionCoordinator *secureAppTransitionCoordinator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)_enumerateSecureAppActionsByPriorityUsingBlock:(id /* block */)a0;
- (BOOL)hasSecureAppOfType:(unsigned long long)a0;
- (void)addObserver:(id)a0;
- (id)newApplicationSceneEntityForCurrentSecureApp;
- (id)secureAppAction;
- (id)_applicationForAction:(id)a0;
- (id)_applicationSceneEntityForAction:(id)a0;
- (void)removeObserver:(id)a0;
- (void)addLockScreenContentAction:(id)a0;
- (void)_enumerateSecureAppActionsOfType:(unsigned long long)a0 usingBlock:(id /* block */)a1;
- (id)init;
- (void)_addRemoteAlertLockScreenContentAction:(id)a0;
- (void)layoutStateTransitionCoordinator:(id)a0 transitionDidEndWithTransitionContext:(id)a1;
- (void)_addSecureAppAction:(id)a0;
- (void).cxx_destruct;

@end
