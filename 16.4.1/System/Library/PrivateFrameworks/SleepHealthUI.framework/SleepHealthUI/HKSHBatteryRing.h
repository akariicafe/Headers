@interface HKSHBatteryRing : NSObject

@property double fillFraction;
@property double strokeWidth;
@property double backgroundRingAlpha;
@property double radius;

- (id)fillColor;
- (id)init;
- (double)_validFillFraction:(double)a0;
- (long long)fillFractionPercent;
- (id)fillFractionString;
- (id)initWithFillFraction:(double)a0 radius:(double)a1 strokeWidth:(double)a2;
- (id)ringImage;

@end
