@interface _NSCoreTypesetterLayoutCache : NSObject {
    unsigned long long _count;
    unsigned short *_glyphs;
    struct CGSize { double x0; double x1; } *_advances;
    double _elasticAdvances;
    struct __CTFont { } *_resolvedFont;
    long long _textAlignment;
    struct __CTLine { } *_line;
    BOOL _lineValidForDrawing;
}

- (void)dealloc;

@end
