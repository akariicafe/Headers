@class NSArray, NSString, UIPrintPaper;

@interface UIPrintPreviewInfo : NSObject

@property BOOL showPageRange;
@property (retain) NSArray *pageRanges;
@property BOOL grayscale;
@property BOOL printPDFAnnotations;
@property BOOL scaleUpOnDestinationPaper;
@property BOOL deepColor;
@property struct CGSize { double width; double height; } destinationViewSize;
@property (retain) UIPrintPaper *destinationPaper;
@property (retain) NSString *pdfPassword;

- (void).cxx_destruct;
- (id)init;

@end
