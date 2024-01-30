@class WAKView, WebHighlightLayer, WebNodeHighlightView;

@interface WebNodeHighlight : NSObject {
    WAKView *_targetView;
    WebHighlightLayer *_highlightLayer;
    WebNodeHighlightView *_highlightView;
    struct NakedPtr<WebCore::InspectorController> { struct InspectorController *m_ptr; } _inspectorController;
    id _delegate;
}

- (void)detach;
- (id)highlightView;
- (void)dealloc;
- (void)setNeedsDisplay;
- (id)targetView;
- (void)attach;
- (id).cxx_construct;
- (void)setDelegate:(id)a0;
- (id)delegate;
- (id)initWithTargetView:(id)a0 inspectorController:(struct NakedPtr<WebCore::InspectorController> { struct InspectorController *x0; })a1;
- (struct NakedPtr<WebCore::InspectorController> { struct InspectorController *x0; })inspectorController;

@end
