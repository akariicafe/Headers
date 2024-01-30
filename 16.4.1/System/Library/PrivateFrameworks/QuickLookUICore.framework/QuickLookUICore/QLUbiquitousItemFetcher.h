@class NSFileCoordinator, FPSandboxingURLWrapper, NSURL, QLURLHandler, NSMutableArray, NSNumber;

@interface QLUbiquitousItemFetcher : QLItemFetcher {
    FPSandboxingURLWrapper *_sandboxingWrapper;
    NSFileCoordinator *_fileCoordinator;
    NSMutableArray *_updateBlocks;
    id _progressSubscriber;
    NSNumber *_sizeTotalUnitCount;
    QLURLHandler *_zipPackageUrlHandler;
    BOOL _shouldZipPackageIfNeeded;
    BOOL _isAccessingURL;
}

@property (readonly, nonatomic) NSURL *fileURL;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)itemSize;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (id)newItemProvider;
- (id)initWithZippingPackageIfNeeded:(BOOL)a0;
- (id)_createURLForPackageIfNeeded;
- (void)_deleteTempraryZipPackageFileIfNeeded;
- (void)_removeUpdateBlockIfNeeded:(id /* block */)a0;
- (BOOL)canBeCanceled;
- (void)cancelFetch;
- (void)fetchContentWithAllowedOutputClasses:(id)a0 inQueue:(id)a1 updateBlock:(id /* block */)a2 completionBlock:(id /* block */)a3;
- (id)fetchedContent;
- (id)initWithSandboxingURLWrapper:(id)a0 shouldZipPackageIfNeeded:(BOOL)a1;
- (id)initWithURL:(id)a0 shouldZipPackageIfNeeded:(BOOL)a1;
- (BOOL)isLongFetchOperation;
- (id)shareableItem;
- (void)subscribeToPreviewItemProgress;

@end
