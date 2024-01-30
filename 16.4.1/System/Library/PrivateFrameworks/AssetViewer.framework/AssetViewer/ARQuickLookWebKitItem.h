@class ARQuickLookPreviewItem, NSString, NSDictionary;
@protocol ARQuickLookWebKitItemDelegate;

@interface ARQuickLookWebKitItem : QLItem <QLPreviewItemPrivateCustomExtensionHandling>

@property (retain, nonatomic) ARQuickLookPreviewItem *previewItem;
@property (weak, nonatomic) id<ARQuickLookWebKitItemDelegate> delegate;
@property (retain, nonatomic) NSString *urlFragment;
@property (copy, nonatomic) NSDictionary *additionalParameters;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithPreviewItemProvider:(id)a0 contentType:(id)a1 previewTitle:(id)a2 fileSize:(id)a3 previewItem:(id)a4;
- (id)previewOptions;
- (void)handleMessageFromCustomExtension:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithDataProvider:(id)a0 contentType:(id)a1 previewTitle:(id)a2 previewItem:(id)a3;

@end
