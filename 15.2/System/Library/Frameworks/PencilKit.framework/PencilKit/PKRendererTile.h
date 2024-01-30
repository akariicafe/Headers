@class PKMetalFramebuffer, NSUUID, NSArray, CALayer;

@interface PKRendererTile : NSObject <NSCopying> {
    _Atomic double _cachedContentsScale;
    _Atomic long long _renderCount;
    _Atomic double _lastUsedTimestamp;
    struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } _drawingTransform;
    BOOL _framebufferIsLocked;
    BOOL _multiplyFramebufferIsLocked;
    BOOL _sixChannelMode;
    BOOL _outOfDate;
    BOOL _hidden;
    CALayer *_tileLayer;
    CALayer *_tileMultiplyLayer;
    PKMetalFramebuffer *_framebuffer;
    PKMetalFramebuffer *_multiplyFramebuffer;
    NSUUID *_identifier;
    long long _level;
    NSArray *_renderedStrokes;
    long long _currentlyRenderingCount;
    double _contentsScale;
    double _opacity;
    struct CGPoint { double x; double y; } _offset;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _drawingFrame;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _frame;
}

- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)debugDescription;

@end
