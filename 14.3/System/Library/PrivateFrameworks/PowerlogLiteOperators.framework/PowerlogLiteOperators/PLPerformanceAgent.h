@class PLNSNotificationOperatorComposition, PLEntryNotificationOperatorComposition;

@interface PLPerformanceAgent : PLAgent

@property (retain) PLEntryNotificationOperatorComposition *batteryLevelChanged;
@property (retain) PLNSNotificationOperatorComposition *dailyTaskNotification;

+ (id)entryEventPointDefinitionSystemMemory;
+ (void)load;
+ (id)entryEventPointDefinitionDiskUsage;
+ (id)entryEventPointDefinitionJetsamPriority;
+ (BOOL)shouldCreateJetsamPriorityTable;
+ (id)entryEventPointDefinitionAPFSFragmentation;
+ (id)entryEventPointDefinitions;
+ (id)entryEventPointDefinitionDiskFragmentation;

- (id)descriptionForMemoryPressure:(int)a0;
- (id)init;
- (void).cxx_destruct;
- (int)countFD:(int)a0;
- (void)log;
- (void)logEventPointDiskUsage;
- (void)logEventPointJetsamPrority;
- (int)countMachPort:(int)a0;
- (void)logEventPointAPFSFragmentationWithContainer:(const char *)a0;
- (void)logEventPointDiskFragmentation;
- (void)initOperatorDependancies;
- (void)logEventPointAPFSFragmentation;
- (void)logEventPointSystemMemory;

@end
