@class PKRulerLayer;

@interface PKRulerView : UIView

@property (retain, nonatomic) PKRulerLayer *rulerLayer;
@property (nonatomic) BOOL rulerHidden;

- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;

@end
