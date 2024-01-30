@class NSMutableDictionary, SBWakeDestination, NSHashTable, NSMutableArray;

@interface SBSecureAppManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *secureAppActions;
@property (retain, nonatomic) NSMutableArray *remoteAlertActions;
@property (retain, nonatomic) NSHashTable *observers;
@property (readonly, nonatomic) BOOL hasSecureApp;
@property (readonly, nonatomic) BOOL hasWakeDestinaton;
@property (readonly, nonatomic) SBWakeDestination *wakeDestinaton;

+ (id)sharedInstance;

- (id)_applicationSceneEntityForAction:(id)a0;
- (void)_addSecureAppAction:(id)a0;
- (id)_applicationForAction:(id)a0;
- (void)_addRemoteAlertLockScreenContentAction:(id)a0;
- (void)addObserver:(id)a0;
- (void)removeObserver:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)secureAppAction;
- (void)addLockScreenContentAction:(id)a0;
- (id)newApplicationSceneEntityForCurrentSecureApp;
- (void)_enumerateSecureAppActionsOfType:(unsigned long long)a0 usingBlock:(id /* block */)a1;
- (BOOL)hasSecureAppOfType:(unsigned long long)a0;
- (void)_enumerateSecureAppActionsByPriorityUsingBlock:(id /* block */)a0;

@end
