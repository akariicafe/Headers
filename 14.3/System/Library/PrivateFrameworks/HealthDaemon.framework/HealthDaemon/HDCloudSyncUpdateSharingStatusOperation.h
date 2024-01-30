@interface HDCloudSyncUpdateSharingStatusOperation : HDCloudSyncOperation

+ (BOOL)shouldLogAtOperationStart;

- (void)main;
- (void)finishOperationWithParticipantSharingStatus:(long long)a0;

@end
