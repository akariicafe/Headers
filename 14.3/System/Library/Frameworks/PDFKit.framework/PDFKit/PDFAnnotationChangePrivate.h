@class PDFAnnotation;

@interface PDFAnnotationChangePrivate : NSObject {
    int changeType;
    PDFAnnotation *annotation;
    unsigned long long changeTimestamp;
}

- (void).cxx_destruct;

@end
