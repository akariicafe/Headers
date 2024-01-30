@class NSMutableDictionary, NSCloudKitMirroringRequest, PFCloudKitExporterOptions, PFCloudKitExportContext, NSObject, PFCloudKitStoreMonitor;
@protocol OS_dispatch_queue, PFCloudKitExporterDelegate;

@interface PFCloudKitExporter : NSObject {
    NSMutableDictionary *_operationIDToResult;
    id /* block */ _exportCompletionBlock;
    PFCloudKitExporterOptions *_options;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSCloudKitMirroringRequest *_request;
    NSObject<PFCloudKitExporterDelegate> *_delegate;
    PFCloudKitExportContext *_exportContext;
    PFCloudKitStoreMonitor *_monitor;
}

- (void)dealloc;
- (id)initWithOptions:(id)a0 request:(id)a1 monitor:(id)a2 workQueue:(id)a3;
- (void).cxx_destruct;

@end
