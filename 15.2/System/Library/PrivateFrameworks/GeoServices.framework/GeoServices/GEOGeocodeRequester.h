@interface GEOGeocodeRequester : GEOServiceRequester

+ (id)sharedGeocodeRequester;

- (void)batchReverseGeocode:(id)a0 auditToken:(id)a1 success:(id /* block */)a2 networkActivity:(id /* block */)a3 error:(id /* block */)a4;
- (void)cancelBatchReverseGeocode:(id)a0;

@end
