@class NSString, HDProfile, NSObject;
@protocol OS_dispatch_queue;

@interface HDAgeGatingManager : NSObject <HDProfileReadyObserver, HDDatabaseProtectedDataObserver> {
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
- (void)unitTesting_updateAgeGates;
- (void)didRecieveDayChangeNotification:(id)a0;
- (void)profileDidBecomeReady:(id)a0;
- (void).cxx_destruct;
- (void)database:(id)a0 protectedDataDidBecomeAvailable:(BOOL)a1;
- (id)ageInYearsWithError:(id *)a0;
- (void)dealloc;
- (id)initWithProfile:(id)a0 queue:(id)a1;

@end
