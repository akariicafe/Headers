@protocol TSWPAdornmentLineRenderingDelegate;

@interface TSWPAdornmentLine : NSObject <NSCopying>

@property (retain, nonatomic) id<TSWPAdornmentLineRenderingDelegate> renderingDelegate;
@property (readonly, nonatomic) struct CGPoint { double x; double y; } start;
@property (readonly, nonatomic) double length;
@property (readonly, nonatomic) struct CGColor { } *color;
@property (readonly, nonatomic) double thickness;
@property (readonly, nonatomic) unsigned long long lineCount;
@property (readonly, nonatomic) int underline;
@property (readonly, nonatomic) int adornmentLocation;
@property (readonly, nonatomic) double underlineAdjustment;
@property (readonly, nonatomic) BOOL isWhitespace;
@property (readonly, nonatomic) BOOL allowAntialiasing;

- (BOOL)merge:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)copyWithColor:(struct CGColor { } *)a0;
- (void)setStart:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)shouldRenderForLineDrawFlags:(unsigned long long)a0;
- (id)initWithStart:(struct CGPoint { double x0; double x1; })a0 length:(double)a1 color:(struct CGColor { } *)a2 thickness:(double)a3 lineCount:(unsigned long long)a4 underline:(int)a5 adornmentLocation:(int)a6 underLineAdjustment:(double)a7 isWhitespace:(BOOL)a8 renderingDelegate:(id)a9 allowAntialiasing:(BOOL)a10;
- (id)initWithStart:(struct CGPoint { double x0; double x1; })a0 length:(double)a1 color:(struct CGColor { } *)a2 thickness:(double)a3 lineCount:(unsigned long long)a4 underline:(int)a5 adornmentLocation:(int)a6 underLineAdjustment:(double)a7;

@end
