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

+ (id)fetchMostRecentPastEventForStream:(id)a0;
+ (id)eventStream;
+ (id)fetchMostRecentlyStoredScreenLockEventOnlyIfValueIsUnlocked;
+ (id)prettyPrintDateAsLocalTime:(id)a0;

- (BOOL)isInternalBuild;
- (void).cxx_destruct;
- (void)registerHandleBacklightEvents;
- (void)handleBacklightTurnedOnEvent;
- (void)dealloc;
- (void)recordFirstWakeup:(id)a0;
- (void)stop;
- (BOOL)didQualifyingScreenLockEndInEligibilityPeriod;
- (id)getNextSWUpdatePrediction;
- (void)handleBacklightTurnedOffEvent;
- (void)unregisterHandleBacklightEvents;
- (void)setUINotificationEligibility;
- (BOOL)eligibleForFirstWakeUINotification;
- (void)setupNotificationEligiblityPeriod;
- (void)showSoftwareUpdateUINotification;
- (void)showFirstWakeupUINotification;
- (void)start;
- (void)receiveNotificationEvent:(id)a0;
- (id)convertUTCToLocalTimeString:(id)a0;
- (BOOL)isUINotificationEnabledForKey:(id)a0;
- (void)deactivate;
- (id)firstWakeupEventWithValue:(BOOL)a0;
- (BOOL)isFirstBacklightOn;
- (void)setInternalSettingsChangedNotficationHandler;
- (void)showUINotification:(id)a0;
- (void)handleScreenUnlockEvent;

@end
