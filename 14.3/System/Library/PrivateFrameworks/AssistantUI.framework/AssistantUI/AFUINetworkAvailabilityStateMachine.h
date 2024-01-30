@class RadiosPreferences, NSString, AFUIStateMachine;
@protocol AFUINetworkAvailabilityStateMachineDelegate;

@interface AFUINetworkAvailabilityStateMachine : NSObject <AFUIStateMachineDelegate, RadiosPreferencesDelegate>

@property (weak, nonatomic) id<AFUINetworkAvailabilityStateMachineDelegate> delegate;
@property (retain, nonatomic) RadiosPreferences *radioPreferences;
@property (retain, nonatomic) AFUIStateMachine *stateMachine;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)_state;
- (void).cxx_destruct;
- (void)airplaneModeChanged;
- (id)initWithDelegate:(id)a0;
- (id)_stateMachine;
- (void)_siriNetworkAvailabilityDidChange:(unsigned long long)a0;
- (void)_performTransitionForEvent:(long long)a0;
- (void)stateMachine:(id)a0 didTransitionFromState:(long long)a1 forEvent:(long long)a2;
- (id)stateMachine:(id)a0 descriptionForEvent:(long long)a1;
- (void)siriNetworkAvailabilityDidChange;

@end
