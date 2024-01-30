@class PLAgent, PLTimer;

@interface PLIOReportAgentIOReportStats : PLIOReportStats

@property (retain) PLAgent *agent;
@property unsigned long long sampleAPAwakeTime;
@property (retain) PLTimer *halfHourTimer;

+ (id)entryEventBackwardDefinitions;
+ (id)entryEventBackwardDefinitionSoCStatsPMGRCountersID;
+ (id)maskedNameForChannelID:(unsigned long long)a0;
+ (BOOL)shouldLogSoCStatsPMGRCountersID;
+ (int)idNumberFromIDDiff:(unsigned long long)a0;
+ (id)entryEventBackwardDefinitionSoCStatsPMGRCountersDebug;
+ (id)columnNameForChannelID:(unsigned long long)a0;

- (id)initWithAgent:(id)a0;
- (void)initTaskOperatorDependancies;
- (id)init;
- (void)logEventBackwardSoCStatsPMGRCounters;
- (void).cxx_destruct;

@end
