@interface AVView : UIView

@property (nonatomic) BOOL ignoresTouches;

- (void)setHidden:(BOOL)a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;

@end
