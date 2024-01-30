@class RadiosPreferences, NSObject;
@protocol OS_dispatch_queue;

@interface CCUIConnectivityAirplaneViewController : CCUIConnectivityButtonViewController <RadiosPreferencesDelegate>

@property (retain, nonatomic) RadiosPreferences *airplaneModeController;
@property (nonatomic, getter=_isAirplaneModeEnabled, setter=_setAirplaneModeEnabled:) BOOL airplaneModeEnabled;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;

- (id)displayName;
- (void)viewWillAppear:(BOOL)a0;
- (void)stopObservingStateChanges;
- (void)viewWillDisappear:(BOOL)a0;
- (BOOL)_canShowWhileLocked;
- (void)buttonTapped:(id)a0;
- (id)_debugDescriptionForState:(BOOL)a0;
- (void).cxx_destruct;
- (id)init;
- (void)startObservingStateChanges;
- (void)airplaneModeChanged;
- (BOOL)_toggleState;
- (void)dealloc;
- (BOOL)_isStateOverridden;
- (BOOL)_stateWithEffectiveOverrides;
- (void)_updateStateWithEnabled:(BOOL)a0;
- (void)_updateState;

@end
