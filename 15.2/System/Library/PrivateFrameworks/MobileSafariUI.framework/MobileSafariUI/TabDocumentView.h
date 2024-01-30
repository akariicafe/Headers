@class WKWebView, UIView;
@protocol SFWebViewGeometryC2AnimationObserving, TabDocumentViewGeometryProviding;

@interface TabDocumentView : UIView {
    UIView *_readerTransitionContainerView;
    long long _interactiveGeometryUpdateCount;
    long long _animatedGeometryUpdateCount;
}

@property (retain, nonatomic) WKWebView *webView;
@property (retain, nonatomic) WKWebView *readerWebView;
@property (readonly, nonatomic, getter=isShowingReader) BOOL showingReader;
@property (readonly, nonatomic) BOOL isAnimatingInteractiveGeometryChanges;
@property (readonly, nonatomic) double scrollDistance;
@property (weak, nonatomic) id<TabDocumentViewGeometryProviding> geometryProvider;
@property (weak, nonatomic) id<SFWebViewGeometryC2AnimationObserving> animationObserver;

- (void)layoutSubviews;
- (void)_applyGeometry:(struct { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; struct UIEdgeInsets { double x0; double x1; double x2; double x3; } x1; struct UIEdgeInsets { double x0; double x1; double x2; double x3; } x2; struct SFScrollIndicatorInsets { struct UIEdgeInsets { double x0; double x1; double x2; double x3; } x0; struct UIEdgeInsets { double x0; double x1; double x2; double x3; } x1; } x3; struct CGSize { double x0; double x1; } x4; struct CGSize { double x0; double x1; } x5; struct UIEdgeInsets { double x0; double x1; double x2; double x3; } x6; BOOL x7; BOOL x8; })a0 toWebView:(id)a1 animated:(BOOL)a2;
- (void)setWebViewGeometryNeedsUpdate;
- (void)ensureContentOffsetWithinContentInsets;
- (void)_performReaderTransitionWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (void)beginInteractiveGeometryChangesAnimated:(BOOL)a0;
- (struct { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; struct UIEdgeInsets { double x0; double x1; double x2; double x3; } x1; struct UIEdgeInsets { double x0; double x1; double x2; double x3; } x2; struct SFScrollIndicatorInsets { struct UIEdgeInsets { double x0; double x1; double x2; double x3; } x0; struct UIEdgeInsets { double x0; double x1; double x2; double x3; } x1; } x3; struct CGSize { double x0; double x1; } x4; struct CGSize { double x0; double x1; } x5; struct UIEdgeInsets { double x0; double x1; double x2; double x3; } x6; BOOL x7; BOOL x8; })currentGeometry;
- (void)applyGeometryToWebView:(id)a0;
- (void)applyGeometry:(struct { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; struct UIEdgeInsets { double x0; double x1; double x2; double x3; } x1; struct UIEdgeInsets { double x0; double x1; double x2; double x3; } x2; struct SFScrollIndicatorInsets { struct UIEdgeInsets { double x0; double x1; double x2; double x3; } x0; struct UIEdgeInsets { double x0; double x1; double x2; double x3; } x1; } x3; struct CGSize { double x0; double x1; } x4; struct CGSize { double x0; double x1; } x5; struct UIEdgeInsets { double x0; double x1; double x2; double x3; } x6; BOOL x7; BOOL x8; })a0 toWebView:(id)a1;
- (void)setShowingReader:(BOOL)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void)endInteractiveGeometryChangesAnimated:(BOOL)a0;

@end
