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

- (void)deactivate;
- (void)receiveNotificationEvent:(id)a0;
- (void)showSoftwareUpdateUINotification;
- (BOOL)isInternalBuild;
- (void)recordFirstWakeup:(id)a0;
- (void)handleScreenUnlockEvent;
- (void)setInternalSettingsChangedNotficationHandler;
- (void)showFirstWakeupUINotification;
- (BOOL)didQualifyingScreenLockEndInEligibilityPeriod;
- (void)handleBacklightTurnedOnEvent;
- (id)getNextSWUpdatePrediction;
- (id)convertUTCToLocalTimeString:(id)a0;
- (id)firstWakeupEventWithValue:(BOOL)a0;
- (BOOL)eligibleForFirstWakeUINotification;
- (void)dealloc;
- (void)unregisterHandleBacklightEvents;
- (void)setupNotificationEligiblityPeriod;
- (BOOL)isFirstBacklightOn;
- (void)handleBacklightTurnedOffEvent;
- (void)stop;
- (void)start;
- (BOOL)isUINotificationEnabledForKey:(id)a0;
- (void)showUINotification:(id)a0;
- (void).cxx_destruct;
- (void)registerHandleBacklightEvents;
- (void)setUINotificationEligibility;

@end
