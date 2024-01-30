@class NSString, HDProfile, NSObject;
@protocol OS_dispatch_queue;

@interface HDAgeGatingManager : NSObject <HDHealthDaemonReadyObserver, HDDatabaseProtectedDataObserver> {
    HDProfile *_profile;
    NSObject<OS_dispatch_queue> *_queue;
    int _significantTimeChangeNotificationToken;
    int _userCharacteristicsDidChangeNotificationToken;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithProfile:(id)a0;
- (void)_registerForNotifications;
- (void)didRecieveDayChangeNotification:(id)a0;
- (void).cxx_destruct;
- (void)_setAgeGatingEnabled:(BOOL)a0 forKey:(id)a1;
- (void)_unregisterNotifications;
- (void)dealloc;
- (void)daemonReady:(id)a0;
- (id)initWithProfile:(id)a0 queue:(id)a1;
- (void)database:(id)a0 protectedDataDidBecomeAvailable:(BOOL)a1;
- (id)_ageWithDateOfBirthComponents:(id)a0;
- (void)_queue_updateAgeGating;
- (void)unitTesting_updateAgeGates;
- (void)_updateUserDefaultsWithAge:(id)a0;

@end
