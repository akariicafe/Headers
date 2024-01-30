@class NSSet, NSString, NSURL, NSOperationQueue, BRObservableFile;

@interface _BRObservableFilePresenter : NSObject <NSFilePresenter>

@property (copy) NSURL *presentedItemURL;
@property (retain) NSOperationQueue *presentedItemOperationQueue;
@property (weak, nonatomic) BRObservableFile *parent;
@property (readonly, copy) NSURL *primaryPresentedItemURL;
@property (readonly) NSSet *observedPresentedItemUbiquityAttributes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)accommodatePresentedItemDeletionWithCompletionHandler:(id /* block */)a0;
- (void)presentedItemUbiquityDidChange;
- (void)presentedItemDidChange;
- (void).cxx_destruct;
- (void)presentedItemDidMoveToURL:(id)a0;

@end
