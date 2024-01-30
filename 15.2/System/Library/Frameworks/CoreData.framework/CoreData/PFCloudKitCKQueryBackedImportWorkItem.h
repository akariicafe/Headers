@class NSString, CKQueryCursor, NSDate, CKRecordZoneID;

@interface PFCloudKitCKQueryBackedImportWorkItem : PFCloudKitImportRecordsWorkItem {
    NSString *_recordType;
    NSDate *_maxModificationDate;
    CKQueryCursor *_queryCursor;
    CKRecordZoneID *_zoneIDToQuery;
}

- (id)initForRecordType:(id)a0 withOptions:(id)a1 request:(id)a2;
- (id)description;
- (BOOL)applyAccumulatedChangesToStore:(id)a0 inManagedObjectContext:(id)a1 withStoreMonitor:(id)a2 madeChanges:(BOOL *)a3 error:(id *)a4;
- (BOOL)commitMetadataChangesWithContext:(id)a0 forStore:(id)a1 error:(id *)a2;
- (void)addUpdatedRecord:(id)a0;
- (BOOL)updateMetadataForAccumulatedChangesInContext:(id)a0 inStore:(id)a1 error:(id *)a2;
- (void)dealloc;
- (void)executeImportOperationsAndAccumulateRecordsWithManagedObjectContext:(id)a0 completion:(id /* block */)a1;

@end
