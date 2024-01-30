@class PDFPage, DDScannerResult, NSArray;

@interface PDFScannerResultPrivate : NSObject {
    DDScannerResult *ddResult;
    PDFPage *page;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } bounds;
    NSArray *rects;
    BOOL resultIsPastDate;
    BOOL hasRunActionsForResult;
    BOOL hasActionsForResult;
    struct __DDHighlight { } *highlightRef;
}

- (void).cxx_destruct;

@end
