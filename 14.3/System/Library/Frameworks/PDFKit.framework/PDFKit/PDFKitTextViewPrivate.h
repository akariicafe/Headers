@class UITextView, PDFPageView, PDFView, PDFAnnotation;

@interface PDFKitTextViewPrivate : NSObject {
    UITextView *textView;
    PDFView *pdfView;
    PDFPageView *pdfPageView;
    PDFAnnotation *annotation;
}

- (void).cxx_destruct;

@end
