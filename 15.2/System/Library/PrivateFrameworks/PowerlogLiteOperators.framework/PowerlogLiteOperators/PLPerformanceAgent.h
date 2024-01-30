@class PLNSNotificationOperatorComposition, PLEntryNotificationOperatorComposition;

@interface PLPerformanceAgent : PLAgent

@property (retain) PLEntryNotificationOperatorComposition *batteryLevelChanged;
@property (retain) PLNSNotificationOperatorComposition *dailyTaskNotification;
@property int randomSample;
@property int sampleCounter;

+ (id)entryEventPointDefinitions;
+ (id)entryEventIntervalDefinitions;
+ (id)entryEventIntervalDefinitionExperiment;
+ (id)entryEventPointDefinitionJetsamPriority;
+ (id)entryEventPointDefinitionAPFSFragmentation;
+ (id)entryEventPointDefinitionDiskFragmentation;
+ (id)entryEventPointDefinitionDiskUsage;
+ (id)entryEventPointDefinitionSystemMemory;
+ (void)load;
+ (id)entryEventPointDefinitionRollout;
+ (BOOL)shouldCreateJetsamPriorityTable;

- (void)logEventIntervalExperiment;
- (void)logEventPointJetsamPrority;
- (void)logEventPointRollout;
- (void)logEventPointDiskFragmentation;
- (id)descriptionForMemoryPressure:(int)a0;
- (void)log;
- (void)logEventPointDiskUsage;
- (void).cxx_destruct;
- (id)init;
- (void)logEventPointSystemMemory;
- (void)logEventPointAPFSFragmentation;
- (void)logEventPointAPFSFragmentationWithContainer:(const char *)a0;
- (int)countMachPort:(int)a0;
- (int)countFD:(int)a0;
- (void)initOperatorDependancies;
- (void)logSystemMemoryToCA:(id)a0;

@end
