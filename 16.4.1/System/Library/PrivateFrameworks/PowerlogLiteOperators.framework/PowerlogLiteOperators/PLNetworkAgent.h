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

+ (id)entryEventForwardDefinitions;
+ (id)railDefinitions;
+ (id)accountingGroupDefinitions;
+ (id)entryEventBackwardDefinitions;
+ (id)entryEventPointDefinitionUnattributedWake;
+ (id)entryEventPointDefinitions;
+ (id)entryEventPointDefinitionWake;
+ (id)defaults;
+ (void)load;
+ (id)entryEventNoneDefinitions;
+ (id)entryEventIntervalDefinitions;
+ (id)entryEventForwardDefinitionNetworkIsExpensive;

- (void)initOperatorDependancies;
- (void)log;
- (void)logEventBackwardCumulativeNetworkUsage;
- (void)handleNWPathUpdate:(id)a0;
- (id)NWPathMonitorWithInterface:(int)a0;
- (id)init;
- (void)initKernelEvent;
- (void)logEventPointWake;
- (void).cxx_destruct;

@end
