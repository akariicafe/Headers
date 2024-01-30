@class HDKeyValueDomain, NSString, HDProfile, FCCDateProvider, NSDateComponents, NSObject, HKCategorySample;
@protocol FCMoveModeCoordinatorDelegate, OS_dispatch_queue;

@interface FCMoveModeCoordinator : NSObject <HDHealthDaemonReadyObserver, HDDatabaseProtectedDataObserver, HDDataObserver> {
    HDProfile *_profile;
    NSObject<OS_dispatch_queue> *_serviceQueue;
    NSDateComponents *_birthDateComponents;
    HKCategorySample *_mostRecentActivityMoveModeChangeSample;
    BOOL _isWheelchairUser;
    HDKeyValueDomain *_keyValueDomain;
    FCCDateProvider *_dateProvider;
}

@property (weak, nonatomic) id<FCMoveModeCoordinatorDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)samplesAdded:(id)a0 anchor:(id)a1;
- (void)notificationPosted:(id)a0 error:(id)a1;
- (id)_lastWheelchairModeChangeNotificationDate;
- (void)database:(id)a0 protectedDataDidBecomeAvailable:(BOOL)a1;
- (void)daemonReady:(id)a0;
- (void)_saveMoveModeChangeSampleForActivityMoveMode:(long long)a0 date:(id)a1;
- (BOOL)_queue_loadWheelchairUse;
- (long long)_nextActivityMoveModeForNotificationType:(long long)a0;
- (void)_setisWheelchairUser:(BOOL)a0;
- (void)_setMostRecentActivityMoveModeChangeSample:(id)a0;
- (void)_setLastGraduationNotificationDate:(id)a0;
- (id)_tuesdayAfterDate:(id)a0;
- (BOOL)_queue_loadBirthDateComponents;
- (id)_upgradeToMoveTimeNotificationDate;
- (id)_nextActivityMoveModeStartDateForNotificationType:(long long)a0;
- (void)_setLastWheelchairModeChangeNotificationDate:(id)a0;
- (id)_tuesdayBeforeDate:(id)a0;
- (BOOL)_queue_loadMoveModeChangeSample;
- (id)initWithDateProvider:(id)a0 profile:(id)a1 serviceQueue:(id)a2;
- (double)_delay;
- (void)dealloc;
- (id)keyValueDomain;
- (id)_dateForKey:(id)a0;
- (void)_userCharacteristicsDidChange;
- (void)_setBirthDateComponents:(id)a0;
- (id)_lastModeChangeNotificationDate;
- (void)_setUpgradeToMoveTimeNotificationDate:(id)a0;
- (void)_setLastModeChangeNotificationDate:(id)a0;
- (void)_setDate:(id)a0 forKey:(id)a1;
- (id)_dateByAddingNumberOfWeeks:(long long)a0 toDate:(id)a1;
- (void)_significantTimeChangeOccurred;
- (id)_birthdayForAge:(long long)a0;
- (id)_lastGraduationNotificationDate;
- (void).cxx_destruct;
- (void)_queue_scheduleNotificationIfNeeded;
- (long long)_queue_determineActivityMoveModeNotificationType;

@end
