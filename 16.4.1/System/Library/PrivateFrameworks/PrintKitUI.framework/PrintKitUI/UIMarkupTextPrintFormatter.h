@class NSString, UIWebPaginationInfo, UIWebDocumentView;

@interface UIMarkupTextPrintFormatter : UIPrintFormatter {
    UIWebDocumentView *_webDocumentView;
    UIWebPaginationInfo *_paginationInfo;
}

@property (copy, nonatomic) NSString *markupText;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (void).cxx_destruct;
- (long long)_recalcPageCount;
- (void)drawInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forPageAtIndex:(long long)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectForPageAtIndex:(long long)a0;
- (void)removeFromPrintPageRenderer;
- (id)initWithMarkupText:(id)a0;
- (void)_resetPaginationInfo;

@end
