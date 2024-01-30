@interface PLAssetsdResourceAvailabilityClient : PLAssetsdBaseClient

- (id)sendMakeResourceAvailableRequest:(id)a0 reply:(id /* block */)a1;
- (id)sendVideoRequest:(id)a0 reply:(id /* block */)a1;
- (void)setSharedMemoryForCacheMetricsCollector:(id)a0;
- (id)sendResourceRepairRequest:(id)a0 errorCodes:(id)a1 reply:(id /* block */)a2;

@end
