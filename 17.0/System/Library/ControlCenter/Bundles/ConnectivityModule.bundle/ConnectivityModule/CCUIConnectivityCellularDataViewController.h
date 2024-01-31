@class NSString;

@interface CCUIConnectivityCellularDataViewController : CCUIConnectivityButtonViewController <MCProfileConnectionObserver>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isSupported;

- (id)init;
- (void)viewWillAppear:(BOOL)a0;
- (void)startObservingStateChanges;
- (id)_debugDescriptionForState:(BOOL)a0;
- (void)buttonTapped:(id)a0;
- (void)_updateState;
- (BOOL)_isCellularDataButtonDemoMode;
- (BOOL)_toggleState;
- (void)stopObservingStateChanges;
- (void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)a0 userInfo:(id)a1;
- (void)viewWillDisappear:(BOOL)a0;
- (BOOL)_canShowWhileLocked;
- (id)displayName;
- (BOOL)_isCellularDataRestricted;

@end
