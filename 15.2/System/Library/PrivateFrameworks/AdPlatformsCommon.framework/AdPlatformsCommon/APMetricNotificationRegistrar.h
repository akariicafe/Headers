@class NSLock, NSMutableDictionary, NSString;

@interface APMetricNotificationRegistrar : NSObject <APMetricNotificationRegister, APMetricReceiving>

@property (readonly, nonatomic) NSMutableDictionary *registryByRoute;
@property (readonly, nonatomic) NSMutableDictionary *registryByClosure;
@property (readonly, nonatomic) NSLock *registryLock;
@property (readonly, nonatomic) long long registrationCounter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_closuresForRoute:(long long)a0 andMetric:(long long)a1;
- (long long)registerHandlerForRoute:(long long)a0 andMetric:(long long)a1 closure:(id /* block */)a2;
- (id)_metricRegistryForRoute:(long long)a0 andMetric:(long long)a1;
- (void).cxx_destruct;
- (id)init;
- (void)receivedMetric:(id)a0;
- (void)removeHandlerWithIdentifier:(long long)a0;
- (long long)registerHandlerForRoute:(long long)a0 closure:(id /* block */)a1;

@end
