@class NSObject;
@protocol OS_dispatch_source;

@interface HDCloudSyncPipelineStageWaitForDeviceToDeviceEncryptionAvailability : HDCloudSyncPipelineStage {
    NSObject<OS_dispatch_source> *_expirationTimer;
    double _expirationInterval;
}

- (void)main;
- (BOOL)finishWithSuccess:(BOOL)a0 error:(id)a1;
- (id)initWithConfiguration:(id)a0;
- (void).cxx_destruct;
- (void)unitTest_setExpirationInterval:(double)a0;
- (void)_cloudKitIdentityUpdated:(id)a0;

@end
