@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_source;

@interface SLDCloudKitSyncWriter : SLDCloudKitSyncBase {
    BOOL _freshHighlightsGenerated;
    BOOL _appChangesCheckScheduled;
    NSMutableDictionary *_recordsToUpload;
    NSObject<OS_dispatch_source> *_invalidateHighlightsCoalescingTimer;
}

+ (id)sharedInstance;

- (id)recordZoneID;
- (void)syncEngine:(id)a0 failedToSaveRecordZone:(id)a1 error:(id)a2;
- (void)syncEngine:(id)a0 didFetchRecord:(id)a1;
- (BOOL)syncEngine:(id)a0 shouldFetchChangesForZoneID:(id)a1;
- (id)syncEngine:(id)a0 recordToSaveForRecordID:(id)a1;
- (void).cxx_destruct;
- (void)syncEngine:(id)a0 failedToDeleteRecordWithID:(id)a1 error:(id)a2;
- (void)syncEngine:(id)a0 failedToSaveRecord:(id)a1 error:(id)a2;
- (void)syncEngine:(id)a0 didSaveRecord:(id)a1;
- (void)syncEngine:(id)a0 failedToFetchChangesForRecordZoneID:(id)a1 error:(id)a2;
- (void)syncEngine:(id)a0 recordWithIDWasDeleted:(id)a1 recordType:(id)a2;
- (void)dealloc;
- (void)reset;
- (void)syncEngine:(id)a0 didDeleteRecordWithID:(id)a1;
- (void)syncEngine:(id)a0 didSaveRecordZone:(id)a1;
- (void)initializeState;
- (void)accountStatusChanged;
- (void)handleMetadataSizeBecomingEligibleForSync;
- (void)checkForAppChangesNow;
- (void)nextTask;
- (id)recordIDStringOfSavedIDString:(id)a0;
- (unsigned long long)versionOfSavedIDString:(id)a0;
- (id)_idForRecordIDString:(id)a0;
- (id)_recordIDsFromStrings:(id)a0;
- (void)fetchAndProcessFreshHighlights;
- (void)invalidateHighlightsInternal;
- (BOOL)_didHandleSyncError:(id)a0 retryBlock:(id /* block */)a1;
- (unsigned long long)_batchNumberOfRecordIDString:(id)a0;
- (void)_savedRecord:(id)a0;
- (void)checkForAppChanges;
- (void)invalidateHighlights;

@end
