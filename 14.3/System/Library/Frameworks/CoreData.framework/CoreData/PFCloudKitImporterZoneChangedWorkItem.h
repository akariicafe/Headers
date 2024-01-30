@class NSArray, NSMutableDictionary;

@interface PFCloudKitImporterZoneChangedWorkItem : PFCloudKitImportRecordsWorkItem

@property (readonly, nonatomic) NSArray *changedRecordZoneIDs;
@property (readonly, nonatomic) NSMutableDictionary *fetchedZoneIDToChangeToken;
@property (readonly, nonatomic) NSMutableDictionary *fetchedZoneIDToMoreComing;

- (void)dealloc;
- (id)initWithChangedRecordZoneIDs:(id)a0 options:(id)a1 request:(id)a2;
- (id)description;
- (void)serverChangeTokenUpdated:(id)a0 forRecordZoneWithID:(id)a1;
- (void)fetchFinishedForZoneWithID:(id)a0 serverChangeToken:(id)a1 moreComing:(BOOL)a2 error:(id)a3;
- (BOOL)updateMetadataForAccumulatedChangesInContext:(id)a0 inStore:(id)a1 error:(id *)a2;
- (BOOL)commitMetadataChangesWithContext:(id)a0 forStore:(id)a1 error:(id *)a2;
- (void)executeImportOperationsAndAccumulateRecordsWithManagedObjectContext:(id)a0 completion:(id /* block */)a1;

@end
