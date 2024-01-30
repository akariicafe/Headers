@class NSPointerArray, QLDataSource;
@protocol QLPreviewItemProvider, QLPreviewItemStoreDelegate;

@interface QLPreviewItemStore : NSObject <QLPreviewItemProvider, QLPreviewControllerDataSource> {
    NSPointerArray *_cache;
    QLDataSource *_internalItemProvider;
}

@property (weak, nonatomic) id<QLPreviewItemProvider> itemProvider;
@property (readonly) unsigned long long numberOfItems;
@property (readonly) struct _NSRange { unsigned long long location; unsigned long long length; } possibleRange;
@property (weak) id<QLPreviewItemStoreDelegate> delegate;
@property (readonly) BOOL isArchive;

- (void)clearCache;
- (id)previewController:(id)a0 previewItemAtIndex:(long long)a1;
- (long long)numberOfPreviewItemsInPreviewController:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)_commonInit;
- (void)dealloc;
- (id)initWithPreviewItems:(id)a0;
- (void)clearItems;
- (void)previewItemAtIndex:(unsigned long long)a0 withCompletionHandler:(id /* block */)a1;
- (id)initWithItemsOfDirectoryAtURL:(id)a0;
- (void)reloadWithNumberOfPreviewItems:(unsigned long long)a0;
- (long long)indexOfPreviewItem:(id)a0;

@end
