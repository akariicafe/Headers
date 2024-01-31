@class RadiosPreferences, NSObject;
@protocol OS_dispatch_queue;

@interface CCUIConnectivityAirplaneViewController : CCUIConnectivityButtonViewController <RadiosPreferencesDelegate>

@property (retain, nonatomic) RadiosPreferences *airplaneModeController;
@property (nonatomic, getter=_isAirplaneModeEnabled, setter=_setAirplaneModeEnabled:) BOOL airplaneModeEnabled;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;

- (void)airplaneModeChanged;
- (id)init;
- (void)viewWillAppear:(BOOL)a0;
- (void)startObservingStateChanges;
- (void)dealloc;
- (id)_debugDescriptionForState:(BOOL)a0;
- (void)buttonTapped:(id)a0;
- (void)_updateState;
- (BOOL)_isStateOverridden;
- (BOOL)_toggleState;
- (void)stopObservingStateChanges;
- (BOOL)_stateWithEffectiveOverrides;
- (void)viewWillDisappear:(BOOL)a0;
- (void)_updateStateWithEnabled:(BOOL)a0;
- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;
- (id)displayName;

@end
