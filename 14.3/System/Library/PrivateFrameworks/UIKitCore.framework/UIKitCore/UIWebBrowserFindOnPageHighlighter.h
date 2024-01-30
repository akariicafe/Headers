@class UIWebBrowserView, NSString, NSArray, UIWebPDFViewHandler, UIView, NSMutableArray;
@protocol UIWebFindOnPageHighlighterDelegate;

@interface UIWebBrowserFindOnPageHighlighter : NSObject <UIWebFindOnPageHighlighter> {
    NSMutableArray *_highlightBubbleViews;
    NSArray *_pdfHighlightViews;
    UIView *_highlightHostView;
    UIWebBrowserView *_browserView;
    UIWebPDFViewHandler *_pdfHandler;
    BOOL _zoomToHighlightSelection;
}

@property (readonly, copy, nonatomic) NSString *searchText;
@property (nonatomic) id<UIWebFindOnPageHighlighterDelegate> delegate;
@property (readonly, nonatomic) unsigned long long numberOfMatches;
@property (readonly, nonatomic) unsigned long long highlightedMatchIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)expandedRectsWouldIntersect:(id)a0;

- (void)dealloc;
- (void)_commonInitialize;
- (void)clearBrowserView;
- (void)_clearHighlightViews;
- (void)_addContentViewAtIndex:(unsigned long long)a0 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)_setSelectionRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 textRects:(id)a1 contentImage:(struct CGImage { } *)a2 contentViews:(id)a3 wobble:(BOOL)a4;
- (void)setSelectionRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 textRects:(id)a1 contentImage:(struct CGImage { } *)a2 wobble:(BOOL)a3;
- (BOOL)updateHighlightBubbleWobble:(BOOL)a0;
- (unsigned long long)findOnPageOptions;
- (BOOL)_updateHighlightedMatchIndex:(BOOL)a0;
- (id)_currentPDFSearchResult;
- (BOOL)_highlightSelection;
- (void)_highlightFindOnPageMatchForPDF:(BOOL)a0 withPDFHandler:(id)a1;
- (void)_highlightFindOnPageMatch:(BOOL)a0;
- (void)highlightPreviousMatch;
- (void)setSearchText:(id)a0 matchLimit:(unsigned long long)a1;
- (void)setSelectionRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 textRects:(id)a1 contentViews:(id)a2 wobble:(BOOL)a3;
- (void)highlightNextMatch;
- (id)initWithBrowserView:(id)a0;
- (id)initWithPDFViewHandler:(id)a0;
- (void)searchDidBegin:(id)a0;
- (void)searchDidTimeOut:(id)a0;
- (void)searchWasCancelled:(id)a0;
- (void)searchLimitHit:(id)a0;
- (void)searchDidFinish:(id)a0;
- (void)search:(id)a0 hasPartialResults:(id)a1;

@end
