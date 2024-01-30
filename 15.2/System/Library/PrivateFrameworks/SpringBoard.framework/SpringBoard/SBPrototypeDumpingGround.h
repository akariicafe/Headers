@class NSString, SBBiometricMonitorUI;

@interface SBPrototypeDumpingGround : NSObject <PTSettingsKeyObserver> {
    SBBiometricMonitorUI *_pearlMonitorUI;
    id _appLaunchedNotificationToken;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)settings:(id)a0 changedValueForKey:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)_updatePearlDebugUI;

@end
