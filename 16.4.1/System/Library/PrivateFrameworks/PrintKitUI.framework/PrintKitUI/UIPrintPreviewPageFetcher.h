@class NSMutableDictionary, NSArray, NSURL, NSOperationQueue, NSMutableArray, UIPrintPreviewInfo;

@interface UIPrintPreviewPageFetcher : NSObject {
    struct CGPDFDocument { } *_pdfDocRef;
    NSOperationQueue *_pageRendererQueue;
}

@property (retain) NSURL *pdfURL;
@property (retain) NSMutableArray *cachedInRangeIndexes;
@property long long cachedTotalPageCount;
@property long long cachedSheetNumber;
@property long long numNUpColumns;
@property long long numNUpRows;
@property struct CGSize { double width; double height; } pageSize;
@property struct CGSize { double width; double height; } previewSize;
@property BOOL showingPageLayout;
@property (retain) UIPrintPreviewInfo *previewInfo;
@property struct CGSize { double width; double height; } paperSize;
@property long long cachedTotalSheetCount;
@property (retain) NSMutableDictionary *cachedSheetImages;
@property struct CGSize { double width; double height; } pageItemSize;
@property (retain) NSArray *pageSizes;
@property double minPageWith;
@property (retain) NSURL *quickLookPDFURL;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })itemSizeAtPageIndex:(long long)a0 flowlayout:(id)a1;
- (struct CGSize { double x0; double x1; })pageSizeAtPageIndex:(long long)a0 flowlayout:(id)a1;
- (long long)_caculateSheetNumber:(id)a0;
- (void)_drawBorderOfType:(long long)a0 withScaleFactor:(double)a1 context:(struct CGContext { } *)a2 pageRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3;
- (id)_drawPageContextIntoImage:(long long)a0;
- (id)_drawPageWithLayoutIntoImage:(long long)a0 previewInfo:(id)a1;
- (BOOL)_mirrorHorizontal:(id)a0;
- (BOOL)_pageIndexIsInRange:(long long)a0 printInfo:(id)a1;
- (long long)_pageOffsetForRow:(long long)a0 column:(long long)a1 printInfo:(id)a2;
- (struct CGSize { double x0; double x1; })_pagesLayout:(id)a0;
- (double)_paperAspectRatio;
- (struct CGSize { double x0; double x1; })_paperSize:(id)a0;
- (void)_removeQuickLookPDFURL;
- (void)_resetPageNUp:(id)a0;
- (void)_resetPagesIndexsInRange;
- (BOOL)_reversePageOrientation:(id)a0;
- (double)caculateFooterWidth:(double)a0;
- (double)caculateHeaderWidth:(double)a0;
- (void)fetchImageInBackground:(long long)a0 completion:(id /* block */)a1;
- (long long)fetchNumberOfItems;
- (struct CGSize { double x0; double x1; })imageSizeAtPageIndex:(long long)a0;
- (BOOL)needDrawPageWithLayout;
- (id)quicklookPageThumbnailAtIndex:(long long)a0;
- (void)redrawQuicklookPDF:(id /* block */)a0;
- (void)resetAllPageImages;
- (void)resetAllPages:(id /* block */)a0;
- (id)sheetImageForItemAt:(long long)a0;
- (long long)sheetIndexToPrintForItemAt:(long long)a0;
- (struct CGSize { double x0; double x1; })sheetSizeAtPageIndex:(long long)a0 flowlayout:(id)a1;
- (void)updatePdfURL:(id)a0 options:(id)a1 completion:(id /* block */)a2;

@end
