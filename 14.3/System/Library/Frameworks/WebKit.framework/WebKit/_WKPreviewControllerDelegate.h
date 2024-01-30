@class NSString;

@interface _WKPreviewControllerDelegate : NSObject <QLPreviewControllerDelegate> {
    struct SystemPreviewController { struct WebPageProxy *x0; struct SystemPreviewInfo { struct ElementContext { struct FloatRect { struct FloatPoint { float x0; float x1; } x0; struct FloatSize { float x0; float x1; } x1; } x0; struct ObjectIdentifier<WebCore::PageIdentifierType> { unsigned long long x0; } x1; struct ObjectIdentifier<WebCore::DocumentIdentifierType> { unsigned long long x0; } x2; struct ObjectIdentifier<WebCore::ElementIdentifierType> { unsigned long long x0; } x3; } x0; struct IntRect { struct IntPoint { int x0; int x1; } x0; struct IntSize { int x0; int x1; } x1; } x1; BOOL x2; } x1; struct RetainPtr<QLPreviewController> { void *x0; } x2; struct RetainPtr<_WKPreviewControllerDelegate> { void *x0; } x3; struct RetainPtr<_WKPreviewControllerDataSource> { void *x0; } x4; } *_previewController;
    struct IntRect { struct IntPoint { int m_x; int m_y; } m_location; struct IntSize { int m_width; int m_height; } m_size; } _linkRect;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithSystemPreviewController:(struct SystemPreviewController { struct WebPageProxy *x0; struct SystemPreviewInfo { struct ElementContext { struct FloatRect { struct FloatPoint { float x0; float x1; } x0; struct FloatSize { float x0; float x1; } x1; } x0; struct ObjectIdentifier<WebCore::PageIdentifierType> { unsigned long long x0; } x1; struct ObjectIdentifier<WebCore::DocumentIdentifierType> { unsigned long long x0; } x2; struct ObjectIdentifier<WebCore::ElementIdentifierType> { unsigned long long x0; } x3; } x0; struct IntRect { struct IntPoint { int x0; int x1; } x0; struct IntSize { int x0; int x1; } x1; } x1; BOOL x2; } x1; struct RetainPtr<QLPreviewController> { void *x0; } x2; struct RetainPtr<_WKPreviewControllerDelegate> { void *x0; } x3; struct RetainPtr<_WKPreviewControllerDataSource> { void *x0; } x4; } *)a0;
- (id)presentingViewController;
- (id).cxx_construct;
- (void)previewControllerDidDismiss:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })previewController:(id)a0 frameForPreviewItem:(id)a1 inSourceView:(id *)a2;
- (id)previewController:(id)a0 transitionImageForPreviewItem:(id)a1 contentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a2;

@end
