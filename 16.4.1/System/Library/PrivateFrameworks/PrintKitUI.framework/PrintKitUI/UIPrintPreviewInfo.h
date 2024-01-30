@class NSArray, UIPrintInfo, UIPrintPaper, NSString;

@interface UIPrintPreviewInfo : NSObject

@property (retain) UIPrintInfo *activePrintInfo;
@property BOOL canShowLayout;
@property BOOL showPageRange;
@property (retain) NSArray *pageRanges;
@property BOOL grayscale;
@property BOOL printPDFAnnotations;
@property BOOL scaleUpOnDestinationPaper;
@property BOOL deepColor;
@property struct CGSize { double width; double height; } destinationViewSize;
@property (retain) UIPrintPaper *printPaper;
@property (retain) UIPrintPaper *destinationPaper;
@property (retain) NSString *pdfPassword;

- (id)init;
- (void).cxx_destruct;

@end
