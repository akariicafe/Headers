@class UIColor;

@interface HKElectrocardiogramGridOptions : NSObject

@property (nonatomic) unsigned long long unitMultiple;
@property (nonatomic) unsigned long long axis;
@property (retain, nonatomic) UIColor *lineColor;
@property (nonatomic) double lineWidth;
@property (readonly, nonatomic) struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } scale;

- (void).cxx_destruct;
- (id)initWithUnitMultiple:(long long)a0 axis:(unsigned long long)a1 lineColor:(id)a2 lineWidth:(double)a3;

@end
