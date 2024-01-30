@class NSData;

@interface GEOAnalyticsPipelineReportEventOperation : GEOAnalyticsPipelineReportOperation {
    int _logMsgType;
    int _handlingPolicyId;
    NSData *_logMsg;
}

- (void).cxx_destruct;
- (void)main;
- (id)initWithType:(int)a0 handlingPolicyId:(int)a1 logMsg:(id)a2 remoteProxy:(id)a3 runQueue:(id)a4 completionQueue:(id)a5 completionBlock:(id /* block */)a6;

@end
