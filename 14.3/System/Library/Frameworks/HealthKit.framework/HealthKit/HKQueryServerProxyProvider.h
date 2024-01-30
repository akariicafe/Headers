@interface HKQueryServerProxyProvider : HKTaskServerProxyProvider

- (id)initWithHealthStore:(id)a0 query:(id)a1 configuration:(id)a2 queryUUID:(id)a3;
- (void)fetchProxyServiceEndpointForIdentifier:(id)a0 healthStore:(id)a1 endpointHandler:(id /* block */)a2 errorHandler:(id /* block */)a3;

@end
