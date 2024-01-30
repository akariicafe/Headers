@class NSMutableDictionary, PLEntryNotificationOperatorComposition, NSObject, PLSemaphore;
@protocol OS_nw_path_monitor, OS_dispatch_queue;

@interface PLNetworkAgent : PLAgent

@property (retain) PLEntryNotificationOperatorComposition *batteryLevelChanged;
@property (retain) PLEntryNotificationOperatorComposition *canSleep;
@property (retain) PLSemaphore *canSleepSemaphore;
@property (retain) NSMutableDictionary *lastIsExpensiveProperties;
@property (retain) NSObject<OS_nw_path_monitor> *nwPathMonitorCellular;
@property (retain) NSObject<OS_nw_path_monitor> *nwPathMonitorWiFi;
@property (retain) NSObject<OS_nw_path_monitor> *nwPathMonitorWired;
@property (retain) NSObject<OS_nw_path_monitor> *nwPathMonitorLoopback;
@property (retain) NSObject<OS_nw_path_monitor> *nwPathMonitorOther;
@property (retain) NSObject<OS_dispatch_queue> *nwPathMonitorQueue;

+ (void)load;
+ (id)defaults;
+ (id)railDefinitions;
+ (id)accountingGroupDefinitions;
+ (id)entryEventBackwardDefinitions;
+ (id)entryEventIntervalDefinitions;
+ (id)entryEventForwardDefinitionNetworkIsExpensive;
+ (id)entryEventForwardDefinitions;
+ (id)entryEventNoneDefinitions;

- (id)init;
- (void).cxx_destruct;
- (void)log;
- (id)NWPathMonitorWithInterface:(int)a0;
- (void)handleNWPathUpdate:(id)a0;
- (void)logEventBackwardCumulativeNetworkUsage;
- (void)initOperatorDependancies;

@end
