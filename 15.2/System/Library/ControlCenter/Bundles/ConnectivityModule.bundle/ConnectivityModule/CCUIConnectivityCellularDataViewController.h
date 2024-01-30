@class NSString;

@interface CCUIConnectivityCellularDataViewController : CCUIConnectivityButtonViewController <MCProfileConnectionObserver>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isSupported;

- (void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)a0 userInfo:(id)a1;
- (id)displayName;
- (BOOL)_isCellularDataButtonDemoMode;
- (void)viewWillAppear:(BOOL)a0;
- (void)stopObservingStateChanges;
- (void)viewWillDisappear:(BOOL)a0;
- (BOOL)_canShowWhileLocked;
- (void)buttonTapped:(id)a0;
- (id)_debugDescriptionForState:(BOOL)a0;
- (id)init;
- (void)startObservingStateChanges;
- (BOOL)_isCellularDataRestricted;
- (BOOL)_toggleState;
- (void)_updateState;

@end
