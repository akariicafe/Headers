@class PDFPageView, PDFView, NSMutableDictionary, PDFPage, PDFAnnotation;

@interface PDFPageViewAnnotationControllerPrivate : NSObject {
    PDFPageView *pageView;
    PDFPage *page;
    PDFView *view;
    PDFAnnotation *activeAnnotation;
    NSMutableDictionary *activeControls;
}

- (void).cxx_destruct;

@end
