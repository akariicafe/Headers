@class NSDate, NSString, DNDModeAssertionService, DNDStateService, DNDBypassSettings, DNDBehaviorSettings, DNDSettingsService, NSObject, UNUserNotificationCenter, DNDState;
@protocol OS_dispatch_queue;

@interface DNDNotificationsService : NSObject <DNDStateUpdateListener, DNDSettingsUpdateListener, UNUserNotificationCenterDelegate> {
    NSObject<OS_dispatch_queue> *_queue;
    DNDModeAssertionService *_notificationsAssertionService;
    DNDStateService *_notificationsStateService;
    DNDSettingsService *_notificationsSettingsService;
    BOOL _doNotDisturbActive;
    BOOL _basicActive;
    BOOL _sleepActive;
    BOOL _windDownActive;
    BOOL _clockBedtimeActive;
    BOOL _settingsBedtimeActive;
    BOOL _drivingActive;
    BOOL _workoutActive;
    NSDate *_transitionDate;
    unsigned long long _transitionLifetimeType;
    DNDState *_currentState;
    DNDBehaviorSettings *_currentBehaviorSettings;
    DNDBypassSettings *_currentPhoneCallBypassSettings;
    UNUserNotificationCenter *_notificationsCenter;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (void)stateService:(id)a0 didReceiveDoNotDisturbStateUpdate:(id)a1;
- (void).cxx_destruct;
- (void)_handleSignificantTimeChange;
- (id)initWithClientIdentifier:(id)a0;
- (void)resume;
- (void)userNotificationCenter:(id)a0 didReceiveNotificationResponse:(id)a1 withCompletionHandler:(id /* block */)a2;
- (void)settingsService:(id)a0 didReceiveUpdatedBehaviorSettings:(id)a1;
- (void)settingsService:(id)a0 didReceiveUpdatedPhoneCallBypassSettings:(id)a1;
- (void)_queue_postOrRemoveNotificationWithUpdatedBehavior:(BOOL)a0 significantTimeChange:(BOOL)a1;

@end
