@class IISMetricStore;

@interface IIMetricsDispatcher : NSObject {
    IISMetricStore *_store;
}

+ (id)sharedInstance;
+ (void)registerXPCActivity;

- (void).cxx_destruct;
- (id)init;
- (void)logMessage:(id)a0 messageName:(id)a1;
- (void)registerEnrichmentProvider:(id)a0;
- (void)registerMessagesListener:(id /* block */)a0;

@end
