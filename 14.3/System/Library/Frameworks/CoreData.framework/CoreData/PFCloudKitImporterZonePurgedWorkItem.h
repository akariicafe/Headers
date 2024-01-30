@class CKRecordZoneID;

@interface PFCloudKitImporterZonePurgedWorkItem : PFCloudKitImporterWorkItem

@property (readonly, nonatomic) CKRecordZoneID *purgedRecordZoneID;

- (void)doWorkForStore:(id)a0 inMonitor:(id)a1 completion:(id /* block */)a2;
- (void)dealloc;
- (id)initWithPurgedRecordZoneID:(id)a0 options:(id)a1 request:(id)a2;
- (BOOL)wipeAllCloudDataFromStore:(id)a0 andPurgeHistoryToken:(BOOL)a1 error:(id *)a2;
- (id)description;

@end
