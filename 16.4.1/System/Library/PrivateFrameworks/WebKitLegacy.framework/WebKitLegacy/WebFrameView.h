@class WebFrame, WAKView, WebFrameViewPrivate;
@protocol WebDocumentView;

@interface WebFrameView : WAKView <WebCoreFrameView> {
    WebFrameViewPrivate *_private;
}

@property (readonly, nonatomic) WebFrame *webFrame;
@property (readonly, nonatomic) WAKView<WebDocumentView> *documentView;
@property (nonatomic) BOOL allowsScrolling;
@property (readonly, nonatomic) BOOL documentViewShouldHandlePrint;

+ (BOOL)_canShowMIMETypeAsHTML:(id)a0;
+ (Class)_viewClassForMIMEType:(id)a0 allowingPlugins:(BOOL)a1;
+ (id)_viewTypesAllowImageTypeOmission:(BOOL)a0;

- (void)mouseUp:(id)a0;
- (id)_contentView;
- (BOOL)becomeFirstResponder;
- (BOOL)isOpaque;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })visibleRect;
- (id)_scrollView;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)keyDown:(id)a0;
- (id)_webView;
- (void)mouseDown:(id)a0;
- (void)setFrameSize:(struct CGSize { double x0; double x1; })a0;
- (void)viewDidMoveToWindow;
- (float)_area;
- (BOOL)scrollView:(id)a0 shouldScrollToPoint:(struct CGPoint { double x0; double x1; })a1;
- (void)setNextKeyView:(id)a0;
- (void)_setDocumentView:(id)a0;
- (struct NakedPtr<WebCore::Frame> { struct Frame *x0; })_web_frame;
- (BOOL)acceptsFirstResponder;
- (void)frameSizeChanged;
- (BOOL)_isScrollable;
- (void)_goBack;
- (void)_goForward;
- (void)_install;
- (void)scrollPageDown:(id)a0;
- (Class)_customScrollViewClass;
- (id)_makeDocumentViewForDataSource:(id)a0;
- (float)_verticalKeyboardScrollDistance;
- (void)scrollLineDown:(id)a0;
- (BOOL)_firstResponderIsFormControl;
- (void)_forwardMouseEvent:(id)a0;
- (void)_frameSizeChanged;
- (BOOL)_hasScrollBars;
- (float)_horizontalKeyboardScrollDistance;
- (float)_horizontalPageScrollDistance;
- (BOOL)_isFlippedDocument;
- (BOOL)_isVerticalDocument;
- (id)_largestChildWithScrollBars;
- (id)_largestScrollableChild;
- (BOOL)_pageHorizontally:(BOOL)a0;
- (BOOL)_pageInBlockProgressionDirection:(BOOL)a0;
- (BOOL)_pageVertically:(BOOL)a0;
- (BOOL)_scrollHorizontallyBy:(float)a0;
- (BOOL)_scrollLineHorizontally:(BOOL)a0;
- (BOOL)_scrollLineVertically:(BOOL)a0;
- (BOOL)_scrollOverflowInDirection:(unsigned char)a0 granularity:(unsigned char)a1;
- (BOOL)_scrollToBeginningOfDocument;
- (BOOL)_scrollToEndOfDocument;
- (BOOL)_scrollVerticallyBy:(float)a0;
- (void)_setWebFrame:(id)a0;
- (float)_verticalPageScrollDistance;
- (Class)_viewClassForMIMEType:(id)a0;
- (id)_webcore_effectiveFirstResponder;
- (void)printDocumentView;
- (void)scrollLineUp:(id)a0;
- (void)scrollPageUp:(id)a0;
- (void)scrollToBeginningOfDocument:(id)a0;
- (void)scrollToEndOfDocument:(id)a0;

@end
