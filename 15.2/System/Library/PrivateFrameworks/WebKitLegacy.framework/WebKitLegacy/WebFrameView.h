@class WebFrame, WAKView, WebFrameViewPrivate;
@protocol WebDocumentView;

@interface WebFrameView : WAKView <WebCoreFrameView> {
    WebFrameViewPrivate *_private;
}

@property (readonly, nonatomic) WebFrame *webFrame;
@property (readonly, nonatomic) WAKView<WebDocumentView> *documentView;
@property (nonatomic) BOOL allowsScrolling;
@property (readonly, nonatomic) BOOL documentViewShouldHandlePrint;

+ (id)_viewTypesAllowImageTypeOmission:(BOOL)a0;
+ (Class)_viewClassForMIMEType:(id)a0 allowingPlugins:(BOOL)a1;
+ (BOOL)_canShowMIMETypeAsHTML:(id)a0;

- (void)mouseUp:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })visibleRect;
- (void)keyDown:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)_webView;
- (void)setFrameSize:(struct CGSize { double x0; double x1; })a0;
- (struct NakedPtr<WebCore::Frame> { struct Frame *x0; })_web_frame;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_goBack;
- (void)_install;
- (void)mouseDown:(id)a0;
- (BOOL)isOpaque;
- (BOOL)acceptsFirstResponder;
- (id)_contentView;
- (BOOL)becomeFirstResponder;
- (void)dealloc;
- (void)_setDocumentView:(id)a0;
- (BOOL)scrollView:(id)a0 shouldScrollToPoint:(struct CGPoint { double x0; double x1; })a1;
- (void)viewDidMoveToWindow;
- (id)_scrollView;
- (void)frameSizeChanged;
- (void)setNextKeyView:(id)a0;
- (float)_area;
- (void)_goForward;
- (BOOL)_isScrollable;
- (void)_setWebFrame:(id)a0;
- (Class)_viewClassForMIMEType:(id)a0;
- (id)_makeDocumentViewForDataSource:(id)a0;
- (float)_verticalKeyboardScrollDistance;
- (float)_verticalPageScrollDistance;
- (void)_frameSizeChanged;
- (BOOL)_scrollOverflowInDirection:(unsigned char)a0 granularity:(unsigned char)a1;
- (BOOL)_isVerticalDocument;
- (BOOL)_isFlippedDocument;
- (BOOL)_scrollToBeginningOfDocument;
- (id)_largestScrollableChild;
- (void)scrollToBeginningOfDocument:(id)a0;
- (BOOL)_scrollToEndOfDocument;
- (void)scrollToEndOfDocument:(id)a0;
- (BOOL)_pageVertically:(BOOL)a0;
- (BOOL)_scrollVerticallyBy:(float)a0;
- (BOOL)_pageHorizontally:(BOOL)a0;
- (float)_horizontalPageScrollDistance;
- (BOOL)_scrollHorizontallyBy:(float)a0;
- (BOOL)_scrollLineVertically:(BOOL)a0;
- (BOOL)_scrollLineHorizontally:(BOOL)a0;
- (float)_horizontalKeyboardScrollDistance;
- (BOOL)_pageInBlockProgressionDirection:(BOOL)a0;
- (void)scrollPageUp:(id)a0;
- (void)scrollPageDown:(id)a0;
- (void)scrollLineUp:(id)a0;
- (void)scrollLineDown:(id)a0;
- (void)_forwardMouseEvent:(id)a0;
- (BOOL)_firstResponderIsFormControl;
- (id)_webcore_effectiveFirstResponder;
- (void)printDocumentView;
- (BOOL)_hasScrollBars;
- (id)_largestChildWithScrollBars;
- (Class)_customScrollViewClass;

@end
