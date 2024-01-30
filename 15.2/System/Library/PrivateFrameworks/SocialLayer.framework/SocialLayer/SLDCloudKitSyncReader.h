@interface SLDCloudKitSyncReader : SLDCloudKitSyncBase {
    BOOL _garbageCollectScheduled;
    id /* block */ _changeCallback;
    BOOL _changeCallbackScheduled;
}

+ (id)sharedInstance;

- (void)syncEngine:(id)a0 failedToSaveRecordZone:(id)a1 error:(id)a2;
- (void)syncEngine:(id)a0 didFetchRecord:(id)a1;
- (void)garbageCollect;
- (BOOL)syncEngine:(id)a0 shouldFetchChangesForZoneID:(id)a1;
- (id)syncEngine:(id)a0 recordToSaveForRecordID:(id)a1;
- (void).cxx_destruct;
- (void)syncEngine:(id)a0 failedToDeleteRecordWithID:(id)a1 error:(id)a2;
- (void)syncEngine:(id)a0 failedToSaveRecord:(id)a1 error:(id)a2;
- (void)syncEngine:(id)a0 didSaveRecord:(id)a1;
- (void)syncEngine:(id)a0 failedToFetchChangesForRecordZoneID:(id)a1 error:(id)a2;
- (void)syncEngine:(id)a0 recordWithIDWasDeleted:(id)a1 recordType:(id)a2;
- (void)reset;
- (id)apps;
- (void)syncEngine:(id)a0 didDeleteRecordWithID:(id)a1;
- (void)syncEngine:(id)a0 didSaveRecordZone:(id)a1;
- (void)setChangeCallback:(id /* block */)a0;
- (void)initializeState;
- (void)accountStatusChanged;
- (void)updateServerAppsIfNecessary;
- (id)_syncDirectory;
- (BOOL)_validateRecordIDString:(id)a0;
- (void)invalidateAppsInternal;
- (void)garbageCollectNow;
- (void)deleteFromDevice:(id)a0 fileName:(id)a1 overrideRetained:(BOOL)a2;
- (id)_syncDirectoryForWriter:(id)a0;
- (void)notifyChangeCallback;
- (id)recordForDevice:(id)a0 fileName:(id)a1;
- (id)_fetchAttributionInternal:(id)a0;
- (void)addApplicationIdentifierInternal:(id)a0;
- (id)getHighlightsInternalForApplicationIdentifier:(id)a0;
- (void)invalidateApps;
- (void)addApplicationIdentifier:(id)a0;
- (id)getHighlightsForApplicationIdentifier:(id)a0;
- (id)getSyncableHighlightsForApplicationIdentifier:(id)a0;
- (id)fetchAttribution:(id)a0;

@end
