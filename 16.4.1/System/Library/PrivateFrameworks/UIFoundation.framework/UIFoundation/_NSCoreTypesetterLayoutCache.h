@class _NSTextAttachmentLayoutContext;

@interface _NSCoreTypesetterLayoutCache : NSObject {
    unsigned long long _count;
    unsigned short *_glyphs;
    struct CGSize { double x0; double x1; } *_advances;
    double _elasticAdvances;
    struct __CTFont { } *_resolvedFont;
    long long _textAlignment;
    struct __CTLine { } *_line;
    _NSTextAttachmentLayoutContext *_textAttachmentLayoutContext;
    BOOL _lineValidForDrawing;
}

- (void)dealloc;

@end
