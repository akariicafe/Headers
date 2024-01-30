@class NSString, CMPocketStateManager;

@interface SASSiriPocketStateManager : NSObject <CMPocketStateDelegate>

@property (retain, nonatomic, getter=_pocketStateManager, setter=_setPocketStateManager:) CMPocketStateManager *pocketStateManager;
@property (nonatomic, getter=_currentPocketState, setter=_setCurrentPocketState:) long long currentPocketState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)new;
+ (id)sharedManager;

- (id)init;
- (void).cxx_destruct;
- (BOOL)pocketStateShouldPreventVoiceTrigger;
- (void)pocketStateManager:(id)a0 didUpdateState:(long long)a1;
- (id)_init;
- (void)_updateForPocketState:(long long)a0;
- (id)_stringForPocketState:(long long)a0;
- (void)queryForPocketStateWithCompletion:(id /* block */)a0;

@end
