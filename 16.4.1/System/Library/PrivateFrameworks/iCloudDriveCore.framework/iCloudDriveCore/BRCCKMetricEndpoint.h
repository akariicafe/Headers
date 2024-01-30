@class BRCAccountSessionFPFS;

@interface BRCCKMetricEndpoint : BRCMetricEndpoint {
    BRCAccountSessionFPFS *_session;
}

- (void)submitEventMetric:(id)a0;
- (id)initWithSession:(id)a0;
- (void).cxx_destruct;

@end
