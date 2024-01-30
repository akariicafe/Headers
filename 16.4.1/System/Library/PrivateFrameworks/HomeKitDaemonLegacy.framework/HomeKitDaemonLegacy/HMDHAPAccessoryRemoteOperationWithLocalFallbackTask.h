@class HMDDevice;
@protocol HMDHAPAccessoryTask;

@interface HMDHAPAccessoryRemoteOperationWithLocalFallbackTask : HMDHAPAccessoryTask

@property (readonly) HMDDevice *remoteTaskDelegateDevice;
@property (retain) id<HMDHAPAccessoryTask> remoteTask;
@property (retain) id<HMDHAPAccessoryTask> localTask;
@property (retain) id<HMDHAPAccessoryTask> fallbackLocalTask;

- (void)execute;
- (id /* block */)completion;
- (void).cxx_destruct;
- (id)_makeLocalTaskWithRequests:(id)a0 completion:(id /* block */)a1;
- (id)_makeRemoteTaskWithRequests:(id)a0 delegateDevice:(id)a1 completion:(id /* block */)a2;
- (id /* block */)_remoteTaskCompletionHandler;
- (BOOL)_shouldFallbackLocallyWithError:(id)a0 accessory:(id)a1;
- (void)_startScanningForSuspendedAccessoriesWithRequests:(id)a0;
- (id)initWithContext:(id)a0 requests:(id)a1 delegateDevice:(id)a2 completion:(id /* block */)a3;

@end
