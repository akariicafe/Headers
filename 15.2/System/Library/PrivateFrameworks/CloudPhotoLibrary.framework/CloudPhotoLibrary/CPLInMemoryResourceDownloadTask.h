@class CPLPlaceholderRecord, NSObject, CPLResource;
@protocol OS_dispatch_queue, CPLEngineTransportTask;

@interface CPLInMemoryResourceDownloadTask : CPLResourceTransferTask {
    NSObject<OS_dispatch_queue> *_queue;
    id<CPLEngineTransportTask> _transportTask;
}

@property (readonly, copy, nonatomic) id /* block */ launchHandler;
@property (readonly, copy, nonatomic) id /* block */ completionHandler;
@property (readonly, nonatomic) CPLResource *cloudResource;
@property (readonly, nonatomic) CPLPlaceholderRecord *cloudRecord;

+ (id)failedTaskForResource:(id)a0 error:(id)a1 completionHandler:(id /* block */)a2;

- (void)cancelTask;
- (void).cxx_destruct;
- (void)finishWithData:(id)a0 error:(id)a1;
- (void)associateCloudResource:(id)a0 ofRecord:(id)a1;
- (void)launch;
- (void)launchTransportTask:(id)a0;
- (id)initWithResource:(id)a0 taskIdentifier:(id)a1 launchHandler:(id /* block */)a2 completionHandler:(id /* block */)a3;

@end
