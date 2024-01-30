@protocol MTTimerManagerProviding, MTTimerManagerIntentSupport;

@interface MTTimerIntentHandler : NSObject

@property (retain, nonatomic) id<MTTimerManagerIntentSupport> timerManager;
@property (weak, nonatomic) id<MTTimerManagerProviding> timerManagerProvider;

- (void).cxx_destruct;
- (id)_alternateTimersForTargetTimerState:(long long)a0 type:(long long)a1 inTimers:(id)a2 allowedTimerStates:(id)a3;
- (void)_genericallyResolveTargetTimer:(id)a0 multiple:(BOOL)a1 allowedTimerStatesForFollowup:(id)a2 completion:(id /* block */)a3;
- (BOOL)_isDefaultTimer:(id)a0;
- (void)_matchTimersFromIntentsTimer:(id)a0 excludeStoppedTimers:(BOOL)a1 completion:(id /* block */)a2;
- (id)_onlyUnnamedTimerInTimers:(id)a0 forTargetTimer:(id)a1 allowMultiple:(BOOL)a2;
- (id)_timerManager;

@end
