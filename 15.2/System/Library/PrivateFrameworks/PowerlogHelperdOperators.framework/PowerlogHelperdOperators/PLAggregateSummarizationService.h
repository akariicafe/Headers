@class PLXPCResponderOperatorComposition, NSArray, NSMutableDictionary, NSMutableArray;

@interface PLAggregateSummarizationService : PLService

@property (retain) NSMutableDictionary *summarizedData;
@property (retain) NSMutableArray *metrics;
@property (retain) NSArray *appList;
@property double maxTimestamp;
@property (retain) PLXPCResponderOperatorComposition *aggregationResponder;

+ (id)entryEventPointDefinitions;
+ (id)entryAggregateDefinitions;
+ (id)modelIdentifier;
+ (id)osVersion;
+ (short)buildType;
+ (void)load;

- (void).cxx_destruct;
- (id)init;
- (void)initOperatorDependancies;
- (void)aggregateMetrics;
- (id)handleAggregationQueryWithPayload:(id)a0;
- (void)getAppList:(id)a0;
- (void)getAppMetadata;
- (id)preformatMetricsForFormatter:(id)a0;
- (void)setupMetrics;
- (id)getDeviceMetadataInRange:(struct _PLTimeIntervalRange { double x0; double x1; })a0 withSignpostData:(id)a1;
- (id /* block */)getQueryForNetworkIOData;
- (id /* block */)getGenericSummarizer;
- (id /* block */)getQueryForCoalitionPowerData;
- (id /* block */)getQueryForAverageMemory;
- (id /* block */)getQueryForPeakMemory;
- (id /* block */)getQueryForDiskIO;
- (id /* block */)getQueryForLocationActivity;
- (id /* block */)getLocationActivitySummarizer;
- (id /* block */)getQueryForDisplayAPL;
- (id /* block */)getQueryForCellularCondition;
- (id /* block */)getCellularConditionSummarizer;
- (void)addMetrics:(id)a0 withType:(short)a1;
- (id)getPluggedInDurationInRange:(struct _PLTimeIntervalRange { double x0; double x1; })a0;
- (id)getDrainInfoInRange:(struct _PLTimeIntervalRange { double x0; double x1; })a0;
- (id)getInitCountInRange:(struct _PLTimeIntervalRange { double x0; double x1; })a0;
- (id)getAppMultipleVersionsData;
- (id /* block */)getQueryForAppMultipleVersions;

@end
