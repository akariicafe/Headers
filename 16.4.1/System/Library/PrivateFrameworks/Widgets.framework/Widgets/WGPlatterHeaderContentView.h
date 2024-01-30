@interface WGPlatterHeaderContentView : PLPlatterHeaderContentView

@property (nonatomic) struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } utilityButtonTransform;

- (id)init;
- (void)_layoutUtilityButtonWithScale:(double)a0;

@end
