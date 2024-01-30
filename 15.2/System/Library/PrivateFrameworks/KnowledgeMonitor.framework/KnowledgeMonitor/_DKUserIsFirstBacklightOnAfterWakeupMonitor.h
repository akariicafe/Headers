@class NSString, _DKEvent, _DKPeriod, NSDate;

@interface _DKUserIsFirstBacklightOnAfterWakeupMonitor : _DKMonitor <_DKNotificationReceiver, _DKInstantMonitor, _DKHistoricalMonitor> {
    _DKPeriod *eligibleForNotification;
    int displayStatusNotifyToken;
    int internalSettingChangedNotificationToken;
    BOOL _enabled;
}

@property (nonatomic) BOOL FirstWakeUINotificationEnabled;
@property (nonatomic) BOOL SoftwareUpdateUINotificationEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) id /* block */ instantHandler;
@property (readonly, nonatomic) _DKEvent *currentEvent;
@property (copy, nonatomic) id /* block */ historicalHandler;
@property (copy, nonatomic) id /* block */ shutdownHandler;
@property (readonly, nonatomic) NSDate *lastUpdate;

+ (id)eventStream;
+ (id)fetchMostRecentPastEventForStream:(id)a0;
+ (id)fetchMostRecentlyStoredScreenLockEventOnlyIfValueIsUnlocked;
+ (id)prettyPrintDateAsLocalTime:(id)a0;

- (id)getNextSWUpdatePrediction;
- (BOOL)isUINotificationEnabledForKey:(id)a0;
- (id)convertUTCToLocalTimeString:(id)a0;
- (BOOL)eligibleForFirstWakeUINotification;
- (void)registerHandleBacklightEvents;
- (void)setupNotificationEligiblityPeriod;
- (void)receiveNotificationEvent:(id)a0;
- (void)showFirstWakeupUINotification;
- (void)handleBacklightTurnedOffEvent;
- (void)setInternalSettingsChangedNotficationHandler;
- (void)start;
- (void)recordFirstWakeup:(id)a0;
- (void)unregisterHandleBacklightEvents;
- (id)firstWakeupEventWithValue:(BOOL)a0;
- (void).cxx_destruct;
- (BOOL)didQualifyingScreenLockEndInEligibilityPeriod;
- (void)showSoftwareUpdateUINotification;
- (void)handleBacklightTurnedOnEvent;
- (BOOL)isInternalBuild;
- (void)deactivate;
- (void)setUINotificationEligibility;
- (void)dealloc;
- (void)handleScreenUnlockEvent;
- (BOOL)isFirstBacklightOn;
- (void)showUINotification:(id)a0;
- (void)stop;

@end
