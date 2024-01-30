@interface PLAssetsdResourceAvailabilityClient : PLAssetsdBaseClient

- (id)sendVideoRequest:(id)a0 reply:(id /* block */)a1;
- (void)sendMakeResourceUnavailableRequest:(id)a0;
- (id)sendResourceRepairRequestForAsset:(id)a0 errorCodes:(id)a1 reply:(id /* block */)a2;
- (id)sendResourceRepairRequest:(id)a0 errorCodes:(id)a1 reply:(id /* block */)a2;
- (void)setSharedMemoryForCacheMetricsCollector:(id)a0;
- (id)sendMakeResourceAvailableRequest:(id)a0 reply:(id /* block */)a1;

@end
