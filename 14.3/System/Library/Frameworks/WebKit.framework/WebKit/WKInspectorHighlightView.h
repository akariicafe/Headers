@class NSMutableArray;

@interface WKInspectorHighlightView : UIView {
    NSMutableArray *_layers;
}

- (void)dealloc;
- (void)_createLayers:(unsigned long long)a0;
- (void)_layoutForNodeHighlight:(const struct Highlight { struct Color { union { unsigned long long x0; struct ExtendedColor *x1; } x0; } x0; struct Color { union { unsigned long long x0; struct ExtendedColor *x1; } x0; } x1; struct Color { union { unsigned long long x0; struct ExtendedColor *x1; } x0; } x2; struct Color { union { unsigned long long x0; struct ExtendedColor *x1; } x0; } x3; struct Color { union { unsigned long long x0; struct ExtendedColor *x1; } x0; } x4; int x5; struct Vector<WebCore::FloatQuad, 0, WTF::CrashOnOverflow, 16, WTF::FastMalloc> { struct FloatQuad *x0; unsigned int x1; unsigned int x2; } x6; BOOL x7; } *)a0 offset:(unsigned int)a1;
- (void)_layoutForNodeListHighlight:(const struct Highlight { struct Color { union { unsigned long long x0; struct ExtendedColor *x1; } x0; } x0; struct Color { union { unsigned long long x0; struct ExtendedColor *x1; } x0; } x1; struct Color { union { unsigned long long x0; struct ExtendedColor *x1; } x0; } x2; struct Color { union { unsigned long long x0; struct ExtendedColor *x1; } x0; } x3; struct Color { union { unsigned long long x0; struct ExtendedColor *x1; } x0; } x4; int x5; struct Vector<WebCore::FloatQuad, 0, WTF::CrashOnOverflow, 16, WTF::FastMalloc> { struct FloatQuad *x0; unsigned int x1; unsigned int x2; } x6; BOOL x7; } *)a0;
- (void)_layoutForRectsHighlight:(const struct Highlight { struct Color { union { unsigned long long x0; struct ExtendedColor *x1; } x0; } x0; struct Color { union { unsigned long long x0; struct ExtendedColor *x1; } x0; } x1; struct Color { union { unsigned long long x0; struct ExtendedColor *x1; } x0; } x2; struct Color { union { unsigned long long x0; struct ExtendedColor *x1; } x0; } x3; struct Color { union { unsigned long long x0; struct ExtendedColor *x1; } x0; } x4; int x5; struct Vector<WebCore::FloatQuad, 0, WTF::CrashOnOverflow, 16, WTF::FastMalloc> { struct FloatQuad *x0; unsigned int x1; unsigned int x2; } x6; BOOL x7; } *)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)update:(const struct Highlight { struct Color { union { unsigned long long x0; struct ExtendedColor *x1; } x0; } x0; struct Color { union { unsigned long long x0; struct ExtendedColor *x1; } x0; } x1; struct Color { union { unsigned long long x0; struct ExtendedColor *x1; } x0; } x2; struct Color { union { unsigned long long x0; struct ExtendedColor *x1; } x0; } x3; struct Color { union { unsigned long long x0; struct ExtendedColor *x1; } x0; } x4; int x5; struct Vector<WebCore::FloatQuad, 0, WTF::CrashOnOverflow, 16, WTF::FastMalloc> { struct FloatQuad *x0; unsigned int x1; unsigned int x2; } x6; BOOL x7; } *)a0;
- (void)_removeAllLayers;

@end
