@interface NTKKeylineImageFactory : NSObject

+ (id)_cornerKeylineWithDevice:(id)a0 size:(struct CGSize { double x0; double x1; })a1 innerCircleRadius:(double)a2 strokeWidth:(double)a3 filled:(BOOL)a4;
+ (id)_heartKeylineWithDevice:(id)a0 outerRadius:(double)a1 innerRadius:(double)a2 sideCircleRadius:(double)a3 topCircleRadius:(double)a4 strokeWidth:(double)a5 filled:(BOOL)a6;
+ (id)_smileKeylineWithDevice:(id)a0 outerRadius:(double)a1 innerRadius:(double)a2 angle:(double)a3 strokeWidth:(double)a4 filled:(BOOL)a5;
+ (id)cornerKeylineWithDevice:(id)a0 corner:(unsigned long long)a1 size:(struct CGSize { double x0; double x1; })a2 innerCircleRadius:(double)a3 strokeWidth:(double)a4 filled:(BOOL)a5;
+ (id)heartKeylineWithDevice:(id)a0 outerRadius:(double)a1 innerRadius:(double)a2 sideCircleRadius:(double)a3 topCircleRadius:(double)a4 strokeWidth:(double)a5 filled:(BOOL)a6;
+ (id)heartKeylineWithDevice:(id)a0 outerRadius:(double)a1 innerRadius:(double)a2 sideComplicationDistance:(double)a3 topComplicationDistance:(double)a4 strokeWidth:(double)a5 filled:(BOOL)a6;
+ (id)smileKeylineWithDevice:(id)a0 outerRadius:(double)a1 innerRadius:(double)a2 angle:(double)a3 strokeWidth:(double)a4 filled:(BOOL)a5;

@end
