@class WAKView, WAKClipView;

@interface WAKScrollView : WAKView <WebCoreFrameScrollView> {
    WAKView *_documentView;
    WAKClipView *_contentView;
    struct CGPoint { double x; double y; } _scrollOrigin;
}

@property (weak, nonatomic) id delegate;

- (void).cxx_destruct;
- (void)scrollWheel:(id)a0;
- (void)dealloc;
- (BOOL)drawsBackground;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })unobscuredContentRect;
- (void)setDocumentView:(id)a0;
- (id)description;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)scrollPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)setScrollingModes:(unsigned char)a0 vertical:(unsigned char)a1 andLock:(BOOL)a2;
- (void)scrollingModes:(unsigned char *)a0 vertical:(unsigned char *)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })exposedContentRect;
- (void)setActualScrollPosition:(struct CGPoint { double x0; double x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })documentVisibleRect;
- (struct CGPoint { double x0; double x1; })scrollOrigin;
- (void)setScrollBarsSuppressed:(BOOL)a0 repaintOnUnsuppress:(BOOL)a1;
- (void)setScrollOrigin:(struct CGPoint { double x0; double x1; })a0 updatePositionAtAll:(BOOL)a1 immediately:(BOOL)a2;
- (id)contentView;
- (id)documentView;
- (BOOL)_selfHandleEvent:(id)a0;
- (void)setHasVerticalScroller:(BOOL)a0;
- (BOOL)hasVerticalScroller;
- (void)setHasHorizontalScroller:(BOOL)a0;
- (BOOL)hasHorizontalScroller;
- (void)setLineScroll:(float)a0;
- (float)verticalLineScroll;
- (float)horizontalLineScroll;
- (void)reflectScrolledClipView:(id)a0;
- (void)setHorizontalScrollingMode:(unsigned char)a0;
- (void)setVerticalScrollingMode:(unsigned char)a0;
- (void)setScrollingMode:(unsigned char)a0;
- (unsigned char)horizontalScrollingMode;
- (unsigned char)verticalScrollingMode;
- (BOOL)inProgrammaticScroll;
- (void)_adjustScrollers;
- (void)setDrawsBackground:(BOOL)a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
