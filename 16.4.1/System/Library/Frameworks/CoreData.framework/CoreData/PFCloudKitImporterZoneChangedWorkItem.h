@class NSArray, NSMutableDictionary;

@interface PFCloudKitImporterZoneChangedWorkItem : PFCloudKitImportRecordsWorkItem {
    NSArray *_changedRecordZoneIDs;
    NSMutableDictionary *_fetchedZoneIDToChangeToken;
    NSMutableDictionary *_fetchedZoneIDToMoreComing;
}

- (void)executeImportOperationsAndAccumulateRecordsWithManagedObjectContext:(id)a0 completion:(id /* block */)a1;
- (BOOL)commitMetadataChangesWithContext:(id)a0 forStore:(id)a1 error:(id *)a2;
- (void)dealloc;
- (id)initWithChangedRecordZoneIDs:(id)a0 options:(id)a1 request:(id)a2;
- (BOOL)updateMetadataForAccumulatedChangesInContext:(id)a0 inStore:(id)a1 error:(id *)a2;
- (id)description;

@end
