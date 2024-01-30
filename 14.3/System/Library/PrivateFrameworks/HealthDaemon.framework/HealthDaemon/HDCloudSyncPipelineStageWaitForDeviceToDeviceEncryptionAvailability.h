@interface HDCloudSyncPipelineStageWaitForDeviceToDeviceEncryptionAvailability : HDCloudSyncPipelineStage

- (void)main;
- (BOOL)finishWithSuccess:(BOOL)a0 error:(id)a1;
- (void)_cloudKitIdentityUpdated:(id)a0;
- (void)_checkForDevicetoDeviceEncryptionAvailability;

@end
