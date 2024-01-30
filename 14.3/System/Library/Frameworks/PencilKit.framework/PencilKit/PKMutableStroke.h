@class UIColor;

@interface PKMutableStroke : PKStroke

@property (copy, nonatomic) UIColor *_color;

- (void)_setColor:(id)a0;
- (void)_applyTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0;
- (void)_setLocation:(struct CGPoint { double x0; double x1; })a0 atIndex:(unsigned long long)a1;

@end
