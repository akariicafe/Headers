@class NSURL, NSOperationQueue;

@interface _TtC7VFXCoreP33_04FAA53CB72A1AD8A5C9D12D73F465CD17MTLLibraryWatcher : NSObject <NSFilePresenter> {
    void /* unknown type, empty encoding */ libraryURL;
    void /* unknown type, empty encoding */ watchingFolderQueue;
    void /* unknown type, empty encoding */ block;
}

@property (nonatomic, readonly) NSURL *presentedItemURL;
@property (nonatomic, readonly) NSOperationQueue *presentedItemOperationQueue;

- (void)presentedItemDidChange;
- (void).cxx_destruct;
- (id)init;

@end
