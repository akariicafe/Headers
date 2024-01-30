@class WKWebView, UIView;
@protocol TabDocumentViewGeometryProviding;

@interface TabDocumentView : UIView {
    long long _interactiveGeometryUpdateCount;
    UIView *_readerTransitionContainerView;
}

@property (retain, nonatomic) WKWebView *webView;
@property (retain, nonatomic) WKWebView *readerWebView;
@property (readonly, nonatomic, getter=isShowingReader) BOOL showingReader;
@property (readonly, nonatomic, getter=isAnimatingInteractiveGeometryChanges) BOOL animatingInteractiveGeometryChanges;
@property (weak, nonatomic) id<TabDocumentViewGeometryProviding> geometryProvider;
@property (readonly, nonatomic) double scrollDistance;

- (void)setShowingReader:(BOOL)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void)endInteractiveGeometryChanges;
- (void)ensureContentOffsetWithinContentInsets;
- (void)beginInteractiveGeometryChanges;
- (void)applyGeometry:(struct { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; struct UIEdgeInsets { double x0; double x1; double x2; double x3; } x1; struct UIEdgeInsets { double x0; double x1; double x2; double x3; } x2; struct SFScrollIndicatorInsets { struct UIEdgeInsets { double x0; double x1; double x2; double x3; } x0; struct UIEdgeInsets { double x0; double x1; double x2; double x3; } x1; } x3; struct CGSize { double x0; double x1; } x4; struct CGSize { double x0; double x1; } x5; struct UIEdgeInsets { double x0; double x1; double x2; double x3; } x6; BOOL x7; double x8; })a0 toWebView:(id)a1;
- (void)setWebViewGeometryNeedsUpdate;
- (void)_performReaderTransitionWithCompletion:(id /* block */)a0;
- (void)layoutSubviews;
- (void)applyGeometryToWebView:(id)a0;
- (struct { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; struct UIEdgeInsets { double x0; double x1; double x2; double x3; } x1; struct UIEdgeInsets { double x0; double x1; double x2; double x3; } x2; struct SFScrollIndicatorInsets { struct UIEdgeInsets { double x0; double x1; double x2; double x3; } x0; struct UIEdgeInsets { double x0; double x1; double x2; double x3; } x1; } x3; struct CGSize { double x0; double x1; } x4; struct CGSize { double x0; double x1; } x5; struct UIEdgeInsets { double x0; double x1; double x2; double x3; } x6; BOOL x7; double x8; })currentGeometry;
- (void).cxx_destruct;

@end
