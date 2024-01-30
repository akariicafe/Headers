@class NSMutableArray, CCVegaCGContext;

@interface CCVegaCGLinearGradient : NSObject <CCVegaCGGradientInterface> {
    double _x0;
    double _y0;
    double _x1;
    double _y1;
    NSMutableArray *_colorStops;
    CCVegaCGContext *_context;
}

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0 context:(id)a1;
- (void)addColorStopWithOffset:(double)a0 color:(id)a1;
- (void)fillWithContext:(struct CGContext { } *)a0;
- (id)initWithX0:(double)a0 y0:(double)a1 x1:(double)a2 y1:(double)a3;

@end
