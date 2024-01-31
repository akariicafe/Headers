@class NSArray, NSString, CKSyncEngineBatch;

@interface CKSyncEngineRecordZoneChangeBatch : NSObject <CKPropertiesDescription>

@property (retain, nonatomic) CKSyncEngineBatch *deprecatedBatch;
@property (readonly, copy) NSArray *recordsToSave;
@property (readonly, copy) NSArray *recordIDsToDelete;
@property BOOL atomicByZone;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)CKDescribePropertiesUsing:(id)a0;
- (id)init;
- (id)redactedDescription;
- (void).cxx_destruct;
- (id)initWithPendingChanges:(id)a0 recordProvider:(id /* block */)a1;
- (id)initWithRecordsToSave:(id)a0 recordIDsToDelete:(id)a1 atomicByZone:(BOOL)a2;
- (id)initWith__pendingChanges:(id)a0 recordProvider:(id /* block */)a1;

@end
