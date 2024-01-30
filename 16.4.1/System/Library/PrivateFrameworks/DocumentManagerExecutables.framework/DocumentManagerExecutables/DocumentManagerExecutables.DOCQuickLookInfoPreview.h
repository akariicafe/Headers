@interface DocumentManagerExecutables.DOCQuickLookInfoPreview : QLPreviewController <QLPreviewControllerDataSource> {
    void /* unknown type, empty encoding */ item;
    void /* unknown type, empty encoding */ qlItem;
}

@property (nonatomic, readonly) unsigned long long presentationMode;

- (long long)numberOfPreviewItemsInPreviewController:(id)a0;
- (id)previewController:(id)a0 previewItemAtIndex:(long long)a1;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithCoder:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithPreviewItems:(id)a0;

@end
