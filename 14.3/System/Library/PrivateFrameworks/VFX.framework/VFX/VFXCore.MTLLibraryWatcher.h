@class NSURL, NSOperationQueue;

@interface VFXCore.MTLLibraryWatcher : NSObject <NSFilePresenter> {
    void /* unknown type, empty encoding */ libraryURL;
    void /* unknown type, empty encoding */ watchingFolderQueue;
    void /* unknown type, empty encoding */ block;
}

@property (nonatomic, readonly) NSURL *presentedItemURL;
@property (nonatomic, readonly) NSOperationQueue *presentedItemOperationQueue;

- (id)init;
- (void).cxx_destruct;
- (void)presentedItemDidChange;

@end
