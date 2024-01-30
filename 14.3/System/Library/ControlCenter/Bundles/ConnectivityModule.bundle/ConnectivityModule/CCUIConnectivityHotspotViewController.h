@class WFPersonalHotspotStateMonitor, NSString;

@interface CCUIConnectivityHotspotViewController : CCUIConnectivityButtonViewController <MCProfileConnectionObserver>

@property (retain) WFPersonalHotspotStateMonitor *phStateMonitor;
@property (getter=isAvailable) BOOL available;
@property (getter=isDiscoverable) BOOL discoverable;
@property unsigned int connections;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isSupported;

- (id)subtitleText;
- (id)init;
- (BOOL)_toggleState;
- (void).cxx_destruct;
- (void)_updateDiscoverability;
- (void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)a0 userInfo:(id)a1;
- (BOOL)_isHotSpotRestricted;
- (void)_updateState;
- (void)buttonTapped:(id)a0;
- (void)_hostAPStateChanged;
- (void)_networkTetheringStateChanged;
- (void)viewWillAppear:(BOOL)a0;
- (void)startObservingStateChanges;
- (void)stopObservingStateChanges;
- (BOOL)_isCellularDataEnabled;
- (void)viewDidDisappear:(BOOL)a0;
- (BOOL)_canShowWhileLocked;
- (id)displayName;
- (void)_setGlobalServiceState:(int)a0;

@end
