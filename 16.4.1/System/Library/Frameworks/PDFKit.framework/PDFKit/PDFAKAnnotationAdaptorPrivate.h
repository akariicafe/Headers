@class PDFAnnotation, AKAnnotation;

@interface PDFAKAnnotationAdaptorPrivate : NSObject {
    BOOL isTornDown;
    PDFAnnotation *pdfAnnotation;
    AKAnnotation *akAnnotation;
    BOOL isObservingAKAnnotation;
    BOOL isSyncingFromPDFAnnotation;
    BOOL isSyncingFromAKAnnotation;
}

- (void).cxx_destruct;

@end
