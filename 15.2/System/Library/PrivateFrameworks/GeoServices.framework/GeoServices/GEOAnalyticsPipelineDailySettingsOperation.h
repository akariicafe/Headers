@class GEOLogMsgEventPeriodicSettingsSummary;

@interface GEOAnalyticsPipelineDailySettingsOperation : GEOAnalyticsPipelineReportOperation {
    GEOLogMsgEventPeriodicSettingsSummary *_settings;
}

- (void)main;
- (id)initWithSettings:(id)a0 remoteProxy:(id)a1 runQueue:(id)a2 completionQueue:(id)a3 completionBlock:(id /* block */)a4;
- (void).cxx_destruct;

@end
