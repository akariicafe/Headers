@class NSString, BRGlobalProgressProxy, NSOperationQueue, NSMutableArray, BRUploadAllFilesForLogOutOperation;

@interface BRDownloadAndUploadAllFilesForLogOutOperation : BROperation <NSProgressReporting> {
    NSMutableArray *_fileCoordinators;
    NSOperationQueue *_internalQueue;
    BRUploadAllFilesForLogOutOperation *_uploadOp;
}

@property (retain) BRGlobalProgressProxy *progress;
@property (copy) id /* block */ downloadAllFilesCompletionBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)cancel;
- (id)init;
- (void).cxx_destruct;
- (void)finishWithResult:(id)a0 error:(id)a1;
- (void)main;

@end
