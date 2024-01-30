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
- (void)buttonTapped:(id)a0;
- (BOOL)_toggleState;
- (void)_updateState;
- (id)displayName;
- (void)_hostAPStateChanged;
- (void)stopObservingStateChanges;
- (void)startObservingStateChanges;
- (id)subtitleText;
- (BOOL)_isHotSpotRestricted;
- (BOOL)_canShowWhileLocked;
- (void)_updateDiscoverability;
- (id)init;
- (void)viewDidDisappear:(BOOL)a0;
- (void)_setGlobalServiceState:(int)a0;
- (BOOL)_isCellularDataEnabled;
- (void)_networkTetheringStateChanged;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;

@end
