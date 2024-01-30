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

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (id)itemSize;
- (id)shareableItem;
- (BOOL)isLongFetchOperation;
- (void)fetchContentWithAllowedOutputClasses:(id)a0 inQueue:(id)a1 updateBlock:(id /* block */)a2 completionBlock:(id /* block */)a3;
- (id)fetchedContent;
- (id)newItemProvider;
- (BOOL)canBeCanceled;
- (void)updatedURLWithProgress:(double)a0;
- (void)getURLWithDownloadTracker:(id)a0 completionHandler:(id /* block */)a1;
- (void)_updateCompletionBlockWithAllowedOutputClasses:(id)a0 URL:(id)a1;
- (id)initWithContentType:(id)a0 fileSize:(id)a1;

@end
