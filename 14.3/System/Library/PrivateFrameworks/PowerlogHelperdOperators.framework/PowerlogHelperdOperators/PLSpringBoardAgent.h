@class PLTimer, NSDate, PLMonotonicTimer, PLEntryNotificationOperatorComposition, PLCFNotificationOperatorComposition, NSDictionary, PLEntry, PLXPCListenerOperatorComposition, PLNSNotificationOperatorComposition;

@interface PLSpringBoardAgent : PLAgent

@property (readonly) PLNSNotificationOperatorComposition *notificationSBScreenTimeTrackingChanged;
@property (readonly) PLCFNotificationOperatorComposition *notificationSBLockTrackingChanged;
@property (readonly) PLCFNotificationOperatorComposition *notificationSBBlankTrackingChanged;
@property (readonly) PLNSNotificationOperatorComposition *notificationSBWallpaperTrackingChanged;
@property (readonly) PLNSNotificationOperatorComposition *notificationSBAutoLockTimerFiredNotification;
@property (retain) PLTimer *dailyWallpaperPoll;
@property BOOL autoLockIsNil;
@property (retain) PLEntryNotificationOperatorComposition *displayOnNotification;
@property (retain) PLEntryNotificationOperatorComposition *displayOffNotification;
@property (retain) PLEntryNotificationOperatorComposition *receivedPushNotification;
@property (readonly) PLXPCListenerOperatorComposition *userNotificationRequestEvent;
@property (readonly) PLXPCListenerOperatorComposition *userNotificationTriggerEvent;
@property (readonly) PLXPCListenerOperatorComposition *bulletinBoardNotificationPublishEvent;
@property (retain) PLMonotonicTimer *autolockEnergyPeriodicTimer;
@property (retain) NSDate *lastEligibleAutolockEnergyComputationDate;
@property (retain) NSDictionary *screenNumberToName;
@property BOOL deviceIsCharging;
@property (retain) PLEntryNotificationOperatorComposition *deviceChargingStateNotification;
@property (retain) PLEntry *lastSBEntry;
@property (retain, nonatomic) PLEntry *lastReceivedPushEntry;

+ (void)load;
+ (id)defaults;
+ (id)entryEventPointDefinitions;
+ (id)entryEventBackwardDefinitions;
+ (id)entryAggregateDefinitions;
+ (id)entryEventForwardDefinitions;
+ (id)entryEventPointAutoLock;
+ (id)entryEventPointLocalRemoteNotifications;
+ (id)entryEventPointBulletins;
+ (id)entryEventForwardDefinitionBlank;
+ (id)entryEventForwardDefinitionLock;
+ (id)entryEventForwardDefinitionScreen;
+ (id)entryEventForwardDefinitionWallpaper;
+ (id)entryAggregateDefinitionNotifications;
+ (id)entryAggregateDefinitionBulletins;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)log;
- (double)currentMediaTime;
- (void)initOperatorDependancies;
- (void)setUpScreenNumberDictionary;
- (void)resetAutoLockIsNil;
- (void)settingsChangedNotification:(id)a0;
- (void)addAccountingEvent:(id)a0;
- (id)fetchSBWallpaperForType:(int)a0;
- (void)handleChargingStateChange:(id)a0;
- (void)startAutolockEnergyPeriodicTimer;
- (void)stopAutolockEnergyPeriodicTimer;
- (void)logBulletin:(id)a0;
- (void)logNotification:(id)a0;
- (void)logMailNotification:(id)a0;
- (void)computeAutolockEnergyWithNow:(id)a0;
- (id)screenLock:(id)a0;
- (id)addCountsAndDurationsFor:(id)a0 toEntry:(id)a1;
- (void)closeLastOpenEventsWithStopDate:(id)a0;

@end
