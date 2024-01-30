@interface CSRingLayer : CAShapeLayer

+ (const struct CGPath { } *)newPathForDiameter:(double)a0 lineWidth:(double)a1;
+ (id)ringLayerWithBlendMode:(id)a0 diameter:(double)a1 lineWidth:(double)a2 brightnessAmount:(double)a3 saturationAmount:(double)a4;
+ (id)ringWithDiameter:(double)a0 lineWidth:(double)a1;

- (void)setFillFraction:(double)a0;

@end
