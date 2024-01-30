@class RadiosPreferences, NSObject;
@protocol OS_dispatch_queue;

@interface CCUIConnectivityAirplaneViewController : CCUIConnectivityButtonViewController <RadiosPreferencesDelegate>

@property (retain, nonatomic) RadiosPreferences *airplaneModeController;
@property (nonatomic, getter=_isAirplaneModeEnabled, setter=_setAirplaneModeEnabled:) BOOL airplaneModeEnabled;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;

- (id)init;
- (BOOL)_toggleState;
- (void).cxx_destruct;
- (id)_debugDescriptionForState:(BOOL)a0;
- (void)airplaneModeChanged;
- (BOOL)_isStateOverridden;
- (void)dealloc;
- (void)viewWillDisappear:(BOOL)a0;
- (void)_updateState;
- (void)buttonTapped:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)startObservingStateChanges;
- (void)stopObservingStateChanges;
- (BOOL)_stateWithEffectiveOverrides;
- (BOOL)_canShowWhileLocked;
- (id)displayName;
- (void)_updateStateWithEnabled:(BOOL)a0;

@end
