@class PLNSNotificationOperatorComposition, PLEntryNotificationOperatorComposition;

@interface PLPerformanceAgent : PLAgent

@property (retain) PLEntryNotificationOperatorComposition *batteryLevelChanged;
@property (retain) PLNSNotificationOperatorComposition *dailyTaskNotification;
@property int randomSample;
@property int sampleCounter;

+ (BOOL)shouldCreateJetsamPriorityTable;
+ (id)entryEventPointDefinitions;
+ (id)entryEventPointDefinitionDiskFragmentation;
+ (void)load;
+ (id)entryEventPointDefinitionSystemMemory;
+ (id)entryEventIntervalDefinitions;
+ (id)entryEventPointDefinitionDiskUsage;
+ (id)entryEventIntervalDefinitionExperiment;
+ (id)entryEventPointDefinitionJetsamPriority;
+ (id)entryEventPointDefinitionAPFSFragmentation;
+ (id)entryEventPointDefinitionRollout;

- (void)initOperatorDependancies;
- (void)logSystemMemoryToCA:(id)a0;
- (id)descriptionForMemoryPressure:(int)a0;
- (void)logEventPointAPFSFragmentation;
- (void)log;
- (void)logEventPointSystemMemory;
- (void)logEventPointDiskFragmentation;
- (void)logEventIntervalExperiment;
- (int)countMachPort:(int)a0;
- (void)logEventPointDiskUsage;
- (void)logEventPointAPFSFragmentationWithContainer:(const char *)a0;
- (id)init;
- (int)countFD:(int)a0;
- (void)logEventPointJetsamPrority;
- (void).cxx_destruct;
- (void)logEventPointRollout;

@end
