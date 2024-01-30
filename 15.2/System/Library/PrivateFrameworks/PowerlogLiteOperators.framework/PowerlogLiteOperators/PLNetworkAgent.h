@class NSMutableDictionary, PLEntryNotificationOperatorComposition, NSObject, PLSemaphore;
@protocol OS_nw_path_monitor, OS_dispatch_queue;

@interface PLNetworkAgent : PLAgent

@property (retain) PLEntryNotificationOperatorComposition *batteryLevelChanged;
@property (retain) PLEntryNotificationOperatorComposition *canSleep;
@property (retain) PLSemaphore *canSleepSemaphore;
@property (nonatomic) int wakeSocket;
@property (retain) NSMutableDictionary *lastIsExpensiveProperties;
@property (retain) NSObject<OS_nw_path_monitor> *nwPathMonitorCellular;
@property (retain) NSObject<OS_nw_path_monitor> *nwPathMonitorWiFi;
@property (retain) NSObject<OS_nw_path_monitor> *nwPathMonitorWired;
@property (retain) NSObject<OS_nw_path_monitor> *nwPathMonitorLoopback;
@property (retain) NSObject<OS_nw_path_monitor> *nwPathMonitorOther;
@property (retain) NSObject<OS_dispatch_queue> *nwPathMonitorQueue;

+ (id)entryEventBackwardDefinitions;
+ (id)defaults;
+ (id)entryEventNoneDefinitions;
+ (id)entryEventPointDefinitions;
+ (id)entryEventIntervalDefinitions;
+ (id)accountingGroupDefinitions;
+ (id)entryEventForwardDefinitions;
+ (void)load;
+ (id)entryEventForwardDefinitionNetworkIsExpensive;
+ (id)entryEventPointDefinitionUnattributedWake;
+ (id)entryEventPointDefinitionWake;
+ (id)railDefinitions;

- (id)NWPathMonitorWithInterface:(int)a0;
- (void)log;
- (void)handleNWPathUpdate:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)logEventBackwardCumulativeNetworkUsage;
- (void)initKernelEvent;
- (void)logEventPointWake;
- (void)initOperatorDependancies;

@end
