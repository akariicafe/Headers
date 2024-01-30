@class NSSet, NSString, NSURL, NSOperationQueue, FPItem, NSProgress;

@interface FPFetchPublishingURLOperation : FPActionOperation <NSFilePresenter> {
    FPItem *_item;
    BOOL _isFilePresenter;
    NSOperationQueue *_operationQueue;
    NSURL *_itemURL;
    NSProgress *_remoteCancellableProgress;
    NSProgress *_itemUploadProgress;
}

@property (copy, nonatomic) id /* block */ _t_filePresenterStarted;
@property (copy, nonatomic) id /* block */ fetchCompletionBlock;
@property (readonly, copy) NSURL *presentedItemURL;
@property (readonly, retain) NSOperationQueue *presentedItemOperationQueue;
@property (readonly, copy) NSURL *primaryPresentedItemURL;
@property (readonly) NSSet *observedPresentedItemUbiquityAttributes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)accommodatePresentedItemDeletionWithCompletionHandler:(id /* block */)a0;
- (void)finishWithResult:(id)a0 error:(id)a1;
- (void)presentedItemDidMoveToURL:(id)a0;
- (void)cancel;
- (void).cxx_destruct;
- (void)presentedItemDidChangeUbiquityAttributes:(id)a0;
- (id)initWithItem:(id)a0;
- (void)_setupFilePresenterAndWaitForUpload;
- (void)_tryFetchingSharingURL;
- (void)actionMain;

@end
