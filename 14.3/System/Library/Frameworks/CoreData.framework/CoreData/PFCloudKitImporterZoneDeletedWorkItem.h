@class CKRecordZoneID;

@interface PFCloudKitImporterZoneDeletedWorkItem : PFCloudKitImporterWorkItem

@property (readonly, nonatomic) CKRecordZoneID *deletedRecordZoneID;

- (void)doWorkForStore:(id)a0 inMonitor:(id)a1 completion:(id /* block */)a2;
- (void)dealloc;
- (id)initWithDeletedRecordZoneID:(id)a0 options:(id)a1 request:(id)a2;
- (id)description;

@end
