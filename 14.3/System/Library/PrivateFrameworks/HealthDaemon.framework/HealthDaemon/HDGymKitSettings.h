@class NSString, HDProfile, NRDevice;
@protocol HDGymKitSettingsDelegate;

@interface HDGymKitSettings : NSObject <HDDatabaseProtectedDataObserver, HDDataObserver, NRDevicePropertyObserver> {
    HDProfile *_profile;
    unsigned long long _nfcPermission;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    int _privacyNotificationToken;
    NRDevice *_currentDevice;
}

@property (readonly, nonatomic) unsigned long long nfcPermission;
@property (readonly, nonatomic) BOOL fitnessTrackingEnabled;
@property (weak, nonatomic) id<HDGymKitSettingsDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithProfile:(id)a0;
- (void)device:(id)a0 propertyDidChange:(id)a1 fromValue:(id)a2;
- (void).cxx_destruct;
- (void)dealloc;
- (void)samplesAdded:(id)a0 anchor:(id)a1;
- (void)database:(id)a0 protectedDataDidBecomeAvailable:(BOOL)a1;
- (void)_monitorFieldAndPrivacySettings;
- (void)_startObservingWatchWorkouts;
- (void)_setNFCAlwaysOnPreferenceIfNecessary;
- (void)_stopObservingWatchWorkouts;
- (BOOL)_isSatelliteWatch;
- (void)_setConnectedGymPreferencesDefaultNFCAlwaysOnEnabled:(BOOL)a0;
- (void)_handleNFCPreferencesForNFCAlwaysOn:(BOOL)a0;
- (void)_currentActivityMoveModeWithCompletion:(id /* block */)a0;
- (void)_enableNFCAlwaysOnIfWatchWorkout;
- (void)unitTest_simulateNRDeviceUpdate;

@end
