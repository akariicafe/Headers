@class NSString, CCVegaRenderer, JSValue, CCVegaJSFont;

@interface CCVegaCGContext : NSObject <CCVegaCGContextInterface> {
    JSValue *_fillStyle;
    double _globalAlpha;
    NSString *_lineCap;
    NSString *_lineJoin;
    double _lineWidth;
    double _miterLimit;
    NSString *_strokeStyle;
    NSString *_textAlign;
    struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } _currentTransform;
    double _lineDashOffset;
    NSString *_font;
    NSString *_globalCompositeOperation;
    struct CGContext { } *_bitmapContext;
    double _width;
    double _height;
    CCVegaJSFont *_internalFont;
}

@property (weak, nonatomic) CCVegaRenderer *renderer;
@property (readonly) struct CGContext { } *context;
@property double width;
@property double height;
@property (retain) JSValue *fillStyle;
@property double globalAlpha;
@property (retain) NSString *lineCap;
@property (retain) NSString *lineJoin;
@property double lineWidth;
@property double miterLimit;
@property (nonatomic) double pixelRatio;
@property (retain) NSString *strokeStyle;
@property (retain) NSString *textAlign;
@property (retain) NSString *font;
@property double lineDashOffset;
@property (retain) NSString *globalCompositeOperation;

+ (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })flipYAxisWithHeight:(double)a0;

- (void)save;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)restore;
- (void)clip;
- (void)closePath;
- (void)fill;
- (void)stroke;
- (void)textWithString:(id)a0 x:(double)a1 y:(double)a2 drawingMode:(int)a3;
- (void)arcWithX:(double)a0 y:(double)a1 radius:(double)a2 startAngle:(double)a3 endAngle:(double)a4 anticlockwise:(BOOL)a5;
- (void)beginPath;
- (void)bezierCurveToCP1x:(double)a0 cp1y:(double)a1 cp2x:(double)a2 cp2y:(double)a3 x:(double)a4 y:(double)a5;
- (void)clearRectWithX:(double)a0 y:(double)a1 w:(double)a2 h:(double)a3;
- (id)createLinearGradientWithX0:(double)a0 y0:(double)a1 x1:(double)a2 y1:(double)a3;
- (void)fillRectWithX:(double)a0 y:(double)a1 width:(double)a2 height:(double)a3;
- (void)fillTextWithString:(id)a0 x:(double)a1 y:(double)a2;
- (void)invalidateBitmapContext;
- (BOOL)isPointInPathWithX:(double)a0 y:(double)a1;
- (void)lineToX:(double)a0 y:(double)a1;
- (id)measureText:(id)a0;
- (void)moveToX:(double)a0 y:(double)a1;
- (struct CGColor { } *)newColorFromString:(id)a0;
- (void)quadraticCurveToCP1x:(double)a0 cp1y:(double)a1 x:(double)a2 y:(double)a3;
- (void)rectWithX:(double)a0 y:(double)a1 width:(double)a2 height:(double)a3;
- (void)resizeBitmapContext;
- (void)rotateWithAngle:(double)a0;
- (void)setLineDashWithSegments:(id)a0;
- (void)setTransformWithA:(double)a0 b:(double)a1 c:(double)a2 d:(double)a3 e:(double)a4 f:(double)a5;
- (void)strokeTextWithString:(id)a0 x:(double)a1 y:(double)a2;
- (void)translateWithX:(double)a0 y:(double)a1;

@end
