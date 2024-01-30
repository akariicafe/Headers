@class BRCAccountSession;

@interface BRCCKMetricEndpoint : BRCMetricEndpoint {
    BRCAccountSession *_session;
}

- (id)initWithSession:(id)a0;
- (void).cxx_destruct;
- (void)submitEventMetric:(id)a0;

@end
