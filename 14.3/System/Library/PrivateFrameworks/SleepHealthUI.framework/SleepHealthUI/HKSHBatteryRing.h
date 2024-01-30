@interface HKSHBatteryRing : NSObject

@property double fillFraction;
@property double strokeWidth;
@property double backgroundRingAlpha;
@property double radius;

- (id)fillColor;
- (id)init;
- (id)initWithFillFraction:(double)a0 radius:(double)a1 strokeWidth:(double)a2;
- (double)_validFillFraction:(double)a0;
- (long long)fillFractionPercent;
- (id)ringImage;
- (id)fillFractionString;

@end
