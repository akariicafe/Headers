@class NSString;

@interface CCUIConnectivityCellularDataViewController : CCUIConnectivityButtonViewController <MCProfileConnectionObserver>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isSupported;

- (id)init;
- (BOOL)_toggleState;
- (id)_debugDescriptionForState:(BOOL)a0;
- (void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)a0 userInfo:(id)a1;
- (void)viewWillDisappear:(BOOL)a0;
- (void)_updateState;
- (void)buttonTapped:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)startObservingStateChanges;
- (void)stopObservingStateChanges;
- (BOOL)_isCellularDataButtonDemoMode;
- (BOOL)_canShowWhileLocked;
- (id)displayName;
- (BOOL)_isCellularDataRestricted;

@end
