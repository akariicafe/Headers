@class CKDatabase, NSArray, NSString, HDSynchronousTaskGroup, CKContainer;

@interface HDCloudSyncModifyRecordZonesOperation : HDCloudSyncOperation <HDSynchronousTaskGroupDelegate> {
    CKContainer *_container;
    CKDatabase *_database;
    HDSynchronousTaskGroup *_taskGroup;
}

@property (copy, nonatomic) NSArray *recordZonesToSave;
@property (copy, nonatomic) NSArray *recordZoneIDsToDelete;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)shouldLogAtOperationStart;

- (id)initWithConfiguration:(id)a0 container:(id)a1 scope:(long long)a2 recordZonesToSave:(id)a3 recordZoneIDsToDelete:(id)a4;
- (id)initWithConfiguration:(id)a0 container:(id)a1 recordZonesToSave:(id)a2 recordZoneIDsToDelete:(id)a3;
- (void)main;
- (void).cxx_destruct;
- (void)_saveRecordZones:(id)a0 deleteRecordZoneIDs:(id)a1;
- (void)synchronousTaskGroup:(id)a0 didFinishWithSuccess:(BOOL)a1 errors:(id)a2;
- (void)_limitExceededForSavingRecordZones:(id)a0 deletingRecordZoneIDs:(id)a1 error:(id)a2;

@end
