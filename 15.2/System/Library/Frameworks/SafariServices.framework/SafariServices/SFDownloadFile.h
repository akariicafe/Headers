@class NSSet, NSString, NSURL, NSData, NSOperationQueue;
@protocol SFDownloadFileDelegate;

@interface SFDownloadFile : NSObject <NSFilePresenter> {
    BOOL _invalidated;
    BOOL _usingSecurityScopedURL;
    BOOL _suspended;
}

@property (weak, nonatomic) id<SFDownloadFileDelegate> delegate;
@property (readonly, nonatomic) NSURL *URL;
@property (readonly, nonatomic) NSData *bookmarkData;
@property (readonly, copy) NSURL *presentedItemURL;
@property (readonly, retain) NSOperationQueue *presentedItemOperationQueue;
@property (readonly, copy) NSURL *primaryPresentedItemURL;
@property (readonly) NSSet *observedPresentedItemUbiquityAttributes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_suspend;
- (void)_resume;
- (void)accommodatePresentedItemDeletionWithCompletionHandler:(id /* block */)a0;
- (id)initWithURL:(id)a0;
- (void)presentedItemDidChange;
- (void).cxx_destruct;
- (void)presentedItemDidMoveToURL:(id)a0;
- (void)invalidate;
- (void)dealloc;
- (id)initWithURL:(id)a0 bookmarkData:(id)a1;
- (id)initWithBookmarkData:(id)a0;

@end
