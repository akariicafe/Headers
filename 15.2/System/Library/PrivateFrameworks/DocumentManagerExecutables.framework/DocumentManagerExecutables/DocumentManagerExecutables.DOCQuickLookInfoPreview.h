@interface DocumentManagerExecutables.DOCQuickLookInfoPreview : QLPreviewController <QLPreviewControllerDataSource> {
    void /* unknown type, empty encoding */ item;
    void /* unknown type, empty encoding */ qlItem;
}

@property (nonatomic, readonly) unsigned long long presentationMode;

- (id)previewController:(id)a0 previewItemAtIndex:(long long)a1;
- (long long)numberOfPreviewItemsInPreviewController:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithPreviewItems:(id)a0;

@end
