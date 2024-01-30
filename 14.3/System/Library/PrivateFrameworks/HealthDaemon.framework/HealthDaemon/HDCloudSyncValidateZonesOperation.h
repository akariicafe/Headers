@interface HDCloudSyncValidateZonesOperation : HDCloudSyncOperation

+ (BOOL)shouldLogAtOperationStart;

- (void)main;
- (void)_discardInvalidSharedZones;
- (void)_checkForOrphanedSequenceRecords;

@end
