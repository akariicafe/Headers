@class PDFPageViewController, PDFView, PDFRenderingProperties, PDFPageBackgroundManager, NSHashTable, UIScrollView;

@interface PDFDocumentViewControllerPrivate : NSObject {
    PDFView *pdfView;
    PDFRenderingProperties *renderingProperties;
    PDFPageViewController *activePageView;
    PDFPageBackgroundManager *pageBackgroundManager;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } weakPageViewControllersLock;
    NSHashTable *weakPageViewControllers;
    double minScale;
    double maxScale;
    BOOL displaysRTL;
    UIScrollView *scrollView;
}

- (void).cxx_destruct;

@end
