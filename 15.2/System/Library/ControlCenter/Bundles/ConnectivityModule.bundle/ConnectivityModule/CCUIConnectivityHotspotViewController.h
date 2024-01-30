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

- (void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)a0 userInfo:(id)a1;
- (id)displayName;
- (void)viewWillAppear:(BOOL)a0;
- (void)stopObservingStateChanges;
- (BOOL)_canShowWhileLocked;
- (id)subtitleText;
- (void)buttonTapped:(id)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)_networkTetheringStateChanged;
- (void).cxx_destruct;
- (id)init;
- (BOOL)_isCellularDataEnabled;
- (void)startObservingStateChanges;
- (BOOL)_isHotSpotRestricted;
- (BOOL)_toggleState;
- (void)_updateDiscoverability;
- (void)_setGlobalServiceState:(int)a0;
- (void)_hostAPStateChanged;
- (void)_updateState;

@end
