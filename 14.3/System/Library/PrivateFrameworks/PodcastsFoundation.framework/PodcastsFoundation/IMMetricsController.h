@class NSString, AMSMetrics, NSObject;
@protocol OS_dispatch_queue;

@interface IMMetricsController : NSObject <IMMetricsControllerProtocol>

@property (retain, nonatomic) AMSMetrics *metricsController;
@property (retain, nonatomic) NSString *topic;
@property (nonatomic) BOOL isLoading;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) BOOL shouldSuppressUserInfo;
@property (nonatomic) BOOL shouldIgnoreDNU;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)recordEvent:(id)a0;
- (id)initWithTopic:(id)a0;
- (void)flushImmediately;
- (void)addAdditionalFieldsToEvent:(id)a0 completion:(id /* block */)a1;
- (void)getMetricsController:(id /* block */)a0;

@end
