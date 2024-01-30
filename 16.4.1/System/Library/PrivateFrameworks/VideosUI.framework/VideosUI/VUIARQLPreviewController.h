@class ARQuickLookPreviewItem, ARQuickLookWebKitItem;

@interface VUIARQLPreviewController : QLPreviewController <QLPreviewControllerDataSource>

@property (retain, nonatomic) ARQuickLookWebKitItem *quickLookWebKitItem;
@property (retain, nonatomic) ARQuickLookPreviewItem *quickLookPreviewItem;

- (long long)numberOfPreviewItemsInPreviewController:(id)a0;
- (id)previewController:(id)a0 previewItemAtIndex:(long long)a1;
- (void).cxx_destruct;
- (id)initWithQuickLookPreviewItem:(id)a0;
- (id)initWithQuickLookWebKitItem:(id)a0;

@end
