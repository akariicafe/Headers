@class NSString, NSNumber, NSItemProvider;
@protocol QLPreviewItemURLProvider;

@interface QLItemProviderFetcher : QLItemFetcher <QLPreviewItemURLProviderDownloadTracker, QLPreviewItemURLProvider> {
    NSString *_contentType;
    NSNumber *_fileSize;
    id /* block */ _updateBlock;
    id /* block */ _completionBlock;
    long long _fileExtensionHandle;
}

@property (retain, nonatomic) id lastContent;
@property (retain) NSItemProvider *itemProvider;
@property (retain) id<QLPreviewItemURLProvider> urlProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)itemSize;
- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (void)updatedURLWithProgress:(double)a0;
- (void)getURLWithDownloadTracker:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)isLongFetchOperation;
- (void)fetchContentWithAllowedOutputClasses:(id)a0 inQueue:(id)a1 updateBlock:(id /* block */)a2 completionBlock:(id /* block */)a3;
- (id)shareableItem;
- (BOOL)canBeCanceled;
- (id)fetchedContent;
- (id)newItemProvider;
- (void)_updateCompletionBlockWithAllowedOutputClasses:(id)a0 URL:(id)a1;
- (id)initWithContentType:(id)a0 fileSize:(id)a1;
- (void)encodeWithCoder:(id)a0;

@end
