@class NSDate, NSString, DNDModeConfigurationService, ATXActivitySuggestionClient, DNDModeAssertionService, DNDStateService, DNDBehaviorSettings, DNDSettingsService, NSObject, UNUserNotificationCenter, DNDState;
@protocol OS_dispatch_queue;

@interface DNDNotificationsService : NSObject <DNDStateUpdateListener, DNDSettingsUpdateListener, UNUserNotificationCenterDelegate, ATXActivitySuggestionClientObserver> {
    NSObject<OS_dispatch_queue> *_queue;
    DNDModeAssertionService *_notificationsAssertionService;
    DNDStateService *_notificationsStateService;
    DNDSettingsService *_notificationsSettingsService;
    DNDModeConfigurationService *_notificationsModeConfigurationService;
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
    UNUserNotificationCenter *_notificationsCenter;
    ATXActivitySuggestionClient *_activitySuggestionClient;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (void)userNotificationCenter:(id)a0 didReceiveNotificationResponse:(id)a1 withCompletionHandler:(id /* block */)a2;
- (void)stateService:(id)a0 didReceiveDoNotDisturbStateUpdate:(id)a1;
- (void)_setModeConfiguration:(id)a0;
- (void)settingsService:(id)a0 didReceiveUpdatedBehaviorSettings:(id)a1;
- (id)_modeConfigurationForIdentifier:(id)a0;
- (void)activitySuggestionClient:(id)a0 didSuggestSettingUpActivity:(id)a1;
- (id)_modeForIdentifier:(id)a0;
- (id)initWithClientIdentifier:(id)a0;
- (void).cxx_destruct;
- (void)activitySuggestionClient:(id)a0 didSuggestTriggersForConfiguredActivity:(id)a1;
- (void)resume;

@end
