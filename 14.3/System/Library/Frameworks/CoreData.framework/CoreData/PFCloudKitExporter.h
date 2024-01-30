@class NSMutableDictionary, NSCloudKitMirroringRequest, PFCloudKitExporterOptions, PFCloudKitExportContext, NSObject, PFCloudKitStoreMonitor;
@protocol OS_dispatch_queue, PFCloudKitExporterDelegate;

@interface PFCloudKitExporter : NSObject {
    id /* block */ _exportCompletionBlock;
}

@property (readonly, copy, nonatomic) PFCloudKitExporterOptions *options;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly, nonatomic) NSCloudKitMirroringRequest *request;
@property (weak, nonatomic) NSObject<PFCloudKitExporterDelegate> *delegate;
@property (readonly, nonatomic) PFCloudKitExportContext *exportContext;
@property (readonly, nonatomic) PFCloudKitStoreMonitor *monitor;
@property (readonly, nonatomic) NSMutableDictionary *operationIDToResult;

- (void).cxx_destruct;
- (void)dealloc;
- (void)exportIfNecessary;
- (BOOL)analyzeHistoryInStore:(id)a0 withManagedObjectContext:(id)a1 error:(id *)a2;
- (void)finishExportWithResult:(id)a0;
- (void)executeOperation:(id)a0;
- (void)exportOperationFinished:(id)a0 withSavedRecords:(id)a1 deletedRecordIDs:(id)a2 operationError:(id)a3;
- (void)updateMetadataForSavedRecords:(id)a0 deletedRecordIDs:(id)a1 inStore:(id)a2 withManagedObjectContext:(id)a3;
- (void)exportIfNecessaryWithCompletion:(id /* block */)a0;
- (id)initWithOptions:(id)a0 request:(id)a1 monitor:(id)a2 workQueue:(id)a3;

@end
