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

- (id)init;
- (void)viewWillAppear:(BOOL)a0;
- (void)startObservingStateChanges;
- (void)buttonTapped:(id)a0;
- (void)_updateState;
- (id)subtitleText;
- (BOOL)_toggleState;
- (void)stopObservingStateChanges;
- (BOOL)_isHotSpotRestricted;
- (void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)a0 userInfo:(id)a1;
- (void)_setGlobalServiceState:(int)a0;
- (BOOL)_isCellularDataEnabled;
- (void)_networkTetheringStateChanged;
- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;
- (id)displayName;
- (void)_hostAPStateChanged;
- (void)viewDidDisappear:(BOOL)a0;
- (void)_updateDiscoverability;

@end
