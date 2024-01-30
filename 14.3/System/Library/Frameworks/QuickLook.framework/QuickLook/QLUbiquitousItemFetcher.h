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

- (void).cxx_destruct;
- (id)itemSize;
- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (BOOL)isLongFetchOperation;
- (void)fetchContentWithAllowedOutputClasses:(id)a0 inQueue:(id)a1 updateBlock:(id /* block */)a2 completionBlock:(id /* block */)a3;
- (id)shareableItem;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)initWithZippingPackageIfNeeded:(BOOL)a0;
- (void)_removeUpdateBlockIfNeeded:(id /* block */)a0;
- (id)_createURLForPackageIfNeeded;
- (void)subscribeToPreviewItemProgress;
- (void)_deleteTempraryZipPackageFileIfNeeded;
- (id)initWithSandboxingURLWrapper:(id)a0 shouldZipPackageIfNeeded:(BOOL)a1;
- (id)initWithURL:(id)a0 shouldZipPackageIfNeeded:(BOOL)a1;
- (BOOL)canBeCanceled;
- (void)cancelFetch;
- (id)fetchedContent;
- (id)newItemProvider;
- (void)encodeWithCoder:(id)a0;

@end
