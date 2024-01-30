@class NSString, NSNumber;

@interface GEOAnalyticsPipelineDailyUsageCountsOperation : GEOAnalyticsPipelineReportOperation {
    int _countType;
    NSString *_usageString;
    NSNumber *_usageBool;
    NSString *_appId;
}

- (void)main;
- (void).cxx_destruct;

@end
