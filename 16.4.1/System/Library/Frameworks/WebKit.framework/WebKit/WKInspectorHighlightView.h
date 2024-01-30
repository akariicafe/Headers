@interface WKInspectorHighlightView : UIView {
    struct RetainPtr<NSMutableArray<CAShapeLayer *>> { void *m_ptr; } _layers;
    struct optional<WebCore::InspectorOverlay::Highlight> { union { char __null_state_; struct Highlight { struct Color { unsigned long long m_colorAndFlags; } contentColor; struct Color { unsigned long long m_colorAndFlags; } contentOutlineColor; struct Color { unsigned long long m_colorAndFlags; } paddingColor; struct Color { unsigned long long m_colorAndFlags; } borderColor; struct Color { unsigned long long m_colorAndFlags; } marginColor; int type; struct Vector<WebCore::FloatQuad, 0UL, WTF::CrashOnOverflow, 16UL, WTF::FastMalloc> { struct FloatQuad *m_buffer; unsigned int m_capacity; unsigned int m_size; } quads; struct Vector<WebCore::InspectorOverlay::Highlight::GridHighlightOverlay, 0UL, WTF::CrashOnOverflow, 16UL, WTF::FastMalloc> { struct GridHighlightOverlay *m_buffer; unsigned int m_capacity; unsigned int m_size; } gridHighlightOverlays; struct Vector<WebCore::InspectorOverlay::Highlight::FlexHighlightOverlay, 0UL, WTF::CrashOnOverflow, 16UL, WTF::FastMalloc> { struct FlexHighlightOverlay *m_buffer; unsigned int m_capacity; unsigned int m_size; } flexHighlightOverlays; BOOL usePageCoordinates; } __val_; } ; BOOL __engaged_; } _highlight;
}

- (id).cxx_construct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void).cxx_destruct;
- (void)_removeAllLayers;
- (void)_layoutForNodeHighlight:(const void *)a0 offset:(unsigned int)a1;
- (void)_createLayers:(unsigned long long)a0;
- (void)_layoutForNodeListHighlight:(const void *)a0;
- (void)_layoutForRectsHighlight:(const void *)a0;
- (void)update:(const void *)a0 scale:(double)a1 frame:(const struct FloatRect { struct FloatPoint { float x0; float x1; } x0; struct FloatSize { float x0; float x1; } x1; } *)a2;

@end
