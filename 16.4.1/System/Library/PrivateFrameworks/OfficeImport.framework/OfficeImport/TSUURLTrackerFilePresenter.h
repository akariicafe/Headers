@class NSError, NSSet, NSString, NSData, NSURL, NSOperationQueue, NSObject;
@protocol OS_dispatch_queue, TSUURLTrackerDelegate;

@interface TSUURLTrackerFilePresenter : NSObject <NSFilePresenter> {
    NSObject<OS_dispatch_queue> *_accessQueue;
    BOOL _hasStarted;
    NSURL *_URLIfAvailable;
    NSData *_bookmarkDataIfAvailable;
    NSError *_latestError;
    id<TSUURLTrackerDelegate> _delegate;
}

@property (readonly) NSData *bookmarkData;
@property (readonly, copy) NSURL *presentedItemURL;
@property (readonly, retain) NSOperationQueue *presentedItemOperationQueue;
@property (readonly, copy) NSURL *primaryPresentedItemURL;
@property (readonly) NSSet *observedPresentedItemUbiquityAttributes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)accommodatePresentedItemDeletionWithCompletionHandler:(id /* block */)a0;
- (void)pause;
- (void)presentedItemDidMoveToURL:(id)a0;
- (id)_description;
- (void)relinquishPresentedItemToWriter:(id /* block */)a0;
- (void)stop;
- (id)init;
- (void).cxx_destruct;
- (void)presentedItemDidChangeUbiquityAttributes:(id)a0;
- (id)_bookmarkData;
- (id)_URLAndReturnError:(id *)a0;
- (id)URLAndReturnError:(id *)a0;
- (id)_bookmarkDataAndReturnError:(id *)a0;
- (id)bookmarkDataAndReturnError:(id *)a0;
- (id)initWithURL:(id)a0 bookmarkData:(id)a1 delegate:(id)a2;
- (void)startOrResume;

@end
