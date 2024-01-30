@class NSString, NSNumber;

@interface GEOAnalyticsPipelineDailyUsageCountsOperation : GEOAnalyticsPipelineReportOperation {
    int _countType;
    NSString *_usageString;
    NSNumber *_usageBool;
    NSString *_appId;
}

- (void)main;
- (void).cxx_destruct;
- (id)initWithDailyUsageCountType:(int)a0 usageString:(id)a1 usageBool:(id)a2 appId:(id)a3 remoteProxy:(id)a4 runQueue:(id)a5 completionQueue:(id)a6 completionBlock:(id /* block */)a7;

@end
