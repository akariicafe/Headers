@class HMDHomeManager, NSString, NSUUID, NSNotificationCenter, NSSet, NSObject, NSMutableDictionary;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface HMDWidgetTimelineRefresher : HMFObject <HMFLogging>

@property (weak) HMDHomeManager *homeManager;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly, copy) NSString *clientIdentifier;
@property (readonly) NSNotificationCenter *notificationCenter;
@property (copy) NSUUID *currentHomeUUID;
@property (copy) NSSet *widgetKindsToUpdate;
@property (readonly) NSMutableDictionary *accessoryIsReachableByUUID;
@property (readonly) NSObject<OS_dispatch_source> *widgetRefreshDispatchTimer;
@property (readonly) NSMutableDictionary *characteristicsToPreviouslySeenValues;
@property (copy, nonatomic) id /* block */ forceUpdateWidgetTimelineHandler;
@property (copy, nonatomic) id /* block */ fetchAndStoreActiveWidgetKindsHandler;
@property (copy) NSSet *monitoredCharacteristics;
@property (retain) NSSet *activeWidgetKinds;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (id)fetchSpecificationsForWidgetKinds:(id)a0;

- (void)configure;
- (id)initWithHomeManager:(id)a0;
- (void).cxx_destruct;
- (id)internalMonitorCharacteristicsForCurrentHome:(id)a0 activeWidgetKinds:(id)a1;
- (void)fetchAndStoreActiveWidgetKinds;
- (void)forceUpdateTimelineForWidgetKinds:(id)a0;
- (void)handleAccessoryAddedNotification:(id)a0;
- (void)handleAccessoryReachabilityChangedNotification:(id)a0;
- (void)handleAccessoryRemovedNotification:(id)a0;
- (void)handleCurrentOrPrimaryHomeChangedNotification:(id)a0;
- (void)handleHomeAddedNotification:(id)a0;
- (void)handleHomeRemovedNotification:(id)a0;
- (void)handleNotificationOfPossibleNewWidget:(id)a0;
- (void)handleResidentDeviceChangedNotification:(id)a0;
- (id)initWithHomeManager:(id)a0 notificationCenter:(id)a1;
- (void)internalProcessChangedCharacteristics:(id)a0 activeWidgetKinds:(id)a1;
- (id)monitorCharacteristicsForHome:(id)a0 fetchSpecifications:(id)a1;
- (void)processCharacteristicsChangedNotification:(id)a0;
- (void)stopMonitoringOldCharacteristics;
- (void)updateMonitoredCharacteristicsAndRefreshWidgetTimelines;
- (id)widgetKindsToUpdateFromFetchSpecifications:(id)a0 assumingChangedCharacteristic:(id)a1;
- (id)widgetKindsToUpdateFromFetchSpecifications:(id)a0 changedCharacteristics:(id)a1;

@end
