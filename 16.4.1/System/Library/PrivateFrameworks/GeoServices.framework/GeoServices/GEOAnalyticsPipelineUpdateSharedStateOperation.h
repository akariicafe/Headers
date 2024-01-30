@class GEOLogMsgState;

@interface GEOAnalyticsPipelineUpdateSharedStateOperation : GEOAnalyticsPipelineReportOperation {
    int _stateType;
    GEOLogMsgState *_state;
}

- (void)main;
- (void).cxx_destruct;

@end
