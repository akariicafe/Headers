@class NSString, NSProgress, PXExpectation, PXFlexMusicAsset, NSObject;
@protocol OS_dispatch_queue;

@interface PXFlexMusicDownloader : NSObject <PXChangeObserver, NSProgressReporting> {
    id /* block */ _queue_completionHandler;
    BOOL _queue_isFinished;
    NSObject<OS_dispatch_queue> *_queue;
    PXExpectation *_queue_downloadExpectation;
    long long _downloadSignpostID;
}

@property (nonatomic) double downloadFractionCompleted;
@property (readonly, nonatomic) PXFlexMusicAsset *asset;
@property (readonly, nonatomic) long long resource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) NSProgress *progress;

- (void).cxx_destruct;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (id)init;
- (void)startWithCompletion:(id /* block */)a0;
- (void)_handleCancellation;
- (id)initWithAsset:(id)a0 resource:(long long)a1;
- (void)_queue_startWithCompletion:(id /* block */)a0;
- (void)_queue_handleDownloadProgressChanged;
- (void)_queue_finishIfPossible;
- (void)_queue_handleDownloadFinished:(BOOL)a0 error:(id)a1;

@end
