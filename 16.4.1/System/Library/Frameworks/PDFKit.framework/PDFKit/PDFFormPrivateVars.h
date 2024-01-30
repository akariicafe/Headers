@class PDFDocument, NSMutableArray;

@interface PDFFormPrivateVars : NSObject {
    PDFDocument *document;
    NSMutableArray *fieldArray;
    struct CGPDFString { } *appearString;
}

- (void).cxx_destruct;

@end
