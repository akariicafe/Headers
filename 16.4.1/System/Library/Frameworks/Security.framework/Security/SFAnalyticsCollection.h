@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue, SFAnalyticsCollectionAction;

@interface SFAnalyticsCollection : NSObject

@property (retain) NSMutableDictionary *matchingRules;
@property (copy) id /* block */ tearDownMetricsHook;
@property (retain) id<SFAnalyticsCollectionAction> actions;
@property (retain) NSObject<OS_dispatch_queue> *queue;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)loadCollection:(id)a0;
- (id)initWithActionInterface:(id)a0;
- (unsigned int)match:(id)a0 eventClass:(long long)a1 attributes:(id)a2 bucket:(unsigned int)a3 logger:(id)a4;
- (void)onQueue_stopMetricCollection;
- (id)parseCollection:(id)a0 logger:(id)a1;
- (void)setupMetricsHook:(id)a0;
- (void)stopMetricCollection;
- (void)storeCollection:(id)a0 logger:(id)a1;

@end
