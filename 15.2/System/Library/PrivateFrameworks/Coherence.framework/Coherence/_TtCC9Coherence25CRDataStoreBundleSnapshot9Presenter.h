@class NSURL;

@interface _TtCC9Coherence25CRDataStoreBundleSnapshot9Presenter : NSObject <NSFilePresenter> {
    void /* unknown type, empty encoding */ presentedItemURL;
    void /* unknown type, empty encoding */ snapshot;
}

@property (nonatomic, readonly) NSURL *presentedItemURL;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ presentedItemOperationQueue;

- (void)accommodatePresentedSubitemDeletionAtURL:(id)a0 completionHandler:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;

@end
