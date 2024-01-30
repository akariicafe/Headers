@class NSString, UIWebPaginationInfo, UIWebDocumentView;

@interface UIMarkupTextPrintFormatter : UIPrintFormatter {
    UIWebDocumentView *_webDocumentView;
    UIWebPaginationInfo *_paginationInfo;
}

@property (copy, nonatomic) NSString *markupText;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (void)_resetPaginationInfo;
- (void)removeFromPrintPageRenderer;
- (id)initWithMarkupText:(id)a0;
- (long long)_recalcPageCount;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectForPageAtIndex:(long long)a0;
- (void)drawInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forPageAtIndex:(long long)a1;

@end
