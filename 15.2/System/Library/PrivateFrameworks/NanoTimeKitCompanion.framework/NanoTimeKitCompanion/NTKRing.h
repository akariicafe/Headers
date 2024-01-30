@interface NTKRing : NSObject

@property double fillFraction;
@property double strokeWidth;
@property double backgroundRingAlpha;
@property double radius;
@property long long ringStyle;

+ (id)fillFractionStringForFillFraction:(float)a0;
+ (id)fillFractionStringWithSymbolForFillFraction:(float)a0;
+ (id)_fillFractionStringForFillFraction:(float)a0 withFormatter:(id)a1;

- (id)init;
- (double)_validFillFraction:(double)a0;
- (id)ringImage;
- (id)fillFractionString;
- (id)initWithFillFraction:(double)a0 style:(long long)a1;
- (id)initWithFillFraction:(double)a0 style:(long long)a1 radius:(double)a2 strokeWidth:(double)a3;
- (void)fillFraction:(double)a0;
- (id)fillFractionStringWithSymbol;

@end
