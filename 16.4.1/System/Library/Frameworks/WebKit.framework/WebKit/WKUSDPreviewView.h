@class NSString, NSData, UIView, WKWebView;

@interface WKUSDPreviewView : WKApplicationStateTrackingView <ASVThumbnailViewDelegate, WKWebViewContentProvider, QLPreviewItemDataProvider> {
    struct RetainPtr<NSItemProvider> { void *m_ptr; } _itemProvider;
    struct RetainPtr<NSData> { void *m_ptr; } _data;
    struct RetainPtr<NSString> { void *m_ptr; } _suggestedFilename;
    struct RetainPtr<NSString> { void *m_ptr; } _mimeType;
    struct RetainPtr<QLItem> { void *m_ptr; } _item;
    struct RetainPtr<ASVThumbnailView> { void *m_ptr; } _thumbnailView;
    WKWebView *_webView;
}

@property (class, readonly, nonatomic) BOOL web_requiresCustomSnapshotting;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) UIView *web_contentView;
@property (readonly, nonatomic) NSData *web_dataRepresentation;
@property (readonly, nonatomic) NSString *web_suggestedFilename;
@property (readonly, nonatomic) BOOL web_isBackground;

- (id)provideDataForItem:(id)a0;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_layoutThumbnailView;
- (void)thumbnailView:(id)a0 wantsToPresentPreviewController:(id)a1 forItem:(id)a2;
- (void)web_computedContentInsetDidChange;
- (void)web_countStringMatches:(id)a0 options:(unsigned long long)a1 maxCount:(unsigned long long)a2;
- (void)web_didSameDocumentNavigation:(unsigned int)a0;
- (void)web_findString:(id)a0 options:(unsigned long long)a1 maxCount:(unsigned long long)a2;
- (void)web_hideFindUI;
- (id)web_initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 webView:(id)a1 mimeType:(id)a2;
- (void)web_setContentProviderData:(id)a0 suggestedFilename:(id)a1;
- (void)web_setFixedOverlayView:(id)a0;
- (void)web_setMinimumSize:(struct CGSize { double x0; double x1; })a0;
- (void)web_setOverlaidAccessoryViewsInset:(struct CGSize { double x0; double x1; })a0;

@end
