@class WebNodeHighlight, NSMutableArray;

@interface WebNodeHighlightView : WAKView {
    WebNodeHighlight *_webNodeHighlight;
    NSMutableArray *_layers;
}

- (void)dealloc;
- (BOOL)isFlipped;
- (void)_removeAllLayers;
- (void)layoutSublayers:(id)a0;
- (id)initWithWebNodeHighlight:(id)a0;
- (void)detachFromWebNodeHighlight;
- (void)_attach:(id)a0 numLayers:(unsigned long long)a1;
- (void)_layoutForNodeHighlight:(struct Highlight { struct Color { union { unsigned long long x0; struct ExtendedColor *x1; } x0; } x0; struct Color { union { unsigned long long x0; struct ExtendedColor *x1; } x0; } x1; struct Color { union { unsigned long long x0; struct ExtendedColor *x1; } x0; } x2; struct Color { union { unsigned long long x0; struct ExtendedColor *x1; } x0; } x3; struct Color { union { unsigned long long x0; struct ExtendedColor *x1; } x0; } x4; int x5; struct Vector<WebCore::FloatQuad, 0, WTF::CrashOnOverflow, 16, WTF::FastMalloc> { struct FloatQuad *x0; unsigned int x1; unsigned int x2; } x6; BOOL x7; } *)a0 parent:(id)a1;
- (void)_layoutForRectsHighlight:(struct Highlight { struct Color { union { unsigned long long x0; struct ExtendedColor *x1; } x0; } x0; struct Color { union { unsigned long long x0; struct ExtendedColor *x1; } x0; } x1; struct Color { union { unsigned long long x0; struct ExtendedColor *x1; } x0; } x2; struct Color { union { unsigned long long x0; struct ExtendedColor *x1; } x0; } x3; struct Color { union { unsigned long long x0; struct ExtendedColor *x1; } x0; } x4; int x5; struct Vector<WebCore::FloatQuad, 0, WTF::CrashOnOverflow, 16, WTF::FastMalloc> { struct FloatQuad *x0; unsigned int x1; unsigned int x2; } x6; BOOL x7; } *)a0 parent:(id)a1;
- (id)webNodeHighlight;

@end
