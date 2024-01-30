@class NSArray, CKServerChangeToken, NSCloudKitMirroringImportRequest, PFCloudKitImporterOptions, NSMutableArray;

@interface PFCloudKitImporter : NSObject

@property (readonly, copy, nonatomic) PFCloudKitImporterOptions *options;
@property (readonly, nonatomic) NSCloudKitMirroringImportRequest *request;
@property (readonly, nonatomic) NSArray *workItems;
@property (readonly, nonatomic) NSMutableArray *workItemResults;
@property (readonly, nonatomic) CKServerChangeToken *updatedDatabaseChangeToken;
@property (readonly, nonatomic) unsigned long long totalImportedBytes;

- (void)dealloc;
- (void)processWorkItemsWithCompletion:(id /* block */)a0;
- (id)dequeueWorkItem;
- (void)databaseFetchFinishWithContext:(id)a0 error:(id)a1 completion:(id /* block */)a2;
- (void)processDatabaseImportContext:(id)a0 completion:(id /* block */)a1;
- (void)workItemFinished:(id)a0 withResult:(id)a1 completion:(id /* block */)a2;
- (void)importIfNecessaryWithCompletion:(id /* block */)a0;
- (id)initWithOptions:(id)a0 request:(id)a1;

@end
