@class PPConnectionsMetricsTracker;

@interface PPQuickTypeConnectionsServant : NSObject <PPQuickTypeServantProtocol> {
    PPConnectionsMetricsTracker *_metricsTracker;
}

- (id)init;
- (void).cxx_destruct;
- (id)_locationForQuery:(id)a0 limit:(unsigned long long)a1 consumer:(unsigned long long)a2 explanationSet:(id)a3;
- (id)quickTypeItemsWithQuery:(id)a0 limit:(unsigned long long)a1 explanationSet:(id)a2;
- (id)criteriaFromQuery:(id)a0;

@end
