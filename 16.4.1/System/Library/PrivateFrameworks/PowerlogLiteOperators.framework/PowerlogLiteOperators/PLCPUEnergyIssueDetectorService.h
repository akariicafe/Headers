@class PLXPCListenerOperatorComposition, NSString, NSMutableDictionary, PLEntryNotificationOperatorComposition, NSArray, NSDictionary, NSDate;

@interface PLCPUEnergyIssueDetectorService : PLService

@property (retain) PLEntryNotificationOperatorComposition *coalitionCallback;
@property (retain) PLEntryNotificationOperatorComposition *batteryCallback;
@property (readonly) NSString *entryKeyPLCoalitionAgentEventIntervalCoalition;
@property BOOL deviceIsPluggedIn;
@property BOOL pluggedInBetweenCoalitionSBC;
@property (retain) NSMutableDictionary *cpuUsage;
@property (retain) NSArray *cpuAllowList;
@property (retain) NSDictionary *cpuThresholds;
@property (retain) NSDate *detectionStartTime;
@property (retain) PLXPCListenerOperatorComposition *detectorListener;

+ (id)defaults;
+ (void)load;
+ (id)entryAggregateDefinitions;
+ (id)entryAggregateDefinitionAppRunTime;

- (void)initOperatorDependancies;
- (void)handleBatteryCallback:(id)a0;
- (double)getCPUTime:(id)a0;
- (void)listAllRunningPidsWithBuffer:(int *)a0 withSizeOfBuffer:(int)a1;
- (void)handleCoalitionCallback:(id)a0;
- (id)buildCallBack:(id)a0 withGroup:(BOOL)a1 withHandler:(id /* block */)a2;
- (void)testService;
- (id)loadCpuThresholds;
- (int)customLongTermCPUThreshold;
- (int)matchingPidWithProcessName:(id)a0 withBundleID:(id)a1;
- (void)checkCpuUsage:(id)a0 withNewCoaltionArray:(id)a1;
- (id)init;
- (id)loadCPUAllowlist;
- (void).cxx_destruct;
- (void)sendEnergyIssueSignatureNotification:(id)a0 withThreshold:(double)a1;

@end
