@class BRCAccountSession;

@interface BRCCKMetricEndpoint : BRCMetricEndpoint {
    BRCAccountSession *_session;
}

- (void)submitEventMetric:(id)a0;
- (id)initWithSession:(id)a0;
- (void).cxx_destruct;

@end
