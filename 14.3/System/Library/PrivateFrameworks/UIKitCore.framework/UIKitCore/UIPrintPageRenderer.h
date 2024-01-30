@class NSArray, NSMutableArray;

@interface UIPrintPageRenderer : NSObject {
    NSMutableArray *_printFormatters;
    struct CGContext { } *_printContext;
    long long _cachedPageCount;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } paperRect;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } printableRect;
@property (nonatomic) double headerHeight;
@property (nonatomic) double footerHeight;
@property (readonly, nonatomic) long long numberOfPages;
@property (copy) NSArray *printFormatters;

- (void).cxx_destruct;
- (void)dealloc;
- (void)_removePrintFormatter:(id)a0;
- (void)_drawPage:(long long)a0;
- (BOOL)_numberOfPagesIsCached;
- (void)_endSaveContext;
- (void)addPrintFormatter:(id)a0 startingAtPageAtIndex:(long long)a1;
- (void)_startSaveContext:(struct CGContext { } *)a0;
- (void)prepareForDrawingPages:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (BOOL)_startPrintContext:(id)a0 printSettings:(id)a1;
- (void)_endPrintContext:(id)a0 success:(BOOL)a1;
- (long long)_maxFormatterPage;
- (id)printFormatters;
- (void)drawHeaderForPageAtIndex:(long long)a0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)drawContentForPageAtIndex:(long long)a0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)drawPrintFormatter:(id)a0 forPageAtIndex:(long long)a1;
- (void)drawFooterForPageAtIndex:(long long)a0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)drawPageAtIndex:(long long)a0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)setPrintFormatters:(id)a0;
- (id)printFormattersForPageAtIndex:(long long)a0;
- (long long)_numberOfPages;

@end
