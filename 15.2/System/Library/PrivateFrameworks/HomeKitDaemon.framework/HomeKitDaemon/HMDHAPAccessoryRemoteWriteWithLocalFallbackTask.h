@interface HMDHAPAccessoryRemoteWriteWithLocalFallbackTask : HMDHAPAccessoryRemoteOperationWithLocalFallbackTask

- (id)_makeRemoteTaskWithRequests:(id)a0 completion:(id /* block */)a1;
- (id)_makeLocalTaskWithRequests:(id)a0 completion:(id /* block */)a1;

@end
