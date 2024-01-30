@class HMDMetricsDateProvider, NSString, HMFTimer, NSMutableDictionary, HMFWifiNetworkAssociation, HMFWiFiManager, HMDEventCountersManager, HMDLogEventDailyScheduler, NSNotificationCenter;
@protocol HMDCurrentResidentDeviceDataSource, HMMLogEventDispatching;

@interface HMDNetworkObserver : NSObject <HMFTimerDelegate, HMMLogEventObserver, HMDLogEventDailyTaskRunner>

@property (readonly, weak, nonatomic) id<HMMLogEventDispatching> logEventDispatcher;
@property (readonly, weak, nonatomic) HMDEventCountersManager *countersManager;
@property (readonly, weak, nonatomic) HMFWiFiManager *wifiManager;
@property (readonly, weak, nonatomic) NSNotificationCenter *notificationCenter;
@property (readonly, weak, nonatomic) id<HMDCurrentResidentDeviceDataSource> currentHomeDataSource;
@property (readonly, weak, nonatomic) HMDMetricsDateProvider *dateProvider;
@property (readonly, weak, nonatomic) HMDLogEventDailyScheduler *dailyScheduler;
@property (nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } networkAssociationLock;
@property (readonly, nonatomic) HMFWifiNetworkAssociation *networkAssociation;
@property (nonatomic) BOOL wifiAssociated;
@property (readonly) unsigned long long collectionStartSeconds;
@property (readonly, nonatomic) unsigned long long numWifiAssociations;
@property (readonly, nonatomic) unsigned long long numWifiDisassociations;
@property (readonly, nonatomic) unsigned long long numAPChanges;
@property (readonly, nonatomic) unsigned long long numGatewayChanges;
@property (readonly, nonatomic) unsigned long long numReadWrites;
@property (readonly, nonatomic) unsigned long long numReadErrors;
@property (readonly, nonatomic) unsigned long long numWriteErrors;
@property (readonly, nonatomic) NSMutableDictionary *topWriteErrors;
@property (readonly, nonatomic) NSMutableDictionary *topSessionErrors;
@property (readonly, nonatomic) BOOL started;
@property (readonly, nonatomic) id /* block */ tickBlock;
@property (readonly) HMFTimer *changeDebounceTimer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)supportedEventClasses;

- (void)timerDidFire:(id)a0;
- (void)stop;
- (void)start;
- (void).cxx_destruct;
- (void)didReceiveEventFromDispatcher:(id)a0;
- (void)_clearNonPersistentCounters;
- (void)_handleAccessorySessionEvent:(id)a0;
- (void)_handleCurrentNetworkChangedNotification:(id)a0;
- (void)_handleReadWriteLogEvent:(id)a0;
- (void)_incrementError:(id)a0 forHistogram:(id)a1 byValue:(unsigned long long)a2;
- (id)_keyOfLargestCountInHistogram:(id)a0;
- (void)checkNetworkChange;
- (id)counterGroupForName:(id)a0 homeUUID:(id)a1 date:(id)a2;
- (void)deleteCountersAfterDate:(id)a0;
- (void)deleteCountersBeforeDate:(id)a0;
- (id)initWithLogEventDispatcher:(id)a0 countersManager:(id)a1 dailyScheduler:(id)a2 currentHomeDataSource:(id)a3 dateProvider:(id)a4;
- (id)initWithLogEventDispatcher:(id)a0 countersManager:(id)a1 dailyScheduler:(id)a2 currentHomeDataSource:(id)a3 dateProvider:(id)a4 wifiManager:(id)a5 notificationCenter:(id)a6 changeDebounceTimer:(id)a7 tickBlock:(id /* block */)a8;
- (id)logEventForHomeWithUUID:(id)a0 associatedWithDate:(id)a1;
- (void)runDailyTask;

@end
