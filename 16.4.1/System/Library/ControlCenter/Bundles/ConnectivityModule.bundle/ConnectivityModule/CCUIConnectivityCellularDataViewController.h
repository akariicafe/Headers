@class NSString;

@interface CCUIConnectivityCellularDataViewController : CCUIConnectivityButtonViewController <MCProfileConnectionObserver>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isSupported;

- (void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)a0 userInfo:(id)a1;
- (BOOL)_isCellularDataRestricted;
- (void)buttonTapped:(id)a0;
- (BOOL)_toggleState;
- (void)_updateState;
- (id)displayName;
- (id)_debugDescriptionForState:(BOOL)a0;
- (void)stopObservingStateChanges;
- (void)startObservingStateChanges;
- (BOOL)_canShowWhileLocked;
- (BOOL)_isCellularDataButtonDemoMode;
- (void)viewWillDisappear:(BOOL)a0;
- (id)init;
- (void)viewWillAppear:(BOOL)a0;

@end
