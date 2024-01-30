@class NSString, PDFView, PDFSelection, NSMutableArray;
@protocol PDFHostProtocol;

@interface PDFExtensionViewControllerPrivate : NSObject {
    id<PDFHostProtocol> hostProxy;
    PDFView *pdfView;
    struct CGSize { double width; double height; } documentViewSize;
    NSString *searchString;
    PDFSelection *searchSelection;
    NSMutableArray *searchResults;
    BOOL didCancelActiveSearch;
    long long currentGestureState;
    BOOL hasSelection;
    struct CGPoint { double x; double y; } topLeftSelectionPoint;
    struct CGPoint { double x; double y; } bottomRightSelectionPoint;
}

- (void).cxx_destruct;

@end
