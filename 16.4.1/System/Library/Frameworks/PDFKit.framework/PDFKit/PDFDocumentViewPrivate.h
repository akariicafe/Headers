@class PDFDocumentContentView, NSMutableDictionary, PDFView, PDFRenderingProperties, PDFPageBackgroundManager, PDFDocument, PDFAnnotationPointerTrackingView;

@interface PDFDocumentViewPrivate : NSObject {
    PDFView *pdfView;
    PDFDocument *document;
    PDFRenderingProperties *renderingProperties;
    struct CGSize { double width; double height; } documentViewSize;
    PDFDocumentContentView *contentView;
    NSMutableDictionary *pageViews;
    NSMutableDictionary *pageFrames;
    PDFPageBackgroundManager *pageBackgroundManager;
    BOOL ignoreChangedBoundsForBoxNotification;
    PDFAnnotationPointerTrackingView *pointerTrackingView;
}

- (void).cxx_destruct;

@end
