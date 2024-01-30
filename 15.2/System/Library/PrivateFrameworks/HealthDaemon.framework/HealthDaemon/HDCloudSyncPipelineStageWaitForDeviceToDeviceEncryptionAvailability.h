@class NSObject;
@protocol OS_dispatch_source;

@interface HDCloudSyncPipelineStageWaitForDeviceToDeviceEncryptionAvailability : HDCloudSyncPipelineStage {
    NSObject<OS_dispatch_source> *_expirationTimer;
    double _expirationInterval;
}

- (id)initWithConfiguration:(id)a0;
- (void)main;
- (void).cxx_destruct;
- (void)_cloudKitIdentityUpdated:(id)a0;
- (BOOL)finishWithSuccess:(BOOL)a0 error:(id)a1;
- (void)unitTest_setExpirationInterval:(double)a0;

@end
