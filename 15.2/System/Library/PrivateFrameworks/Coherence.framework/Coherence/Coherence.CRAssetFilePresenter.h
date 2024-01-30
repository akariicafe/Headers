@class NSURL;

@interface Coherence.CRAssetFilePresenter : NSObject <NSFilePresenter> {
    void /* unknown type, empty encoding */ presentedItemURL;
    void /* unknown type, empty encoding */ assetManager;
}

@property (nonatomic, readonly) NSURL *presentedItemURL;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ presentedItemOperationQueue;

- (void)accommodatePresentedSubitemDeletionAtURL:(id)a0 completionHandler:(id /* block */)a1;
- (void)presentedSubitemDidAppearAtURL:(id)a0;
- (void)presentedSubitemDidChangeAtURL:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
