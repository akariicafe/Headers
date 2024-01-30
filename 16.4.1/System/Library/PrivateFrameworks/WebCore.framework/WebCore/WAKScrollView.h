@class WAKView, WAKClipView;

@interface WAKScrollView : WAKView <WebCoreFrameScrollView> {
    WAKView *_documentView;
    WAKClipView *_contentView;
    struct CGPoint { double x; double y; } _scrollOrigin;
}

@property (weak, nonatomic) id delegate;

- (BOOL)drawsBackground;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })unobscuredContentRect;
- (void)setDrawsBackground:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (id)contentView;
- (id)description;
- (void).cxx_destruct;
- (void)scrollPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)documentView;
- (void)scrollWheel:(id)a0;
- (void)setDocumentView:(id)a0;
- (void)_adjustScrollers;
- (BOOL)_selfHandleEvent:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })documentVisibleRect;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })exposedContentRect;
- (BOOL)hasHorizontalScroller;
- (BOOL)hasVerticalScroller;
- (float)horizontalLineScroll;
- (unsigned char)horizontalScrollingMode;
- (BOOL)inProgrammaticScroll;
- (void)reflectScrolledClipView:(id)a0;
- (struct CGPoint { double x0; double x1; })scrollOrigin;
- (void)scrollingModes:(unsigned char *)a0 vertical:(unsigned char *)a1;
- (void)setActualScrollPosition:(struct CGPoint { double x0; double x1; })a0;
- (void)setHasHorizontalScroller:(BOOL)a0;
- (void)setHasVerticalScroller:(BOOL)a0;
- (void)setHorizontalScrollingMode:(unsigned char)a0;
- (void)setLineScroll:(float)a0;
- (void)setScrollBarsSuppressed:(BOOL)a0 repaintOnUnsuppress:(BOOL)a1;
- (void)setScrollOrigin:(struct CGPoint { double x0; double x1; })a0 updatePositionAtAll:(BOOL)a1 immediately:(BOOL)a2;
- (void)setScrollingMode:(unsigned char)a0;
- (void)setScrollingModes:(unsigned char)a0 vertical:(unsigned char)a1 andLock:(BOOL)a2;
- (void)setVerticalScrollingMode:(unsigned char)a0;
- (float)verticalLineScroll;
- (unsigned char)verticalScrollingMode;

@end
