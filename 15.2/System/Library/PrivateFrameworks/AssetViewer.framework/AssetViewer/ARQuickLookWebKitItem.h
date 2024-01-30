@class ARQuickLookPreviewItem, NSDictionary, NSString;
@protocol ARQuickLookWebKitItemDelegate;

@interface ARQuickLookWebKitItem : QLItem <QLPreviewItemPrivateCustomExtensionHandling>

@property (retain, nonatomic) ARQuickLookPreviewItem *previewItem;
@property (weak, nonatomic) id<ARQuickLookWebKitItemDelegate> delegate;
@property (copy, nonatomic) NSDictionary *additionalParameters;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithPreviewItemProvider:(id)a0 contentType:(id)a1 previewTitle:(id)a2 fileSize:(id)a3 previewItem:(id)a4;
- (void).cxx_destruct;
- (void)handleMessageFromCustomExtension:(id)a0 completionHandler:(id /* block */)a1;
- (id)previewOptions;
- (id)initWithDataProvider:(id)a0 contentType:(id)a1 previewTitle:(id)a2 previewItem:(id)a3;

@end
