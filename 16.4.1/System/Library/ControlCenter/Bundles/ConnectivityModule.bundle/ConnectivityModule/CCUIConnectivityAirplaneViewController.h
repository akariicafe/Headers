@class RadiosPreferences, NSObject;
@protocol OS_dispatch_queue;

@interface CCUIConnectivityAirplaneViewController : CCUIConnectivityButtonViewController <RadiosPreferencesDelegate>

@property (retain, nonatomic) RadiosPreferences *airplaneModeController;
@property (nonatomic, getter=_isAirplaneModeEnabled, setter=_setAirplaneModeEnabled:) BOOL airplaneModeEnabled;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;

- (void)buttonTapped:(id)a0;
- (BOOL)_toggleState;
- (void)_updateState;
- (id)displayName;
- (id)_debugDescriptionForState:(BOOL)a0;
- (void)airplaneModeChanged;
- (void)stopObservingStateChanges;
- (void)startObservingStateChanges;
- (BOOL)_canShowWhileLocked;
- (void)_updateStateWithEnabled:(BOOL)a0;
- (void)dealloc;
- (void)viewWillDisappear:(BOOL)a0;
- (id)init;
- (BOOL)_isStateOverridden;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (BOOL)_stateWithEffectiveOverrides;

@end
