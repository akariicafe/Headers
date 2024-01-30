@class NSString, CKQueryCursor, NSDate;

@interface PFCloudKitCKQueryBackedImportWorkItem : PFCloudKitImportRecordsWorkItem

@property (readonly, nonatomic) NSString *recordType;
@property (retain, nonatomic) NSDate *maxModificationDate;
@property (retain, nonatomic) CKQueryCursor *queryCursor;

- (void)dealloc;
- (id)description;
- (void)addUpdatedRecord:(id)a0;
- (id)newCKQueryOperationFromMetadataInManagedObjectContext:(id)a0 error:(id *)a1;
- (void)queryOperationFinishedWithCursor:(id)a0 error:(id)a1 completion:(id /* block */)a2;
- (BOOL)applyAccumulatedChangesToStore:(id)a0 inManagedObjectContext:(id)a1 withStoreMonitor:(id)a2 madeChanges:(BOOL *)a3 error:(id *)a4;
- (BOOL)updateMetadataForAccumulatedChangesInContext:(id)a0 inStore:(id)a1 error:(id *)a2;
- (BOOL)commitMetadataChangesWithContext:(id)a0 forStore:(id)a1 error:(id *)a2;
- (id)initForRecordType:(id)a0 withOptions:(id)a1 request:(id)a2;
- (void)executeImportOperationsAndAccumulateRecordsWithManagedObjectContext:(id)a0 completion:(id /* block */)a1;

@end
